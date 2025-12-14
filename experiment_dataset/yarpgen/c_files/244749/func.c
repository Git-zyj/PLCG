/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244749
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */int) max((max((arr_5 [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_1] [i_1 - 2]))), ((~(arr_6 [i_1] [i_1] [i_1] [i_1 - 2])))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) 302774006U)), (8666227778015266970LL)))) ? (3152740555U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))), (((/* implicit */unsigned int) 1615345698))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)65532));
                        var_21 = ((/* implicit */int) min((max((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))), (min((arr_6 [i_0] [i_1] [i_2] [i_3]), (15338435027656582029ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1834838149U)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)3)), ((unsigned short)127)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_0)) : (arr_0 [i_0]))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned char) var_19))))) : (299995739U)));
                        var_23 |= ((/* implicit */int) arr_5 [i_0] [i_2] [i_2]);
                        var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_4]))), ((~(((/* implicit */int) (unsigned char)124))))))), (((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1 - 2])) ? (arr_11 [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_11 [i_1 + 2] [i_5]), (((/* implicit */unsigned int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1])) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 2]))) : (((((/* implicit */_Bool) 2615339612682328288ULL)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_5])) ? (((/* implicit */unsigned long long int) 613832923U)) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_5] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) < (-3660895731180901534LL))))) : (arr_6 [i_0] [i_1 + 2] [i_0] [i_5]))))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min(((~(var_5))), (max((arr_5 [i_1] [i_1] [i_1 - 2]), (((/* implicit */unsigned long long int) ((-5520491129911959667LL) / (((/* implicit */long long int) 134217727U))))))))))));
                            arr_17 [i_0] [i_0] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2512701960U)) ? (268435455U) : (8U))), ((~(arr_11 [i_0] [i_0])))));
                            var_28 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) <= (((((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1 + 1] [i_1 + 2])) ? (min((8672005633879849508ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 1])))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) % (((/* implicit */int) (unsigned short)29909))))) ? (var_12) : ((-(var_10)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) min((630397494), (((/* implicit */int) var_11))))) : (var_9))) : (var_19))))));
}
