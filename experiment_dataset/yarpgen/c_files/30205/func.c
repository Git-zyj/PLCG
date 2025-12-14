/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30205
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (var_5))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_2 + 2]))));
                    arr_11 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) (((-(var_7))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            var_17 |= ((/* implicit */unsigned char) arr_7 [i_4 + 1] [i_4 + 1]);
            var_18 += ((/* implicit */unsigned short) ((var_1) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(short)2] [(unsigned short)6] [i_4])) ? (((/* implicit */int) arr_0 [(unsigned short)17])) : (((/* implicit */int) var_0)))))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_19 = ((/* implicit */short) ((unsigned short) var_1));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        arr_22 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned short) var_1))) : (((((/* implicit */_Bool) (unsigned short)57913)) ? (((/* implicit */int) (short)-15834)) : (((/* implicit */int) arr_0 [5LL]))))));
                        arr_23 [i_1] [i_4] [i_1] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_1])) && (((/* implicit */_Bool) ((int) arr_12 [i_4] [i_1] [(unsigned char)3])))));
                    }
                    arr_24 [i_5] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_11)) ? (arr_3 [(unsigned short)8] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    arr_27 [i_1] [i_1] [i_1] [i_5] [(unsigned char)4] [i_8] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_4]))));
                    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) 2537527164U)) ? (((/* implicit */unsigned long long int) 1757440132U)) : (274877906943ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
                }
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    arr_32 [i_9] [i_1] [i_1] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)29366))))) & (((unsigned long long int) arr_12 [i_1] [i_1] [(unsigned char)14]))));
                    arr_33 [i_1] [i_1] [i_5] [i_9] = ((/* implicit */unsigned short) arr_31 [i_1] [i_1] [i_1] [i_1]);
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_10 [i_4 + 1] [i_5]))));
                }
            }
            for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                arr_36 [i_1] [i_4] [i_10] [i_10] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_14 [i_10] [(unsigned short)5]))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((long long int) arr_25 [i_1] [7LL] [i_10] [i_11] [i_12])))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (short)15826))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_16 [i_4] [2] [i_10] [2])) ? (var_5) : (((/* implicit */int) arr_37 [i_1] [i_1] [14] [i_1] [9] [i_1])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_4] [i_1] [i_10]))))));
            }
            arr_42 [(_Bool)1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1])) == (((/* implicit */int) arr_15 [i_4 + 2] [i_4 + 1] [i_4 - 1]))));
            arr_43 [i_1] [i_4 + 2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_16 [i_4] [7ULL] [i_1] [i_1]) : (314151454))))));
        }
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_29 [5] [i_1]))));
        var_26 = ((/* implicit */int) arr_40 [i_1]);
        arr_44 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32443)) > (((var_5) / (((/* implicit */int) var_12))))));
    }
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)20940)))))));
    /* LoopSeq 2 */
    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        arr_47 [i_13] [i_13] = ((/* implicit */signed char) arr_37 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
        /* LoopSeq 2 */
        for (long long int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) ((((int) (unsigned short)25057)) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1757440131U)) ? (((/* implicit */int) (unsigned char)251)) : (1098482526)))))));
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_13])))))) * (((/* implicit */int) ((((/* implicit */_Bool) (-(1757440131U)))) || (((/* implicit */_Bool) arr_18 [i_13] [i_13] [i_13] [i_13] [i_13]))))))))));
        }
        for (long long int i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (unsigned short)38588))));
            arr_52 [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_15] [i_15]))));
        }
    }
    /* vectorizable */
    for (signed char i_16 = 2; i_16 < 21; i_16 += 3) 
    {
        arr_56 [i_16] = ((/* implicit */short) (+(-1098482538)));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
        {
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                {
                    var_31 ^= ((/* implicit */signed char) ((1859962838U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_16 - 2])))));
                    /* LoopSeq 3 */
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        var_32 = ((/* implicit */int) (signed char)-86);
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55880))) : (813326371U))))));
                        var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) arr_0 [i_16]))));
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_16]))) / (var_7))))));
                    }
                    for (short i_20 = 3; i_20 < 21; i_20 += 3) /* same iter space */
                    {
                        var_36 = (unsigned char)174;
                        arr_68 [i_16] [i_17] [(unsigned short)17] [(unsigned short)17] [i_17] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (unsigned short)26418)) : (arr_54 [i_16 - 1] [i_16])));
                    }
                    for (short i_21 = 3; i_21 < 21; i_21 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) (short)8870);
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 2; i_22 < 20; i_22 += 4) 
                        {
                            var_38 += ((/* implicit */signed char) (!(((/* implicit */_Bool) -1017440921))));
                            arr_74 [i_22] [i_22 - 1] |= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_61 [i_17] [(short)14] [i_21 - 2] [i_22 + 2]))));
                        }
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (1757440132U)))))))));
                        arr_75 [i_16] [(unsigned short)12] = ((/* implicit */signed char) ((arr_59 [i_16 - 2] [(signed char)8] [i_18]) / (arr_54 [i_16 + 1] [(short)15])));
                    }
                }
            } 
        } 
        var_40 *= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))));
    }
}
