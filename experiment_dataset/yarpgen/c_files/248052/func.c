/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248052
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((unsigned int) arr_3 [i_0 - 1])) + (min((arr_3 [i_0 - 1]), (arr_1 [i_1]))))))));
                arr_6 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_13)) : (arr_0 [i_0 - 1] [i_0 - 1]))), (((/* implicit */int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            arr_13 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((((long long int) (((_Bool)0) ? (((/* implicit */long long int) 3023077284U)) : (5084904844562822358LL)))) / (((/* implicit */long long int) var_15))));
                            var_19 = ((/* implicit */unsigned long long int) (unsigned short)45879);
                            var_20 = ((/* implicit */signed char) var_8);
                            /* LoopSeq 1 */
                            for (signed char i_6 = 1; i_6 < 20; i_6 += 2) 
                            {
                                var_21 = ((/* implicit */long long int) arr_19 [i_0 + 1] [i_1] [i_4] [i_6]);
                                var_22 = (+(((unsigned int) var_8)));
                            }
                            /* LoopSeq 1 */
                            for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                            {
                                var_23 ^= (_Bool)0;
                                arr_24 [i_1] [i_4] [i_0] [i_5 + 4] [i_1] = ((/* implicit */_Bool) (~(((unsigned int) ((int) var_15)))));
                                var_24 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (var_7))), (((/* implicit */long long int) (!(((((/* implicit */long long int) arr_15 [i_0] [i_4])) < (-5084904844562822358LL))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_0);
}
