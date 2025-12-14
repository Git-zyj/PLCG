/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34842
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2 - 2] [i_0 + 2])) / ((-2147483647 - 1))))) ? (((/* implicit */int) ((14308192774913105109ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1] [i_0 - 1])))))) : (((/* implicit */int) arr_8 [i_2 - 3] [i_0 - 1])))))));
                arr_10 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((unsigned long long int) 18446744073709551615ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)63), ((unsigned char)63)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_2 - 3])))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))), ((~(arr_5 [i_1] [i_1] [i_2])))))));
                arr_11 [i_0] [i_0] = ((/* implicit */short) max((max((min((((/* implicit */int) arr_0 [i_2])), (-35560340))), (((((/* implicit */_Bool) arr_1 [(unsigned short)3] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_0])))))), (((/* implicit */int) ((unsigned char) arr_4 [12LL] [(short)3] [i_0])))));
            }
            for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_1] [i_3]))));
                arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_0] [i_3 - 1]))))));
            }
            for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_1] [i_5] [i_0])))))))) > (((/* implicit */int) max((((unsigned char) 792187559)), (((unsigned char) var_3)))))));
                            arr_24 [i_0] [i_1] [i_4 - 1] [i_5] [i_5] [i_4 - 1] = ((/* implicit */int) (unsigned char)63);
                            arr_25 [3] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((short) var_0));
                        }
                    } 
                } 
                arr_26 [i_0 - 1] [i_0] [i_4] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15888797733728859662ULL))))) : ((((_Bool)0) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) (unsigned short)56815)))))), (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)63)))) && (((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])))))));
                arr_27 [10ULL] [i_1] &= ((/* implicit */unsigned long long int) (-(max((0U), (((/* implicit */unsigned int) var_17))))));
                arr_28 [i_0] [(short)16] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_14)))))), (((unsigned char) arr_13 [i_0] [i_4 - 3]))));
            }
            var_21 ^= ((/* implicit */unsigned long long int) ((((0U) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
        }
        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-124)) + (((int) arr_18 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1]))));
            arr_32 [(signed char)11] [11ULL] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (max((((/* implicit */unsigned long long int) (unsigned char)63)), (arr_5 [i_0] [i_7 + 1] [i_0]))))));
        }
        /* vectorizable */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                arr_38 [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                arr_39 [i_9] [i_0] [i_0] = ((/* implicit */_Bool) 0U);
            }
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                arr_42 [17U] [17U] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_8 - 1] [i_0] [i_8 - 1])) ? ((-(var_1))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_34 [i_0 - 1])) < (var_11))))));
                arr_43 [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65161))) - (12931687841489879920ULL)));
                arr_44 [i_0 - 1] [i_0] [(unsigned char)20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))));
            }
            arr_45 [i_0] [i_0] = ((/* implicit */int) var_13);
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_15 [i_0] [i_8] [i_8] [i_8]))));
        }
    }
    for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 3) /* same iter space */
    {
        arr_48 [i_11] = ((/* implicit */short) var_3);
        arr_49 [i_11] [i_11] = ((/* implicit */_Bool) ((unsigned char) (-(((((/* implicit */_Bool) arr_35 [18U] [i_11])) ? (((/* implicit */int) arr_17 [16ULL])) : (((/* implicit */int) (unsigned short)43711)))))));
        arr_50 [(unsigned char)3] = ((/* implicit */_Bool) max((((arr_12 [i_11 - 1] [(signed char)20] [(signed char)20] [i_11 - 1]) & (arr_12 [i_11 + 1] [20U] [i_11] [i_11 + 1]))), (((/* implicit */unsigned int) var_15))));
        arr_51 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11 + 2] [i_11 - 1] [(unsigned char)0]))) : ((((((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1LL)))) / (var_11)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 4) 
        {
            arr_54 [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) (unsigned char)0)))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_12] [i_12] [12U]) / (9628638420431982467ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63)))))) : (arr_1 [i_11] [i_12])))) - (min((((/* implicit */long long int) 435007856U)), (var_5))))))));
            var_25 = ((_Bool) var_16);
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)24670)) ? (((/* implicit */int) arr_40 [i_12 - 1] [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_36 [i_11 + 2])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_12] [i_12])) && (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_12] [i_12 - 2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)193)))), (((/* implicit */int) max((var_6), (var_15))))))) : ((+(arr_13 [i_12 + 1] [i_11 + 1])))));
        }
    }
    var_27 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_2))) : (max((((/* implicit */int) var_4)), (var_1)))))) ? ((((~(12976478443545416793ULL))) * (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24670))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20618)) ? (var_1) : (((/* implicit */int) var_9))))));
}
