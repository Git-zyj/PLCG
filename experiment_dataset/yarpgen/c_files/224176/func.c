/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224176
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_2] [i_2] [i_0] = max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (arr_1 [i_0] [5LL]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))));
                    var_11 = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                    var_12 = ((/* implicit */signed char) arr_0 [i_2]);
                }
                for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((int) ((var_6) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_3])) * (((/* implicit */int) arr_0 [i_1]))))))));
                    var_13 = ((/* implicit */unsigned int) ((int) arr_8 [i_0] [i_0] [i_3]));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */long long int) arr_10 [i_3 - 1] [i_5]);
                                var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (short)-32755)))) : (max((((/* implicit */int) (_Bool)0)), (arr_3 [i_0] [i_1])))))) ^ (((long long int) ((((/* implicit */_Bool) arr_10 [(unsigned char)5] [(unsigned char)5])) || (((/* implicit */_Bool) 6635515366690482804LL)))))));
                                arr_17 [i_0] [i_1] [i_4] [(signed char)6] [i_4] [i_4] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((signed char) -6215557764218631120LL))))), (((/* implicit */int) (((+(((/* implicit */int) var_1)))) == (((((/* implicit */_Bool) 2035489007646936969ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)87)), (6635515366690482798LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3712173468U)) && (((/* implicit */_Bool) 4050795410U))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (var_7)))))));
                }
                arr_19 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [(short)7] [i_0] [i_0] [i_0]);
                arr_20 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                var_16 |= ((/* implicit */signed char) (((_Bool)1) ? (1615003523) : (((/* implicit */int) (signed char)51))));
                var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((long long int) var_10))));
    var_19 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) & (var_9))) > (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_20 *= ((/* implicit */unsigned long long int) (signed char)-64);
}
