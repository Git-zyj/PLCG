/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28490
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
    var_16 -= min((max((min((7), (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (unsigned short)59397)) ? (247434832) : (((/* implicit */int) (unsigned short)23501)))))), (((((/* implicit */int) max((((/* implicit */short) (signed char)98)), (var_1)))) * (((/* implicit */int) min((var_14), (var_12)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */long long int) var_1);
        arr_4 [(signed char)3] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_5 [i_0] [(signed char)12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_2 [(short)6] [(short)6])))) ? (min((((/* implicit */unsigned int) min((((/* implicit */int) (short)26292)), (-23302227)))), ((+(arr_1 [i_0]))))) : ((~(arr_0 [i_0])))));
    }
    for (signed char i_1 = 3; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2]))))));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_4 + 3] [i_4 + 1] [i_4] [i_4] [i_5] [i_5])) ? ((~(((/* implicit */int) arr_8 [i_1] [i_1 + 2])))) : ((+(((/* implicit */int) (short)32704))))));
                            arr_24 [(short)1] [i_2] [i_3] [(short)19] [i_3 + 3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)32684)))))));
                        }
                    } 
                } 
            } 
            arr_25 [i_1 + 2] [i_1 + 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 - 3])) ? (((/* implicit */int) arr_20 [i_2] [i_1 - 3] [17] [i_2] [12U] [0])) : (((/* implicit */int) var_14))));
            var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1 - 3])) : (((/* implicit */int) var_1))))));
        }
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */long long int) ((((825131643) > (825131621))) ? (-2102608083) : (((/* implicit */int) (unsigned short)54057))))), (4468415255281664LL))))));
        var_20 = ((((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 1])) ? (arr_17 [i_1 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(signed char)5] [i_1 - 1] [i_1 + 3] [i_1] [i_1 + 3] [(short)15]))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_1 - 3] [i_1 - 2]), (var_6))))));
    }
    for (signed char i_6 = 3; i_6 < 17; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) -825131643);
            arr_33 [i_6 + 2] [i_6] [i_6] = ((/* implicit */int) var_14);
            var_22 = ((((/* implicit */_Bool) 4468415255281664LL)) ? (((/* implicit */unsigned int) 825131643)) : (3579946120U));
            var_23 = ((/* implicit */unsigned int) var_1);
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
        {
            var_24 -= arr_8 [(short)5] [i_8];
            var_25 ^= ((/* implicit */short) arr_21 [i_8] [i_8] [i_6 - 2] [i_6] [i_8] [i_8] [i_8]);
        }
        arr_37 [12U] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_7 [i_6 + 3])) ? (arr_30 [i_6 - 1] [i_6 - 1]) : (var_8))), (arr_30 [i_6 - 2] [i_6 - 3])));
    }
    for (signed char i_9 = 3; i_9 < 17; i_9 += 4) 
    {
        var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [(unsigned short)0]) / (((/* implicit */int) var_9))))) ? (min((((/* implicit */int) var_14)), (arr_13 [12LL]))) : (((((/* implicit */_Bool) var_10)) ? (arr_13 [4]) : (((/* implicit */int) var_7))))));
        arr_40 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16383)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (signed char)62))));
    }
    var_27 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61748)) < (((/* implicit */int) (short)-8483))));
}
