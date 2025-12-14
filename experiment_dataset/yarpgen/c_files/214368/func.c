/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214368
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
    var_17 = ((/* implicit */_Bool) var_1);
    var_18 &= ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) arr_8 [i_0] [(unsigned short)11] [i_3] [(_Bool)1]);
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((((((((/* implicit */_Bool) arr_5 [i_0] [12] [i_0])) ? (arr_13 [i_0 + 3] [i_1 + 1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_1 [i_3])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), ((unsigned short)6218))))))) | ((-(18446744073709551610ULL))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_3))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (arr_3 [i_0 + 1])));
                        var_22 ^= ((/* implicit */unsigned short) arr_17 [i_0 - 3] [i_1] [i_2] [i_1] [i_4] [i_4]);
                        var_23 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) (short)10818)))));
                    }
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) max((((/* implicit */int) arr_0 [i_0 - 3])), ((-(((/* implicit */int) arr_0 [i_0 + 1]))))));
                        arr_20 [i_1] [i_0] |= ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) & (arr_5 [i_1 + 1] [i_0 + 1] [i_0 - 2])))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) arr_13 [i_6] [i_2] [i_1] [(unsigned char)4]);
                        arr_23 [i_6] [i_0 - 4] [i_1] [i_1 + 1] [i_0 - 4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(1185935608)))) ? (((((((/* implicit */unsigned int) 1914572624)) - (arr_12 [(unsigned short)5]))) + (((/* implicit */unsigned int) -1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) arr_0 [i_0])))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */int) min(((-(arr_3 [i_7 - 1]))), (max((arr_3 [i_7 - 1]), (arr_3 [i_7 + 2])))));
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned short)27176))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_25 [i_2] [i_7 + 1] [i_7] [i_8] [i_8 - 1])), (((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (unsigned char)238)) - (231)))))))) : (((long long int) (unsigned char)46))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((((/* implicit */_Bool) var_10)) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))), (18446744073709551615ULL))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) 8127930660981009075LL)) : (var_11))));
}
