/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218686
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
    var_16 = ((/* implicit */long long int) max((((var_15) * (var_12))), (((/* implicit */unsigned long long int) (-(((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) var_11);
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29850)) ? (((/* implicit */unsigned int) var_6)) : (arr_0 [i_0])))) : ((((_Bool)1) ? (7878117437556171208ULL) : (10568626636153380407ULL)))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))));
        arr_2 [(signed char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_2)))), (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) : (max((14415476619861628860ULL), (((/* implicit */unsigned long long int) (unsigned char)96))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1])))))));
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (4031267453847922739ULL) : (var_14))), (((4031267453847922756ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_4)))) ? (var_6) : (((/* implicit */int) var_8))));
        var_20 = ((/* implicit */_Bool) var_9);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */long long int) var_12);
        arr_12 [i_2] [i_2] = ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_2]) : (var_4));
        arr_13 [i_2] = arr_10 [i_2] [i_2];
        /* LoopSeq 1 */
        for (unsigned short i_3 = 4; i_3 < 22; i_3 += 4) 
        {
            arr_16 [i_3 - 2] [i_3] [i_3 - 1] = ((((/* implicit */_Bool) (~(arr_9 [i_2])))) ? (((/* implicit */unsigned long long int) arr_15 [i_2])) : ((-(4031267453847922739ULL))));
            arr_17 [i_2] [i_2] [i_3 + 3] = ((/* implicit */_Bool) arr_10 [i_3 - 3] [i_3 - 3]);
        }
    }
    /* LoopSeq 1 */
    for (int i_4 = 3; i_4 < 16; i_4 += 1) 
    {
        arr_20 [i_4 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_4 + 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
            {
                arr_26 [i_4] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) < (((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) : (var_13)))));
                arr_27 [i_4 - 3] [i_5] = ((/* implicit */long long int) arr_9 [4U]);
                arr_28 [i_4] [i_4] = ((/* implicit */_Bool) 7878117437556171195ULL);
                arr_29 [i_4 - 1] [i_4 - 3] [i_4] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_5] [i_6])) ? (((/* implicit */int) arr_23 [i_6] [i_4 - 3])) : (((/* implicit */int) arr_23 [i_4 - 2] [i_5]))));
            }
            for (int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
            {
                arr_34 [i_4] [i_7] = ((/* implicit */signed char) (~(var_9)));
                arr_35 [i_4] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
            }
            for (int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */signed char) ((2888707836U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_8])))));
                arr_38 [i_8] [i_5] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_2)) ? (4031267453847922739ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4 - 1])))))));
                arr_39 [i_8] [i_5] [(_Bool)0] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (arr_33 [i_8])));
                arr_40 [i_8] [i_5] [i_8] = ((/* implicit */int) arr_14 [i_4] [i_5] [i_8]);
            }
            arr_41 [i_4 - 3] [i_4] [i_4 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_4 - 2])) ? (arr_33 [i_4 - 2]) : (((/* implicit */int) var_5))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                arr_46 [i_10] = ((/* implicit */long long int) ((max((arr_4 [i_9]), (((/* implicit */unsigned long long int) ((var_15) != (((/* implicit */unsigned long long int) var_6))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4 - 3] [i_9])))))) + (var_10))))));
                var_22 = ((/* implicit */unsigned char) arr_21 [i_4] [i_4]);
                arr_47 [i_10] [i_9] [i_4 - 2] = ((/* implicit */signed char) arr_19 [i_4 - 1]);
                var_23 = ((/* implicit */unsigned short) var_8);
            }
            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) (short)-28280)), (1423377236)))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 + 1] [i_9])))))) ? (arr_32 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))))));
            var_25 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_21 [i_4 + 1] [i_9])))), ((-2147483647 - 1))));
        }
    }
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (var_12)))) ? (max((((/* implicit */unsigned long long int) var_0)), (min((var_12), (((/* implicit */unsigned long long int) (signed char)101)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)76))) != (var_10)))), (var_6))))));
}
