/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220177
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 - 1] [i_1]))))) ? (((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned char) var_13)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1 + 1] [i_1 + 1])) ? (arr_8 [i_0] [i_1] [i_1 + 1] [i_2]) : (arr_8 [i_0] [i_1] [i_1 - 1] [i_1 - 1]))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1])) ? (((((/* implicit */_Bool) 3576126394823100911ULL)) ? (890028420U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30858))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0])))))));
                            var_18 -= ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_4))));
                arr_10 [i_1] = ((/* implicit */long long int) ((unsigned long long int) 3576126394823100901ULL));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned char) var_14);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (6278401211641427836ULL)));
}
