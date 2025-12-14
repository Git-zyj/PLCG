/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245805
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) max((((/* implicit */long long int) min((-1), (((/* implicit */int) max(((unsigned short)36319), ((unsigned short)15686))))))), (((long long int) ((((/* implicit */_Bool) (unsigned short)36319)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29229))) : (18446744073709551615ULL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) var_1);
            arr_6 [i_0] [i_0 - 1] [i_0 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) 2776237043874926474ULL)))));
            var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32640))) + (2776237043874926490ULL));
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
            {
                var_15 &= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) arr_8 [i_0] [i_1] [i_1] [i_2 - 1])));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((short) ((unsigned int) var_11))))));
            }
            for (short i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned int) arr_4 [i_3 - 1] [i_3 - 1]);
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_3 + 1] [i_3 - 1] [(short)14])) ? (arr_8 [i_0 - 1] [i_3 + 1] [i_3 - 1] [i_3]) : (arr_8 [i_0 - 1] [i_3 + 1] [i_3 - 1] [i_0 - 1])));
                var_18 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-23765))))) | ((~(arr_9 [i_0])))));
                arr_13 [(unsigned short)12] [i_3] [i_3] [13ULL] = ((/* implicit */short) (unsigned char)149);
            }
        }
        /* LoopNest 2 */
        for (short i_4 = 4; i_4 < 17; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            arr_26 [i_0 - 2] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)18748))))), (((long long int) arr_3 [i_0 - 2] [i_0 - 2] [i_0]))));
                            arr_27 [i_4] = ((/* implicit */unsigned int) ((unsigned short) max((var_4), (((/* implicit */long long int) arr_24 [i_0 - 2] [i_4] [i_0 - 1] [i_6] [i_7] [i_6 + 1] [i_6 + 1])))));
                        }
                        arr_28 [i_0] [i_4] [9LL] [i_0] [i_0] [i_0] = max((((min((((/* implicit */unsigned long long int) (short)-10181)), (var_9))) << (((((min(((-2147483647 - 1)), (((/* implicit */int) var_12)))) - (-2147483627))) + (25))))), (((/* implicit */unsigned long long int) (-((~(var_10)))))));
                    }
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)29216))))) ? (((((/* implicit */_Bool) (unsigned short)41105)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36319))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)41110)))))), (((/* implicit */unsigned long long int) var_7))));
                            arr_34 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_2)))))) ? (min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((int) arr_20 [i_0]))))) : (max(((-(var_9))), (((unsigned long long int) arr_30 [i_4]))))));
                        }
                        for (unsigned int i_10 = 3; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            var_20 ^= ((unsigned short) (unsigned short)58679);
                            var_21 = ((/* implicit */long long int) ((min((16383), (267911168))) | ((+(((/* implicit */int) arr_36 [i_4] [i_10 - 1] [0ULL] [i_10 + 1] [i_10 + 1] [13ULL] [i_10]))))));
                        }
                        for (unsigned int i_11 = 3; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            arr_42 [17U] [1U] [i_8] [i_4] [1U] [1U] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_40 [9U] [i_4] [(unsigned short)15])), (max((3ULL), (((/* implicit */unsigned long long int) arr_18 [i_8] [(short)17] [15] [i_8])))))), (((/* implicit */unsigned long long int) ((var_1) | (min((arr_4 [i_0] [i_4]), (((/* implicit */long long int) arr_20 [i_0])))))))));
                            var_22 = ((/* implicit */unsigned short) ((int) (+(max((((/* implicit */unsigned long long int) 2147483647)), (5857376436733266515ULL))))));
                            arr_43 [i_4] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)46788)) >> (((8526082796505847118LL) - (8526082796505847107LL)))));
                            arr_44 [9] [i_4] [i_4] [i_8] [i_11] = ((/* implicit */short) (+((+(1006114670)))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)157)), (-1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17)))))) : (min((var_10), ((-(-2530660431129807698LL))))))))));
                        }
                        var_24 = ((/* implicit */unsigned short) (~(((long long int) ((unsigned short) var_10)))));
                    }
                    arr_45 [i_5] [i_4 - 1] [i_5] |= ((/* implicit */long long int) (~(var_7)));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */int) min((((/* implicit */long long int) (-(((unsigned int) var_2))))), (max((min((0LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (short)(-32767 - 1)))))));
}
