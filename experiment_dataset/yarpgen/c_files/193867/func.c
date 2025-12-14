/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193867
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
    var_16 = ((/* implicit */unsigned char) ((((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))))) + (var_10)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((4398046511103ULL), (((/* implicit */unsigned long long int) ((((_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)10619)) : (((/* implicit */int) (short)29731))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_0 [i_0]))))))));
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(0U)))) + (arr_1 [(unsigned short)0] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((arr_4 [i_1]) << (((var_3) + (1533381852))))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)29731)) : (((/* implicit */int) (signed char)24)))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (-(var_14)))), (var_10))), (1214511684756225019ULL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                arr_11 [i_1] [i_1] [(unsigned short)10] [i_1] = ((/* implicit */unsigned int) ((long long int) arr_9 [i_1]));
                arr_12 [i_1] [i_1] = ((/* implicit */_Bool) ((var_10) << (((arr_8 [i_3 + 1] [i_2 + 1] [(unsigned short)17]) - (17214720908121795523ULL)))));
            }
            arr_13 [i_1] [(signed char)1] [i_1] = (+(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_7)))));
        }
        var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_9 [(_Bool)1]), (((((/* implicit */_Bool) arr_4 [14ULL])) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) (signed char)-91))))))) ? (min((((/* implicit */int) (signed char)14)), (arr_9 [20ULL]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (arr_9 [18U]))))) > (max((((/* implicit */unsigned int) (signed char)91)), (var_14))))))));
        arr_14 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) ((arr_4 [i_1]) >= (((2147483648U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) var_13))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)0))))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)0]))) - (2145261528U)))))), (((((_Bool) arr_15 [10U])) ? (((/* implicit */unsigned long long int) 1865893461U)) : (min((21ULL), (((/* implicit */unsigned long long int) arr_17 [i_4]))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_17 [i_4]))) | (((/* implicit */int) arr_3 [20])))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_21 = ((((/* implicit */int) var_15)) != (((/* implicit */int) ((unsigned short) max((var_5), (((/* implicit */unsigned int) (signed char)12)))))));
        var_22 = ((/* implicit */_Bool) ((((unsigned int) arr_0 [i_5])) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)15)))))));
        arr_24 [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (76003449341855205ULL) : (((/* implicit */unsigned long long int) 2147483647U))))) ? (max((((/* implicit */int) arr_18 [i_5] [i_5])), (arr_21 [i_5]))) : ((-(((/* implicit */int) (short)29718))))))), ((-(((arr_8 [i_5] [i_5] [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_23 = ((/* implicit */int) max(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_10))))), (((/* implicit */unsigned long long int) ((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))))))));
    }
    var_24 = ((/* implicit */signed char) var_11);
}
