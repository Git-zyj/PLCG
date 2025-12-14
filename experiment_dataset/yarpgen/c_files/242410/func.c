/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242410
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
    var_20 = min(((~(((unsigned int) var_6)))), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (signed char)110)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_19)), (var_16)))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (arr_2 [i_1]))))), (((/* implicit */long long int) var_13))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (1995863292U)))))));
                            var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1639)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_5 [i_3] [i_3 + 1] [i_3 + 1])))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)242))))), (88225998U)));
                            var_24 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    var_25 = ((/* implicit */short) (((_Bool)1) ? (((long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (3073147496U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1639)))))) : (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-13955)) : (((/* implicit */int) (unsigned char)14)))))))));
                    var_26 = (signed char)(-127 - 1);
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */short) var_10);
                    var_27 = var_17;
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] = var_16;
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) var_15)))))))) > (((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_0] [i_0 + 1]))));
                    arr_22 [i_0] [i_0] = ((/* implicit */signed char) max(((~(var_12))), (((/* implicit */unsigned long long int) ((long long int) (_Bool)0)))));
                    var_29 = ((/* implicit */long long int) var_8);
                }
                var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_17), (((/* implicit */short) (signed char)-10))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (unsigned char i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                {
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || ((!(((/* implicit */_Bool) arr_3 [i_9 + 2] [i_9 - 1]))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9] [i_9 - 1] [i_9] [i_9 - 1])) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_18))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (max((((/* implicit */unsigned int) (unsigned short)61580)), (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_7] [(unsigned short)2] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)(-127 - 1))))))))) : (((((/* implicit */_Bool) max((var_16), (var_16)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (18446744073709551604ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_27 [12U] [i_8])))))));
                                var_33 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27962)))))), (((/* implicit */int) var_2))));
                                var_34 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)28133))));
                                arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = (((~(var_5))) & (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((_Bool) var_15))) : (((/* implicit */int) ((unsigned char) (unsigned short)0)))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_5))))))));
                }
            } 
        } 
    } 
}
