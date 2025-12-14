/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28860
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
    var_19 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_13)))))) % (((max((var_8), (((/* implicit */long long int) 2147483136U)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (var_2)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1] [i_3]);
                                var_21 = ((/* implicit */_Bool) (~(9223372036854775807LL)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [1LL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1])) ? (arr_14 [i_1 - 1] [i_1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 2]) : (arr_14 [i_1 + 3] [16U] [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 + 3])));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_19 [i_0] [9] [17U] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147484161U)) || (((/* implicit */_Bool) 2147484160U))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) 2147483136U)) % (arr_4 [i_5])));
                }
                arr_20 [8LL] [i_0] = ((/* implicit */short) (+(((unsigned int) ((short) 5711489403521404290ULL)))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_1);
    var_24 = ((/* implicit */signed char) (((-(((((/* implicit */int) var_0)) & (((/* implicit */int) var_15)))))) / (((/* implicit */int) ((((/* implicit */int) var_0)) < (var_16))))));
}
