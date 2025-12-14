/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43073
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
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31773))) : (193877954U)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 - 1])) ^ (arr_5 [i_0 - 1] [i_0 - 2]))) : (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])) ? (16289569584556986473ULL) : (16289569584556986473ULL)))));
                            var_20 *= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1] [i_0])) ? (8901089353863358039LL) : (var_1)))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (var_16) : (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) arr_1 [4ULL] [4ULL]))));
                        }
                    } 
                } 
                arr_12 [i_1] |= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (short)23382))))), (var_16))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */short) min(((~(((/* implicit */int) arr_14 [i_4])))), ((~(((/* implicit */int) arr_14 [i_4]))))));
        /* LoopNest 2 */
        for (short i_5 = 4; i_5 < 19; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        arr_24 [i_4] [i_4] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)4394)) && (((/* implicit */_Bool) 575507825)))))) < (((/* implicit */int) (unsigned char)139))));
                        var_21 ^= ((/* implicit */short) (_Bool)1);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        arr_27 [i_5] [i_4] = ((/* implicit */short) ((max((arr_13 [(short)18]), (((/* implicit */long long int) arr_23 [i_4] [i_4] [i_5 - 1] [i_5] [i_4] [i_5 - 3])))) - (((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])) ? ((~(var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_4])) ? (((/* implicit */int) (short)-23379)) : (((/* implicit */int) var_6)))))))));
                        arr_28 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_5 + 1] [i_5 + 1] [i_4])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5785)))))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_5] [i_5] [i_4] [i_8])) : (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_8])))))))) + (min((((((/* implicit */_Bool) 6232737640263617303LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_18 [i_8] [i_6] [(_Bool)1]))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_6)), ((short)-4394))))))));
                        arr_29 [i_4] [i_5] [i_6] [(unsigned char)3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) -911215403)), (var_1)))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) var_4))))) : (((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_18 [i_4] [i_5] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [(signed char)9] [(signed char)9] [i_9]))))))))))));
                        arr_34 [i_4] [i_4] [0U] [i_4] [9ULL] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5 + 2] [i_5 - 3] [i_5] [i_5]))) : (16289569584556986473ULL))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)-23377)) && (((/* implicit */_Bool) arr_23 [i_4] [i_5 + 2] [(short)14] [i_9] [i_5 + 2] [i_9]))))))));
                        var_23 = 8901089353863358066LL;
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            {
                                arr_39 [i_4] [i_5] [i_10] [i_4] = ((/* implicit */signed char) var_4);
                                var_24 = (+(((((/* implicit */_Bool) (short)23376)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) arr_16 [i_5 - 4] [i_5 - 3] [i_4])))));
                                arr_40 [i_10] [i_4] [i_6] [(unsigned char)3] [i_6] [i_4] = ((/* implicit */unsigned char) (short)-23379);
                                arr_41 [i_4] [i_10] [i_4] [12LL] [i_11] |= ((/* implicit */signed char) max((((/* implicit */short) arr_33 [i_4] [i_5] [i_6] [i_6])), (max((((/* implicit */short) (_Bool)1)), ((short)-23377)))));
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_13 [i_11]))));
                            }
                        } 
                    } 
                    arr_42 [i_4] [i_4] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_5 + 1] [i_4])))) <= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_22 [i_6] [(short)4] [(short)4] [i_6] [i_6] [i_6])))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (short)31173)) : (((/* implicit */int) (short)23377))))), (7566690036309273482LL))) : (((/* implicit */long long int) max(((+(((/* implicit */int) var_17)))), (((/* implicit */int) ((_Bool) -2096030042))))))));
                }
            } 
        } 
        arr_43 [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_25 [i_4] [i_4] [i_4] [i_4]), (arr_25 [i_4] [i_4] [i_4] [i_4])))), (min((((/* implicit */unsigned long long int) arr_14 [i_4])), (arr_36 [i_4] [i_4] [i_4])))));
        arr_44 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_30 [i_4])) : (((/* implicit */int) arr_20 [(_Bool)1] [i_4] [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [(unsigned char)3] [i_4] [i_4])) || (((/* implicit */_Bool) var_9)))))) : (var_8))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56)))));
    }
}
