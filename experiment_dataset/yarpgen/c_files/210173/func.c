/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210173
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(var_4))))));
    var_18 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((long long int) ((unsigned short) arr_8 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_0]));
                    arr_10 [i_0] [i_2] = ((/* implicit */short) (-(min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) == (arr_8 [i_0] [i_1] [i_2 + 1] [i_0])))), ((+(((/* implicit */int) arr_0 [16] [i_0]))))))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (4027818997059030161LL) : (arr_8 [i_0] [i_0] [i_1] [(short)8]))));
                    var_21 &= ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
    } 
}
