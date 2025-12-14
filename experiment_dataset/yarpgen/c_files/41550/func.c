/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41550
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
    var_12 = ((/* implicit */short) min((min((((var_5) | (var_3))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_10)) % (((/* implicit */int) var_9)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-4096)) : (((/* implicit */int) (signed char)6))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] &= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_2]) : (arr_1 [i_0])))) ? (((/* implicit */long long int) min((((/* implicit */int) var_9)), (arr_4 [i_0] [i_1])))) : (min((arr_6 [i_0] [i_0] [i_2 - 1] [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))));
                    arr_9 [i_2] [i_2] = ((/* implicit */_Bool) min(((signed char)-1), ((signed char)-4)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_3]))) : (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_7)));
                        arr_15 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) var_10))));
                        arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_1 [i_0]);
                        arr_17 [i_0] [i_2] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) ((unsigned long long int) ((unsigned short) arr_4 [i_0] [i_0])));
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */short) ((arr_19 [i_0]) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (signed char)-11)) : (-1188278983)))) ? (max((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_4 [i_0] [i_0]))) : (((/* implicit */int) min((arr_20 [i_1] [i_2] [i_4]), (arr_0 [i_2 - 1]))))))));
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_19 [i_1]) ? (min((((/* implicit */long long int) arr_0 [i_0])), ((+(arr_1 [i_1]))))) : (((/* implicit */long long int) ((((_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_2] [i_2 - 1] [(signed char)1] [i_2 - 1] [9LL])) : (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) arr_12 [i_2] [i_1])))))))));
                        arr_23 [i_0] [(signed char)7] [i_0] [i_2] = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_2] [i_4] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [(short)8]))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0])))));
                    }
                    arr_24 [i_2] = ((/* implicit */unsigned char) ((short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))), (max((arr_12 [i_2] [i_1]), (((/* implicit */unsigned short) arr_3 [i_1])))))));
                    arr_25 [i_2 - 1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) min((arr_5 [i_2] [i_1] [i_2] [i_0]), (((/* implicit */short) arr_11 [1U] [(_Bool)1] [i_2] [i_1] [i_2 - 1])))))))) / (min((max((var_5), (var_5))), (((/* implicit */long long int) arr_4 [i_2 - 1] [i_2 - 1]))))));
                }
            } 
        } 
        arr_26 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) arr_4 [i_0] [i_0]))), (min((((((/* implicit */_Bool) arr_6 [(unsigned char)3] [(short)9] [i_0] [i_0])) ? (arr_6 [i_0] [i_0] [i_0] [(_Bool)1]) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6)))))))));
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            arr_30 [(unsigned char)11] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_29 [i_0] [i_5 - 1] [i_0])) ? (((/* implicit */int) arr_19 [i_5 + 2])) : (((/* implicit */int) arr_13 [i_0] [i_5 + 2] [i_0] [i_0] [i_5])))) : (((/* implicit */int) min((arr_29 [i_0] [i_5] [i_0]), (((/* implicit */signed char) arr_19 [i_0]))))))), (max((((/* implicit */int) arr_19 [i_0])), (((((/* implicit */_Bool) arr_7 [4LL] [4LL] [i_5 + 3] [i_0])) ? (((/* implicit */int) arr_28 [i_0] [i_0])) : (((/* implicit */int) arr_19 [i_0]))))))));
            /* LoopNest 3 */
            for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            arr_39 [i_0] [i_5 + 2] [i_6] [(unsigned char)0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_8])) ? (((/* implicit */long long int) arr_34 [i_0] [i_5] [(signed char)9] [i_7] [i_5])) : (((((/* implicit */long long int) (+(((/* implicit */int) var_8))))) | (max((arr_33 [i_0] [i_0] [(unsigned short)6] [i_0]), (((/* implicit */long long int) var_9))))))));
                            arr_40 [(signed char)12] [i_7] [i_7] [i_6] [i_7] [12] [i_0] = arr_37 [i_8] [i_7] [i_6] [i_6] [i_6] [i_7] [i_0];
                        }
                    } 
                } 
            } 
            arr_41 [i_0] [1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_35 [i_5] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_5 - 1] [i_5] [i_5 - 1]))) : (arr_35 [i_0] [i_0] [i_0] [i_5]))) != (max((((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (arr_36 [i_0] [i_0] [i_5] [(signed char)4]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_0] [(_Bool)1]))))), (((/* implicit */long long int) arr_32 [i_0] [1U] [i_5]))))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_44 [i_9] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) arr_43 [i_9] [i_9]))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (signed char)-62)))))))));
        arr_45 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) (unsigned char)130)) : (((((/* implicit */_Bool) (unsigned short)54635)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (signed char)-48))))));
    }
}
