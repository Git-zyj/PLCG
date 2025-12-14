/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246094
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
    var_11 = ((/* implicit */int) (unsigned short)594);
    var_12 = ((((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)598)))) == (((/* implicit */int) var_1)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)594)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)593)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_9), (var_9)))), (arr_2 [i_0 - 1])))) ? ((((!(((/* implicit */_Bool) 890475245488944807ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))) : (var_3))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0 - 2])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) var_10);
                                arr_12 [i_4] = ((/* implicit */unsigned long long int) var_6);
                                var_15 |= ((/* implicit */signed char) min((((/* implicit */int) arr_5 [i_0])), ((~(((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 2]))))));
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))));
                                var_16 -= ((/* implicit */signed char) ((((unsigned long long int) (unsigned short)64942)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_0 + 3]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [(unsigned short)10] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1] [13] [i_5 - 1])), (var_8)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)36))))) : (arr_8 [i_0 - 2] [i_0 + 1] [i_5 + 1]))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned long long int) ((int) arr_11 [i_0] [i_0 + 1] [i_5 - 1] [i_0 + 1] [i_1]))))));
                    }
                    for (short i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_6 - 1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_0] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_1] [i_6 - 1] [i_0 + 1]))) : (17556268828220606816ULL))) * (((/* implicit */unsigned long long int) ((int) arr_11 [(unsigned char)5] [i_1] [(unsigned char)5] [i_6] [i_2])))));
                        arr_20 [i_0] [i_1] [i_2] [i_2] [(unsigned char)14] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) arr_10 [i_0] [i_1]))) ? (((/* implicit */int) arr_6 [i_6 - 1] [i_0 + 2])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_2] [i_2] [i_6])))) == (((/* implicit */int) var_7))));
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0 + 1]))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned short)593)))))))));
                    }
                }
            } 
        } 
    } 
}
