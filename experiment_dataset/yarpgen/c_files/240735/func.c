/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240735
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_1] [i_0])) : (((/* implicit */int) arr_1 [0U]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1] [(signed char)10] [i_0]))) : (arr_3 [i_1 - 1] [i_1 - 1])));
                var_12 = ((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 3]);
                var_13 |= ((/* implicit */unsigned short) arr_0 [i_0] [i_1 - 1]);
                arr_4 [(unsigned char)1] [i_1] [(unsigned char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2])) ? (((((/* implicit */_Bool) (unsigned short)40859)) ? (arr_3 [i_0] [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_0 [i_0] [i_1]))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1 - 1])))))));
                var_14 = arr_1 [i_0];
            }
        } 
    } 
    var_15 = var_3;
}
