/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33423
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_9 [i_3 - 2] [i_1] [i_3 + 3] [i_1]) > (arr_9 [i_3 - 1] [i_3] [i_3 + 1] [i_2]))))));
                        var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_9 [i_3 - 1] [i_3 + 2] [i_3 - 2] [i_3 - 1]), (arr_9 [i_3 + 4] [i_3 + 2] [i_3 + 4] [i_3 + 4])))), (((12889541128183663413ULL) >> (((arr_9 [i_3 + 2] [i_3 - 2] [i_3 + 3] [i_3 - 2]) - (2945534882U)))))));
                        var_15 &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((12889541128183663421ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [8] [8] [14])))))))))));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_4])) ? (arr_1 [i_0]) : (12889541128183663438ULL))))) > (((/* implicit */unsigned long long int) 1112902390U))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            arr_17 [i_1] [i_4] [8ULL] [i_4] [i_5] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(5557202945525888202ULL)))) ? (17227110926391579246ULL) : (5557202945525888191ULL))))));
                            var_17 = ((/* implicit */unsigned int) (+(((arr_11 [i_0]) ? ((~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_4] [i_5])))) : (((/* implicit */int) var_3))))));
                            var_18 = ((/* implicit */long long int) (unsigned short)2256);
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                        arr_21 [i_0] = ((short) arr_6 [i_2] [i_0] [i_0]);
                    }
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        arr_24 [12U] [i_7] [i_0] [i_0] [12U] [i_7] &= ((unsigned long long int) ((_Bool) arr_14 [i_7] [i_1] [i_2]));
                        arr_25 [(unsigned short)0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) arr_14 [i_0] [i_1] [i_2]));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 12889541128183663452ULL)) ? (7302846695909822833ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)21331))))))));
                        arr_26 [i_0] [i_0] [i_0] [i_2] [i_7] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [9LL])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_0]))))));
                        arr_27 [i_0] [i_0] [i_1] [(short)5] [i_7] = ((_Bool) ((((/* implicit */_Bool) min((arr_4 [i_2] [i_1] [i_0]), ((unsigned char)80)))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    }
                    var_21 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)7))));
                    var_22 &= ((/* implicit */short) ((long long int) (unsigned short)54981));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(12889541128183663426ULL)))) ? (min((12889541128183663413ULL), (arr_10 [i_0] [i_0]))) : (((unsigned long long int) 17ULL))));
                }
            } 
        } 
    } 
    var_24 = ((_Bool) (-(((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned short)33235)) - (33216)))))));
}
