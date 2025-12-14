/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203444
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_10 = arr_3 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_3 [i_0])) >= (11432894666678117371ULL))) ? (((/* implicit */long long int) arr_2 [10ULL])) : (((((((/* implicit */long long int) 3982450080U)) + (8197836937942485431LL))) ^ (arr_3 [i_0])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) arr_3 [i_1]);
        var_12 = ((/* implicit */long long int) ((arr_1 [i_1 - 1]) == (((/* implicit */unsigned long long int) arr_0 [i_1 - 1]))));
        var_13 *= ((/* implicit */unsigned char) arr_7 [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) max(((-(arr_9 [i_1] [i_2] [i_3]))), (max((((((/* implicit */unsigned long long int) arr_12 [i_1 - 2] [i_2] [i_3])) % (17779527133410389330ULL))), (((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_1] [i_2]) < (arr_8 [i_2] [i_2]))))))));
                    arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) arr_0 [i_1 + 1]);
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)70)) ? (arr_11 [i_1] [i_1] [(unsigned char)2] [(unsigned char)2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 17779527133410389330ULL)) ? (1490583043U) : (1752482689U)))))), (((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))) : (((((/* implicit */_Bool) (unsigned char)70)) ? ((-9223372036854775807LL - 1LL)) : (-5869550708260976732LL)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4]))) ^ (var_5)))) + (arr_17 [i_4] [i_4]))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_4])), (arr_17 [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))) : (((((/* implicit */_Bool) 2171182334879368872LL)) ? (((/* implicit */unsigned long long int) -2171182334879368872LL)) : (arr_17 [i_4] [i_4])))))));
        var_16 = max((((((/* implicit */_Bool) 667216940299162286ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) arr_15 [i_4] [i_4]))))) : (arr_17 [i_4] [i_4]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_4]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            arr_20 [i_4] [i_5] = ((/* implicit */long long int) arr_15 [i_4] [i_5]);
            arr_21 [i_4] [i_5] = arr_15 [i_5 - 1] [i_4];
        }
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_17 [i_4] [i_6])))) ? (((arr_23 [i_4]) >> (((((/* implicit */int) arr_16 [i_6])) - (173))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6 + 2])))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7594750316741619110LL)) ? (((/* implicit */unsigned long long int) 3845938350U)) : (arr_23 [i_4])))) ? (((long long int) arr_18 [i_4])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)111)) && (((/* implicit */_Bool) arr_17 [i_4] [i_6]))))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            arr_27 [i_4] = ((((9148456159596615580LL) >= (-3048133345812882672LL))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */unsigned long long int) arr_19 [i_4] [i_7])) : (var_2))) : (((((/* implicit */_Bool) arr_24 [i_4])) ? (17779527133410389330ULL) : (arr_17 [i_4] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7]))));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 4; i_8 < 19; i_8 += 2) 
            {
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 5943534667457542156ULL)) ? (((/* implicit */long long int) arr_29 [i_7])) : (arr_24 [i_7]))) >= (((/* implicit */long long int) (+(3006315635U))))))), (((long long int) ((((/* implicit */_Bool) 13ULL)) ? (2171182334879368882LL) : (var_3))))));
                var_20 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7] [i_8 - 1])) ? (17779527133410389330ULL) : (((/* implicit */unsigned long long int) arr_18 [i_4]))))) ? (((unsigned int) arr_29 [i_7])) : (((/* implicit */unsigned int) ((/* implicit */int) ((274877644800ULL) >= (arr_23 [i_8]))))))));
                var_21 = ((/* implicit */unsigned long long int) arr_15 [i_4] [i_8 - 3]);
                arr_30 [i_8] [i_7] [i_4] = ((/* implicit */unsigned char) max((((((((/* implicit */unsigned long long int) arr_29 [i_8])) + (6598154008529530009ULL))) + (((/* implicit */unsigned long long int) max((var_7), (arr_19 [i_8] [i_7])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (3700103742U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193)))))) ? (((/* implicit */unsigned long long int) 13LL)) : (6580374945761469727ULL)))));
            }
            /* vectorizable */
            for (unsigned char i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_9 + 4] [i_9])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                arr_33 [i_4] [i_9] [i_9] [i_7] = ((/* implicit */unsigned long long int) arr_19 [i_4] [i_9 + 1]);
            }
        }
        arr_34 [i_4] [i_4] = ((/* implicit */unsigned char) (-(max((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4]))) - (arr_19 [i_4] [i_4]))), (((((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))) : (arr_28 [i_4] [i_4])))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((0ULL), (arr_32 [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */unsigned long long int) (+(arr_19 [i_4] [i_4])))) : (arr_17 [i_4] [i_4])));
    }
    var_24 ^= ((/* implicit */long long int) 13ULL);
    var_25 = var_5;
}
