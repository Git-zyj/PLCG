/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38933
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                var_15 = ((/* implicit */long long int) ((min((max((1781070472692028409ULL), (((/* implicit */unsigned long long int) (short)18405)))), (((/* implicit */unsigned long long int) 4294967295U)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3280022645089247985LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29807))) : (arr_2 [i_0])))) ? ((+(var_4))) : (((((/* implicit */long long int) var_11)) / (5936796208431557894LL))))))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (13267855946700399824ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))) ? (max(((~(arr_2 [i_0]))), (((/* implicit */long long int) (short)-2918)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_3 [i_0 + 1] [i_0 + 1] [(short)12]) : (arr_3 [i_0 + 1] [i_1] [i_1])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_4 - 1] = ((/* implicit */unsigned int) (((-(arr_2 [i_0]))) % (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (short)-13512)))))));
                                arr_15 [i_2] [i_1] [i_4 - 1] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1])) ? (arr_3 [i_3] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2])))))), (max((2614609375713260886ULL), (((/* implicit */unsigned long long int) 8U))))))) ? (((/* implicit */unsigned long long int) var_5)) : (min((arr_11 [i_4] [i_4] [i_0 - 1] [i_1] [i_4 + 2] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 - 1] [i_0]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_1]);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max(((+(arr_17 [i_5 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_5 + 1] [i_5 + 1])) / (((/* implicit */int) arr_18 [i_5 - 1] [i_5 + 1])))))));
        var_17 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5 + 1])) ? (arr_19 [i_5 + 1] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
        arr_20 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((1199726934U), (((/* implicit */unsigned int) arr_18 [i_5] [10LL]))))) ? (((/* implicit */long long int) var_14)) : (-1LL)));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_17 [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19279)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2764))) > (((unsigned long long int) 1852338248U)))))) : (min((((/* implicit */unsigned int) arr_18 [i_5 - 1] [i_5 - 1])), (3875294215U)))));
    }
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_2 [i_6])), (((unsigned long long int) arr_18 [i_6] [i_6]))));
        arr_23 [(short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_13 [i_6] [i_6] [i_6] [1LL] [i_6] [i_6] [i_6])))) : (min((((((/* implicit */_Bool) 8816608464881889349ULL)) ? (var_5) : (((/* implicit */long long int) 1852338237U)))), (((/* implicit */long long int) ((short) 4294967291U)))))));
    }
    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        arr_26 [i_7] = ((/* implicit */short) (~(((/* implicit */int) (short)10813))));
        arr_27 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_7] [i_7])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_3 [(short)14] [i_7] [i_7]), (((/* implicit */long long int) arr_9 [2LL] [i_7]))))) != (((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [1LL]))) : (3317798128713811517ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [0LL] [i_7])))))));
        var_20 = ((/* implicit */short) ((5089743456291886062LL) < (((((((/* implicit */_Bool) arr_13 [i_7] [5U] [5U] [0U] [11LL] [i_7] [i_7])) ? (((/* implicit */long long int) var_11)) : (arr_8 [i_7] [i_7] [i_7] [i_7]))) - (4267892983191774347LL)))));
        arr_28 [i_7] = ((/* implicit */unsigned long long int) (((~(arr_3 [i_7] [i_7] [i_7]))) / (max((arr_3 [i_7] [i_7] [i_7]), (arr_3 [i_7] [i_7] [i_7])))));
    }
}
