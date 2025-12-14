/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223692
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(1450590434603871231ULL)))) ? (((((/* implicit */_Bool) 18014398509481983ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_9))));
        var_20 = arr_0 [i_0];
        var_21 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((min((var_10), (arr_0 [i_0]))) < (max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] |= 0ULL;
            var_22 = var_6;
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
            var_24 ^= ((((/* implicit */_Bool) min(((-(arr_3 [10ULL]))), ((~(arr_0 [i_1])))))) ? (arr_3 [i_0]) : ((+(var_8))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_4 [i_2 + 1] [i_2 + 2]) / (arr_4 [i_2 + 1] [i_2 + 2]))));
                arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) min((136946205293031777ULL), (16239896471222195441ULL)));
                arr_15 [i_0] [i_2] [i_2] [17ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [18ULL] [18ULL])) || (((/* implicit */_Bool) 18446744073709551603ULL))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                arr_20 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (-((-(min((arr_6 [i_0] [i_2]), (var_18)))))));
                var_26 = 2741447535944183951ULL;
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_27 ^= arr_19 [i_0] [i_5] [i_5] [i_0];
                    var_28 ^= ((/* implicit */unsigned short) var_6);
                    var_29 -= ((arr_0 [i_2 + 1]) >> (12ULL));
                    arr_23 [(unsigned short)7] [(unsigned short)0] [(unsigned short)7] [i_2] [(unsigned short)7] = (-(var_6));
                }
                for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    var_30 -= ((((/* implicit */_Bool) min((2206847602487356175ULL), (min((16239896471222195450ULL), (12ULL)))))) ? ((((!(((/* implicit */_Bool) 12ULL)))) ? (var_8) : (((unsigned long long int) arr_24 [i_4] [i_2 - 2] [10ULL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (5814116673902183831ULL) : (18446744073709551606ULL)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_2 - 2] [i_4] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((max((0ULL), (var_17))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_2] [i_0]))) < (var_18)))))))), (arr_22 [i_0])));
                        arr_29 [i_0] [i_2] [i_0] [i_6] [i_0] = max((arr_12 [10ULL] [i_2]), (min((((var_8) * (arr_3 [i_7]))), (max((2206847602487356174ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))))));
                    }
                    var_31 = (+((~(0ULL))));
                    arr_30 [i_0] [i_0] [i_0] [i_2] = arr_12 [i_4] [i_0];
                }
                var_32 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)32760)))));
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63944))) & (var_7))), (arr_27 [i_0] [i_0] [14ULL] [i_0] [i_0] [i_0])))));
            }
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (arr_9 [i_2 - 2] [12ULL])));
            arr_31 [i_2] = var_1;
        }
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 2; i_8 < 14; i_8 += 3) 
    {
        arr_35 [14ULL] [i_8] = ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551600ULL))));
        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) min(((((-(var_11))) % (((((/* implicit */_Bool) var_17)) ? (arr_24 [(unsigned short)18] [(unsigned short)18] [i_8]) : (arr_1 [10ULL]))))), (arr_25 [i_8] [i_8] [i_8] [(unsigned short)0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((2206847602487356174ULL) * (8638624116427483394ULL))) < ((-(17578856070698153444ULL)))))), (min((((/* implicit */unsigned long long int) var_9)), (((var_17) / (arr_39 [i_8] [i_8])))))));
            arr_40 [i_8 + 1] [i_8] [i_8 + 1] = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((var_11), (8638624116427483409ULL))))), (14400406267627241705ULL));
            var_37 = (-(((((unsigned long long int) arr_9 [i_8] [i_8])) & (16239896471222195440ULL))));
            arr_41 [i_8] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_8]) != (2206847602487356175ULL))))) * (18446744073709551615ULL)))));
        }
        arr_42 [i_8] [i_8] = min(((~(arr_17 [i_8]))), (16239896471222195441ULL));
    }
}
