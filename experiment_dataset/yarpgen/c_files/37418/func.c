/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37418
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((830414129) > (((/* implicit */int) var_10))))) + (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (var_11) : (var_5))) : (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(min((var_5), (((/* implicit */unsigned long long int) var_7)))))))));
        arr_3 [(short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_0 [i_0] [i_0]))) * (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= ((~(((/* implicit */int) (signed char)-105)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) | (((/* implicit */unsigned int) var_4))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1333554828274408173LL)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-20405)))) ^ (((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) arr_8 [i_0]))))))))));
                    arr_11 [i_2] [i_1] [i_1] [12LL] = ((/* implicit */short) (((-(576460752303423487LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122))))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_17 [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */int) var_1)) << (((((long long int) arr_15 [i_3] [i_3] [i_4])) - (19439LL))))), (max((((/* implicit */int) ((short) var_11))), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) arr_7 [i_3] [i_4]))))))));
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) % (arr_13 [i_7] [i_3])))) && (((/* implicit */_Bool) ((((arr_13 [i_3] [i_3]) + (2147483647))) >> (((arr_13 [i_3] [i_4]) + (320006082))))))));
                            arr_26 [i_3] [i_3] [i_5] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-576460752303423488LL), (-9166218821289902761LL)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) var_9))), (((var_9) | (((/* implicit */int) (short)23425))))))) : (arr_25 [i_3] [i_4] [i_5] [(unsigned short)0] [i_3])));
                            var_16 &= ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (17287142065551947073ULL))))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (min((var_0), (4689892510204093750LL))))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 1; i_8 < 14; i_8 += 2) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((long long int) arr_14 [i_8])))));
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                arr_31 [i_3] [i_8] [i_3] = ((/* implicit */int) 18446744073709551615ULL);
                /* LoopSeq 2 */
                for (long long int i_10 = 2; i_10 < 11; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 3; i_11 < 14; i_11 += 2) 
                    {
                        var_18 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_7 [i_10 - 2] [i_11 - 3]))))) | (max((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (signed char)-114))))), (var_11)))));
                        arr_37 [i_3] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-7119085699545664374LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_13))))) : (var_3)))) <= (var_12)));
                        arr_38 [i_3] [i_8 - 1] [i_3] [i_9] [i_10] [4] = ((/* implicit */long long int) (~((-(arr_30 [i_8 - 1] [i_10 - 1])))));
                    }
                    for (short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) (-(-9166218821289902778LL)));
                        var_20 += ((/* implicit */unsigned short) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                    }
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (arr_35 [12U] [i_3] [i_8 + 1] [i_8] [i_9] [i_10 - 2]))))) : ((~(var_6))))))));
                    arr_41 [i_3] [i_3] [i_8] [5ULL] [i_10] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_3] [i_3] [i_8] [14ULL] [i_10] [i_10])) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8 + 1] [i_10 + 3])))))));
                }
                for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_8))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */int) ((arr_43 [i_13] [i_9] [i_13] [i_13]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25154)))))), (arr_30 [i_9] [i_9])))))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [6] [i_8 + 1])) * (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))))))) + (1920691392U))))));
                    arr_44 [i_13] [i_13] [i_3] [i_3] [i_8 + 1] [i_3] = ((/* implicit */long long int) 0ULL);
                }
            }
            /* vectorizable */
            for (short i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                var_25 = ((/* implicit */long long int) ((5766673041453867577ULL) != (((/* implicit */unsigned long long int) var_3))));
                var_26 = ((/* implicit */int) min((var_26), (((((((/* implicit */_Bool) var_8)) ? (arr_35 [i_3] [i_8] [i_8] [i_14] [i_14] [i_14]) : (((/* implicit */int) var_10)))) / (((/* implicit */int) arr_47 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1]))))));
                arr_48 [i_3] [i_3] [i_3] = ((/* implicit */int) 9223372036854775807LL);
            }
        }
        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) 16535435022578998868ULL)))));
    }
}
