/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209250
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
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((-3676289112567491125LL) / (((/* implicit */long long int) var_9))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1] [i_1 + 4] [i_3 - 2] [i_3 - 2]) : (arr_6 [i_1] [i_1 + 2] [i_3 - 3] [i_1])))) <= (((((/* implicit */_Bool) -1)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)81))) + (var_7))) : (var_8)))));
                                var_15 |= ((/* implicit */short) (+(min((arr_10 [i_4] [i_4] [i_1] [i_3 + 1] [i_2] [i_4] [i_2]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_3 - 4])))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) 16777215LL))));
                                arr_12 [i_1] [i_1 + 4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)10211)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1709434107)) ? (var_10) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((arr_0 [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))) / (((var_11) >> (((((/* implicit */int) min((arr_5 [i_0] [i_2] [i_2] [i_0]), ((unsigned char)140)))) - (127)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_6] = var_1;
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_13 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_2 [i_1 - 1] [i_1]))), (((/* implicit */unsigned long long int) ((var_10) != (((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (short)-1))))))))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((long long int) var_1)) / (arr_13 [i_5] [i_1 + 1]))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 354684311)))) ? (((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_1] [i_2] [i_5] [i_7]) + (arr_6 [i_5] [i_5] [i_2] [i_5])))) : (arr_10 [i_5] [i_1] [i_7] [i_7] [i_2] [i_1 + 4] [i_2])))) || (((/* implicit */_Bool) var_2))))));
                            var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5])) || (((/* implicit */_Bool) (signed char)58))));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_7] [i_5] [i_7] = ((/* implicit */_Bool) (-(max((arr_16 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned char)65))))));
                        }
                        var_22 = ((/* implicit */long long int) arr_2 [i_0] [i_2]);
                        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) + (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_11))))), (((/* implicit */unsigned long long int) var_1))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_11))));
}
