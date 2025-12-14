/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245165
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min(((~((~(((/* implicit */int) arr_3 [i_1])))))), (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) (~((+(max((((/* implicit */long long int) 4294967295U)), (-4LL)))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (14336) : ((~(((/* implicit */int) (unsigned short)36093))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_22 = ((/* implicit */short) (_Bool)1);
                            arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_1] = (+(((/* implicit */int) min(((short)-2322), (((/* implicit */short) var_15))))));
                        }
                        for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
                        {
                            arr_17 [i_0] [8U] [i_1] [8U] [i_5] = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_15 [i_0] [i_1 + 3] [i_1 + 3] [(signed char)15] [i_3] [i_1 + 3]))));
                            var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)127)) <= (((/* implicit */int) (signed char)-78)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-55)) <= (((/* implicit */int) (signed char)68))))) : (((/* implicit */int) (signed char)-50))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-50))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (short)29056))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_5 - 2]))) : (arr_11 [i_0] [i_0] [i_0] [i_3] [i_5 + 2]))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21421))) : (var_4)))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_1 - 1] [i_1 + 3]))) ? (((/* implicit */unsigned int) (+(0)))) : (((arr_1 [i_1 - 1] [i_1 + 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 3]))) : (2183235136U)))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(8589934591ULL)))) ? (arr_2 [i_6] [i_6]) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)31080)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22))) : (-8LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_8 [i_0] [i_0]))))))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) : (min((var_14), (((/* implicit */unsigned long long int) (short)-2325)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_0] [i_0] [i_1 + 2]) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 3] [i_1 + 3]))))))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (short)5)) ? (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (((var_19) ? (16244243088278791574ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))))));
                        arr_20 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)128)) ? (min((((/* implicit */long long int) (signed char)127)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 - 1] [i_1 + 3])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1656492815683215LL)))))) : (max((((/* implicit */long long int) arr_10 [18LL] [i_2])), (arr_9 [i_1] [i_1] [i_6]))))) : (15LL)));
                    }
                    for (unsigned int i_7 = 4; i_7 < 21; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) (signed char)127);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((((/* implicit */int) min(((short)-13019), (((/* implicit */short) var_7))))) == ((~(((/* implicit */int) (signed char)-90)))))) ? (min((-2653942612348071319LL), (((/* implicit */long long int) (unsigned char)18)))) : (((/* implicit */long long int) (~((-2147483647 - 1))))))))));
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (short)-23752))))) ? (arr_16 [i_1 + 3] [i_1 + 2]) : (((((/* implicit */_Bool) arr_16 [i_1 + 3] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13019))) : (arr_16 [i_1 + 3] [i_1 + 2])))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13041)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 3] [i_1]))) : (4294967295U)))) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_2])) : ((~(((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 3])))))))));
                    var_32 = ((/* implicit */short) arr_11 [i_0] [i_1] [i_0] [i_1] [i_2]);
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) max((((/* implicit */int) var_0)), ((+(var_9))))))));
    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (-((~(var_5))))))));
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_17)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_18)));
    var_36 = ((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12)))))));
}
