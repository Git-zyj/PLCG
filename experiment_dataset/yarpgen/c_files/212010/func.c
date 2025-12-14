/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212010
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((((unsigned long long int) max((339205415U), (3612299316U)))), (min((max((140737488354304ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (+(268435455U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 |= ((/* implicit */short) ((((((/* implicit */_Bool) 647459160U)) || (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_3 [i_0] [i_2] [(unsigned char)1])))))) : (min((1960394804U), (268435444U))))) : (((min((var_5), (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2])))))));
                                arr_11 [i_0] [i_0] [i_2] [13] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))), (max(((+(((/* implicit */int) (unsigned short)46416)))), (((/* implicit */int) arr_3 [i_2 - 1] [(unsigned short)11] [i_1 + 2]))))));
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_7)) - (738)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [14LL] [i_2] [2LL] [i_2 + 1])))))) : (max((((/* implicit */unsigned long long int) 167129838U)), (((((/* implicit */_Bool) arr_7 [i_2 + 1] [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98)))))))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) 2088960U))));
                    var_17 = ((/* implicit */long long int) (((~(((/* implicit */int) max(((unsigned short)8561), (((/* implicit */unsigned short) (signed char)-56))))))) / (((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_12);
}
