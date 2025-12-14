/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3245
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))) ? (618161039) : (((/* implicit */int) (unsigned char)64)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_5)) > (((/* implicit */int) (signed char)-100)))))) ? (2147483647) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-80)), ((unsigned char)46))))));
                            var_19 = ((/* implicit */unsigned char) var_5);
                            arr_15 [18U] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        }
                        for (long long int i_5 = 3; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) var_17));
                            var_20 -= min((((/* implicit */unsigned long long int) ((long long int) ((unsigned int) (signed char)-54)))), (((var_15) >> (((((((/* implicit */_Bool) (signed char)-100)) ? (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (15690964645221049632ULL))))));
                        }
                        for (long long int i_6 = 3; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_3] [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0]))));
                            arr_23 [i_0] [i_0] [i_0] [i_2] [i_3] [i_1] [i_6] = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((arr_16 [i_6 - 1] [i_6 - 1] [i_1] [i_1]) >> (((((/* implicit */int) max((var_9), (arr_21 [i_6] [i_6 - 3] [i_6] [i_1] [i_6])))) + (11107))))) & (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-139)) % (((/* implicit */int) (short)32754)))))))))) : (((/* implicit */long long int) ((((arr_16 [i_6 - 1] [i_6 - 1] [i_1] [i_1]) >> (((((((/* implicit */int) max((var_9), (arr_21 [i_6] [i_6 - 3] [i_6] [i_1] [i_6])))) + (11107))) - (38836))))) & (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-139)) % (((/* implicit */int) (short)32754))))))))));
                            var_21 = ((/* implicit */short) ((signed char) ((long long int) ((((/* implicit */int) (short)10933)) / (((/* implicit */int) (unsigned char)185))))));
                        }
                        arr_24 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_7] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */short) (signed char)-105);
                        arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (min((arr_18 [i_0] [i_1 - 1] [i_2] [i_1] [i_1 - 1]), (((/* implicit */unsigned long long int) var_17))))));
                    }
                }
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) (~((~(var_2)))))) ? (max((((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (min((((/* implicit */unsigned long long int) max((var_10), (var_10)))), (((((/* implicit */_Bool) (short)10933)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) : (18446744073709551612ULL))))));
    /* LoopSeq 2 */
    for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        var_24 = ((/* implicit */int) var_11);
        arr_32 [i_8] [i_8] |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (arr_30 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8])))))) ? (min((arr_12 [i_8] [i_8] [i_8]), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) 1395740888U)))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)20014)) == (((/* implicit */int) (unsigned char)178))))))))));
    }
    for (unsigned long long int i_9 = 1; i_9 < 24; i_9 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((int) arr_33 [i_9 - 1] [i_9 - 1]));
        arr_35 [i_9] [i_9] = ((/* implicit */signed char) var_10);
        arr_36 [i_9] = ((unsigned long long int) ((short) arr_33 [i_9 + 1] [i_9 + 1]));
        arr_37 [i_9] = ((/* implicit */int) ((short) ((((/* implicit */int) arr_34 [i_9 + 1])) & (((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    }
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_16))));
}
