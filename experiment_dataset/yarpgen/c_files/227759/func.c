/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227759
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
    var_17 = ((/* implicit */short) var_3);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61134)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) max(((unsigned short)4401), (var_2)))) == (((/* implicit */int) var_9)))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 10ULL)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((arr_1 [i_0 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))))) : (((arr_1 [i_0]) ^ (arr_1 [(short)13])))))));
        var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) (~(arr_0 [i_0])))))) || (((/* implicit */_Bool) (+(arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_1])) ^ (arr_1 [i_0]))))));
            arr_6 [i_0 + 2] [12U] [(unsigned char)4] |= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [8] [i_1])) : (arr_3 [i_0] [i_1]))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_20 += ((unsigned long long int) ((unsigned short) (_Bool)0));
                            var_21 = ((/* implicit */unsigned char) ((((arr_1 [i_1]) + (9223372036854775807LL))) << ((((+(((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) : (arr_0 [(_Bool)1]))))) - (186U)))));
                            var_22 = ((/* implicit */short) arr_10 [i_0 + 1]);
                            arr_17 [i_4] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned short) arr_14 [i_1] [i_4] [i_4] [i_4 - 1] [i_1] [i_0 + 1] [i_0])))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_27 [i_5] [4U] [i_6] [i_5] = ((/* implicit */unsigned short) (short)-1);
                    var_23 += ((/* implicit */long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_7] [i_6 + 1] [i_5] [i_5]))))), (((unsigned char) 3234581523178709386LL))));
                }
            } 
        } 
        var_24 = (~((+(arr_1 [i_5]))));
        var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_16 [i_5])))))), (arr_20 [13ULL])));
    }
    for (unsigned short i_8 = 3; i_8 < 15; i_8 += 3) 
    {
        var_26 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)4412)))) + (((/* implicit */int) ((_Bool) 14ULL)))));
        var_27 = ((/* implicit */unsigned long long int) ((_Bool) min((((((/* implicit */int) arr_26 [i_8] [i_8])) << (((((/* implicit */int) (short)-10433)) + (10433))))), (((/* implicit */int) ((_Bool) 0U))))));
        var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) arr_23 [i_8] [i_8 - 2] [i_8] [i_8])) : (arr_13 [i_8 + 1] [i_8 - 3])))) && (((/* implicit */_Bool) min((18005602416459776ULL), (arr_19 [i_8 - 3] [i_8 - 1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        var_29 = ((/* implicit */long long int) (((-(((/* implicit */int) (short)-28314)))) != (arr_23 [i_9] [i_9] [i_9] [i_9])));
        arr_33 [i_9] = ((/* implicit */unsigned short) (+(arr_1 [i_9])));
        var_30 = ((/* implicit */_Bool) (short)(-32767 - 1));
    }
    var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
}
