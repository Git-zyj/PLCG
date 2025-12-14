/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28739
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) -885202419705651557LL);
                    var_17 = ((/* implicit */_Bool) max((max((arr_9 [i_1] [i_1]), (((/* implicit */long long int) arr_5 [i_0] [i_1])))), (((/* implicit */long long int) max((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) (~(7125715693767583924ULL)));
                                var_19 = ((/* implicit */long long int) min((var_19), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 10211880086927785787ULL))))), (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))))));
                                var_20 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_3 [(signed char)1] [i_2] [i_2 + 2]))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_1 [i_2 + 3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_24 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_22 [i_1] [i_1]);
                                var_22 = ((/* implicit */signed char) var_15);
                                var_23 ^= ((/* implicit */signed char) arr_13 [i_2] [i_5] [(unsigned char)2] [i_5] [i_6] [i_5] [i_6]);
                                var_24 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (4106643325548949678ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -459005186111179952LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (1ULL)))));
}
