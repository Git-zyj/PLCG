/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237776
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) ((arr_4 [i_1] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))) != (((/* implicit */int) (unsigned short)65533)))))));
            var_13 &= ((/* implicit */unsigned long long int) ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
            arr_5 [i_0] = ((/* implicit */signed char) 1632175346);
            var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0 + 1] [i_0])), (-1632175346)))), (((unsigned int) arr_3 [i_0 - 1] [i_0 - 1]))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_0 - 1])))), (((((/* implicit */int) arr_2 [i_0 - 1])) >= (((/* implicit */int) arr_2 [i_0 - 1]))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_9 [(signed char)0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) == (3ULL)));
        var_15 = ((/* implicit */unsigned char) ((1207173513) >= (min((((((/* implicit */int) arr_7 [i_2] [i_2])) - (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    }
    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 + 2] [i_4])) ? (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) arr_10 [i_4] [i_3])) : (((/* implicit */int) arr_12 [i_3] [i_4])))) : (((((/* implicit */int) arr_11 [i_3] [i_3])) ^ (((/* implicit */int) arr_10 [i_3] [i_3]))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_3]))) : (1088768544U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_3])))))) ? (max((((/* implicit */long long int) (unsigned char)130)), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122)))))));
            arr_16 [0U] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 + 2] [i_3 + 2])) || (((/* implicit */_Bool) 3206198779U))))) > (((/* implicit */int) ((((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_3 - 1])) > (((/* implicit */int) arr_13 [i_3 + 3] [i_3 + 1] [i_3 + 2])))))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 2; i_5 < 24; i_5 += 1) 
            {
                arr_21 [i_3] [i_4] [i_5] |= ((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_3] [i_3 - 1])), (max((1632175339), (((/* implicit */int) arr_19 [i_3 - 2] [i_4] [i_5 - 1]))))));
                var_16 = ((/* implicit */unsigned char) ((unsigned int) 18446744073709551609ULL));
            }
            for (short i_6 = 3; i_6 < 24; i_6 += 1) 
            {
                arr_25 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (min((arr_20 [i_3 + 2] [i_3] [i_6]), (((/* implicit */unsigned int) (unsigned char)73)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_6])) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (short)2)))) > (((/* implicit */int) var_9))))) : (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) min((1207173531), (((/* implicit */int) arr_13 [i_6] [13ULL] [i_3])))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_0))));
                arr_26 [13ULL] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)100)) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6 - 2] [i_6 - 2] [i_6])) || (((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6 + 1] [i_6 + 1])))))));
            }
        }
        for (unsigned int i_7 = 3; i_7 < 23; i_7 += 4) 
        {
            arr_30 [i_3] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) arr_13 [i_3 + 3] [i_7] [i_3]));
            /* LoopSeq 1 */
            for (short i_8 = 1; i_8 < 24; i_8 += 1) 
            {
                arr_34 [i_7] [i_7] = ((/* implicit */int) ((short) min((((/* implicit */unsigned char) arr_32 [i_3 - 2] [i_7] [i_8 - 1])), (arr_17 [i_3] [i_7] [i_7] [i_7]))));
                var_18 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_19 [i_3] [i_7 + 1] [i_8 + 1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) 1632175318)) : (3206198734U)))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) 715906600U)) ? (1088768536U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8 - 1] [i_7] [i_8 - 1]))))))));
            }
        }
        var_19 -= ((/* implicit */signed char) arr_28 [i_3] [i_3]);
        var_20 ^= ((/* implicit */short) min(((+(((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 3])))), (((/* implicit */int) ((min((arr_23 [i_3] [i_3]), (((/* implicit */int) arr_13 [i_3 - 1] [i_3] [23U])))) != (((/* implicit */int) var_5)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            var_21 = ((arr_29 [i_9]) ^ (arr_29 [i_9]));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_3 - 1] [i_9] [i_3] [i_9])) ? (((/* implicit */int) arr_31 [i_3 + 3] [i_9] [i_9] [i_3])) : (((/* implicit */int) arr_31 [i_3 + 2] [i_9] [(signed char)12] [i_9]))));
            var_23 = ((/* implicit */short) arr_23 [i_3] [i_9]);
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_24 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_3 + 2] [i_3]))) : (1145800647094593949ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2672534835U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_3] [i_3]))) : (arr_22 [i_10] [i_10]))))));
            arr_40 [i_10] = (-(((/* implicit */int) (signed char)-126)));
        }
        for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((-728655216), (((/* implicit */int) arr_27 [i_11] [i_3] [i_3 + 3]))))) & (((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_11] [i_3])) + (((/* implicit */int) (short)-19099))))) ? (((arr_36 [i_3] [i_11] [(unsigned char)4]) | (16ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_3] [i_11] [(unsigned short)3])) ? (-1632175326) : (((/* implicit */int) (signed char)8)))))))));
            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((((/* implicit */int) arr_27 [(short)2] [i_3] [i_3])), (arr_42 [(signed char)2] [i_11] [i_11]))), (((/* implicit */int) arr_28 [i_3] [i_3])))))));
            var_27 = arr_31 [i_11] [i_11] [15U] [i_3];
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 22; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_28 -= ((/* implicit */unsigned char) arr_28 [i_3] [i_3]);
                        arr_48 [i_3] [i_11] [5] [i_12] [i_12 - 1] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_37 [i_3 - 1] [i_12 + 3]), (((((/* implicit */_Bool) arr_13 [(short)4] [i_11] [i_3])) ? (((/* implicit */int) arr_11 [i_11] [i_11])) : (((/* implicit */int) arr_28 [i_3] [i_3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_11] [i_13]))) : (1297951572402479795ULL))) >= (((/* implicit */unsigned long long int) ((arr_46 [i_3] [i_13] [i_12] [i_11] [i_3]) << (((((/* implicit */int) (unsigned char)151)) - (148)))))))))) : (min((((1819405395U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (unsigned char)220)))))))));
                        arr_49 [i_3] [i_11] [i_12] [i_11] = ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_24 [i_3] [i_11] [i_12]))))))) ? (arr_18 [i_3] [i_12] [i_12]) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1819405417U)))))))));
                    }
                } 
            } 
        }
    }
    var_29 = ((/* implicit */unsigned char) min((var_29), (var_9)));
    var_30 = ((/* implicit */short) var_9);
}
