/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203090
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */int) max(((_Bool)1), (((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((~((~(var_4)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (short)8128)), ((unsigned short)22801)));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_2] [(_Bool)1] [i_3] [i_1] = ((/* implicit */signed char) (~((~(((((/* implicit */int) (unsigned short)42735)) & (((/* implicit */int) (signed char)(-127 - 1)))))))));
                        var_12 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)22814)))) != (((((/* implicit */_Bool) (-(var_10)))) ? ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)245))))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */_Bool) max((((((/* implicit */int) (signed char)-59)) * (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22795)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_2] [(short)10])) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((((arr_7 [i_1] [i_4 + 1] [i_4 - 3] [i_1]) >> (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && ((_Bool)1)))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)42735)) : (((/* implicit */int) (_Bool)1))))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_4 - 2])) ? (0U) : (((/* implicit */unsigned int) arr_4 [i_4 + 1])))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)125)) & (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)127))))));
                    }
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551597ULL)) ? (min((((((/* implicit */int) var_7)) * (((/* implicit */int) (short)-7756)))), (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned char)40))))))) : (((/* implicit */int) var_1))));
                        arr_15 [(unsigned char)12] [i_2] [i_1] [(signed char)13] = ((/* implicit */unsigned char) 259454389U);
                    }
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_6] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) max((var_3), (arr_13 [i_2] [i_1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), (arr_18 [i_0] [i_1] [i_2] [i_6] [i_7])))) : (((/* implicit */int) (_Bool)1))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (_Bool)1))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [(_Bool)1] [i_2] [(short)6] [i_6] = ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_4)))) ? (min((arr_14 [i_8] [i_8] [i_6] [i_2] [i_1] [(unsigned char)6]), (5687914872350483819ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1]))));
                            arr_27 [i_0] [i_1] [(_Bool)1] [i_2] [7U] [i_6] [i_8] = ((/* implicit */unsigned long long int) (unsigned short)22801);
                            var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 3333339388U)) || (((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) (unsigned short)3))))))) >= (((((/* implicit */int) (unsigned short)38389)) ^ ((+(((/* implicit */int) var_0))))))));
                        }
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max(((~(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) 13325469936838134124ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)0)))))))));
                        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_8)))) ? ((~(((/* implicit */int) (signed char)-108)))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-119))))));
                    }
                }
            } 
        } 
    } 
}
