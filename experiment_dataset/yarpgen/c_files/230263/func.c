/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230263
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) min((((/* implicit */long long int) 0)), (-5993084189178152850LL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) /* same iter space */
                        {
                            var_12 = ((/* implicit */unsigned long long int) var_4);
                            var_13 = ((/* implicit */unsigned long long int) var_3);
                            arr_13 [i_4] = ((/* implicit */unsigned short) ((var_6) != (((/* implicit */long long int) arr_5 [i_0 + 1] [i_0 + 1] [i_4 - 1] [i_4 + 2]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
                        {
                            var_14 = ((277454307659486537LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                            var_15 = ((/* implicit */unsigned short) 153034911702621798ULL);
                            var_16 = ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_5] [i_3]);
                            var_17 = ((/* implicit */short) -277454307659486537LL);
                            var_18 = ((/* implicit */unsigned int) ((long long int) (~(9223372036854775807LL))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_6] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0]))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_4) : (min((((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_0] [i_6] [i_6])), (min((var_9), (((/* implicit */int) var_2))))))));
                                var_21 += ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [11] [7ULL]))))) << (((/* implicit */int) arr_17 [i_7] [i_6] [i_1] [i_0])))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) < (min((277454307659486536LL), (var_6)))))));
                                var_22 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_18 [i_0] [i_0 + 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((9223372036854775807LL) << (((((-8192) + (8204))) - (12)))));
}
