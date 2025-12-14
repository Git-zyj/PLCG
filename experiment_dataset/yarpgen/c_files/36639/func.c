/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36639
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (_Bool)1))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(17746245882550185760ULL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_2 [i_1 - 1]);
                var_17 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) -1941081124)) ? (((/* implicit */int) arr_3 [(short)7] [i_1] [i_1])) : (1941081131))), (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))));
                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)35915))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(short)10] [10ULL] [i_4] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_1 [i_0]));
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (~(var_0)));
                                var_19 ^= ((/* implicit */unsigned short) (signed char)111);
                                arr_15 [i_3 - 2] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) 2197359707U));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_6])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] [i_6])) : (var_4)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))));
                }
                arr_21 [i_0] [i_0] = ((/* implicit */signed char) 1897739757);
            }
        } 
    } 
}
