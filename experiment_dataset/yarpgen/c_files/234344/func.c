/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234344
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0 - 1] [i_0] [i_0 - 1] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned long long int) 141863388262170624ULL))) ? (18304880685447380971ULL) : (((/* implicit */unsigned long long int) ((var_5) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) (short)0))))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18304880685447380971ULL))))) >> (((((/* implicit */int) arr_3 [i_0 + 3] [i_1 + 2] [i_1 + 4])) + (105))))))));
                arr_6 [i_1] [i_1 + 2] [i_0] &= ((/* implicit */long long int) (short)-1);
                var_14 = ((/* implicit */unsigned char) var_10);
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13))) : (arr_8 [i_0] [i_1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) != (((/* implicit */int) (short)-13)))))) : (max((arr_9 [i_0] [5] [i_0 + 3] [i_0]), (((/* implicit */long long int) var_12))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min(((~(arr_9 [i_1 + 1] [i_3 - 3] [i_3] [i_3]))), (((/* implicit */long long int) ((signed char) arr_3 [i_1 + 1] [i_3 + 2] [i_3]))))))));
                        var_17 = ((/* implicit */short) (unsigned char)29);
                        arr_12 [i_3] [i_1] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3 + 3])) ? (((/* implicit */unsigned long long int) ((long long int) ((arr_9 [i_0] [i_1] [i_2] [i_3]) / (-2452506100892472313LL))))) : (var_9))))));
                    }
                    for (long long int i_4 = 4; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_1 - 1] [i_2] &= ((/* implicit */long long int) ((((/* implicit */int) min((arr_14 [i_1 + 2] [i_1 + 3] [i_1 + 4] [i_2] [i_1 + 2]), (arr_14 [i_1 - 1] [i_1] [i_1 + 1] [i_2] [i_1 + 4])))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_1] [(short)2] [i_1 + 4] [i_2] [i_1 + 4])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1 + 1] [i_2] [i_1 + 1]))))));
                        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 + 2] [i_1] [i_0 + 2]))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_7))))), (((unsigned int) max((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2])))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (max((min((arr_8 [i_0 - 1] [i_0] [i_0 + 1]), (((/* implicit */unsigned int) arr_7 [i_0 + 2] [i_0] [i_0])))), (((/* implicit */unsigned int) ((unsigned short) var_9)))))));
                    }
                }
                for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_3)) ? ((+(var_10))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_0] [i_0]), (((/* implicit */short) arr_14 [i_0] [i_1] [i_5] [i_5] [i_1])))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_1 - 1])) ? ((+(((/* implicit */int) (short)-12)))) : (((/* implicit */int) arr_10 [i_1] [i_5])))))));
                    var_22 = ((/* implicit */unsigned char) arr_4 [i_5]);
                    var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) (short)-19434))))) ? (((((arr_4 [i_5]) > (((/* implicit */unsigned long long int) arr_0 [i_0 + 3])))) ? (((var_2) >> (((((/* implicit */int) arr_2 [i_5])) + (8448))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1 + 2] [i_1] [i_0]))))) : (max(((-(492107633290971263LL))), (((/* implicit */long long int) arr_1 [i_0 + 1]))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-7226965904341892338LL)))) ? (((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned short)32166)))) : (((/* implicit */int) min((var_12), (((/* implicit */short) (unsigned char)29)))))))), (((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) max((var_10), (var_4))))))));
    var_25 = ((/* implicit */unsigned int) var_11);
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_11)))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) (short)19494))))));
}
