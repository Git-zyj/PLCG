/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212584
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
    var_13 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned long long int) (short)-1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0 - 1] [(unsigned short)14] [i_0 - 1])) <= (max((((/* implicit */long long int) (unsigned short)65530)), (arr_1 [i_1] [i_0])))))) < (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)5)) > (arr_3 [i_1])))) <= (min((arr_3 [11U]), (arr_3 [i_1]))))))));
                var_15 = ((/* implicit */unsigned short) arr_3 [(unsigned char)8]);
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((signed char) (-(((arr_3 [i_0]) ^ (((/* implicit */int) (signed char)-1))))))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_1 [i_0] [i_1]))) : (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_1]) - (3725714267U)))))))) : (max((((/* implicit */long long int) arr_4 [i_0 - 1] [(signed char)4])), (arr_1 [(unsigned short)12] [i_1])))));
            }
        } 
    } 
}
