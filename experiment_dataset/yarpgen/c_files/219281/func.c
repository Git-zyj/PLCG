/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219281
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((min(((unsigned char)255), (((/* implicit */unsigned char) arr_2 [2U])))), (((/* implicit */unsigned char) arr_7 [i_0] [i_1] [(_Bool)1]))))) : ((~(((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4])) - (((/* implicit */int) (unsigned char)4)))), (((/* implicit */int) (short)20765)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 2; i_6 < 19; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                            {
                                var_18 = ((/* implicit */_Bool) (signed char)66);
                                arr_34 [i_5] [i_6 - 1] [i_5] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)255))))));
                                var_19 -= ((/* implicit */unsigned int) 17755905942396156348ULL);
                                arr_35 [i_5] [i_5] [(_Bool)1] [i_9] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_17 [i_5])), (var_15))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1ULL)) && (((/* implicit */_Bool) 67092480ULL)))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)20765)))) : (((/* implicit */int) arr_20 [i_6 - 2] [i_6 + 1])))))));
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                            {
                                arr_38 [i_5] [(_Bool)1] [1U] [i_6] [i_5] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_21 [i_6 + 1] [i_6 - 2]))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)71))))));
                                var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_37 [i_5] [(short)5] [i_6] [i_8] [i_10] [i_8]), (((/* implicit */unsigned char) arr_21 [i_5] [i_10])))))))), (((((/* implicit */_Bool) max((arr_23 [i_5]), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_31 [i_10] [i_5] [i_7] [i_6] [i_5])))) : (((/* implicit */int) arr_17 [i_5]))))));
                                var_21 = ((/* implicit */_Bool) arr_37 [i_6 - 2] [i_6] [i_7] [i_6 - 2] [i_10] [i_6 - 2]);
                            }
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_7))));
                            var_23 = ((/* implicit */signed char) (unsigned char)168);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    arr_42 [i_5] [i_6 + 1] [i_11] = ((/* implicit */unsigned int) arr_32 [i_6] [i_6] [(short)4] [i_6 + 1] [i_11]);
                    var_24 = arr_28 [i_6 - 1] [i_11];
                    arr_43 [i_5] [i_5] = ((/* implicit */unsigned char) arr_41 [i_5] [i_6] [i_6] [i_6]);
                }
                for (signed char i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) (((((((_Bool)1) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) arr_39 [i_5] [i_12] [i_5])))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_32 [i_5] [i_6] [i_5] [i_13] [i_6 - 1]), (((/* implicit */short) max((((/* implicit */signed char) (_Bool)0)), (arr_18 [i_13]))))))))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_46 [(signed char)2] [i_6] [i_5]))))), (arr_20 [i_6 - 1] [i_6])))), (min(((((_Bool)1) ? (((/* implicit */int) arr_45 [i_13])) : (((/* implicit */int) arr_49 [i_5] [i_6])))), (((/* implicit */int) arr_29 [(signed char)19] [i_6])))))))));
                        var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_27 [i_6] [i_6 + 1] [i_6 - 1]) ? (((/* implicit */int) arr_27 [i_6] [i_6] [i_6 - 1])) : (((/* implicit */int) arr_27 [i_6] [i_6] [i_6 - 1]))))), (min((19ULL), (((/* implicit */unsigned long long int) arr_31 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 1]))))));
                    }
                    arr_50 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_5] [i_6 + 1] [i_6 - 1] [i_6 - 1])) ? (arr_48 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 2]) : (arr_48 [i_5] [i_6 + 1] [i_6 + 1] [i_6 - 1]))))));
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
                {
                    var_28 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_6 + 1] [i_6 - 1]))));
                    var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-94))));
                    var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    var_31 = (!(((/* implicit */_Bool) arr_30 [i_6] [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_14] [i_14])));
                }
                for (signed char i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) min(((-((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))), (((/* implicit */unsigned int) max((((/* implicit */short) max(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)1))))), ((short)0)))))))));
                    arr_57 [1ULL] [i_6] [i_5] [i_15] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_40 [i_6 - 2] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_5] [i_6 + 1]))) : (6109777595324365138ULL)))));
                }
            }
        } 
    } 
}
