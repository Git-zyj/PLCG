/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40712
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */signed char) var_2);
        var_12 = arr_2 [i_0];
        arr_5 [i_0] [i_0] = (+(min((283153368U), (((/* implicit */unsigned int) max((((/* implicit */int) (short)25907)), (2051488722)))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) 1323141059);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_3))));
            var_14 = ((/* implicit */unsigned short) arr_12 [i_1] [i_2] [i_2]);
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_19 [i_1] [i_3] = ((/* implicit */short) ((arr_16 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1])))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_15 = ((/* implicit */unsigned short) arr_13 [i_1]);
                var_16 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_1] [i_3])) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) arr_12 [i_1] [(unsigned short)17] [(unsigned short)17])))));
                var_17 = ((/* implicit */int) arr_17 [i_1]);
            }
            for (int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1879048192U)) ? (1613780138) : (((/* implicit */int) arr_9 [i_1])))))));
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048575U)) ? (1613780134) : (var_7)))) ? (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_5] [11]))))) : (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) min(((-(-1613780139))), (((/* implicit */int) var_4)))))));
                    var_19 = ((/* implicit */unsigned int) min((min((arr_7 [i_3] [i_1]), (arr_7 [i_1] [i_1]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) -1061442126)))))));
                    var_20 ^= ((/* implicit */short) (+(-1972425012)));
                    var_21 ^= ((/* implicit */unsigned short) arr_9 [i_5]);
                }
                var_22 = ((/* implicit */short) min((min((((/* implicit */int) arr_17 [i_1])), (arr_22 [i_1] [i_3] [i_3] [i_5]))), (arr_22 [i_1] [i_1] [i_3] [i_5])));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_35 [i_1] [i_3] [i_5] [i_1] [i_8] = (-(((/* implicit */int) ((arr_16 [i_1]) <= (arr_16 [i_1])))));
                            arr_36 [i_8] [i_3] [i_5] [i_7] [i_5] |= ((/* implicit */int) min((((/* implicit */unsigned int) max((arr_31 [i_1] [i_1] [i_1] [i_8] [i_8]), (arr_31 [i_1] [i_3] [i_3] [i_7] [i_8])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1004903434)) ? (-1613780139) : (((/* implicit */int) arr_7 [i_3] [i_8]))))) ? (((3453988906U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)5448))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5))))))))));
                            arr_37 [i_1] [i_3] [i_1] [i_7] [i_1] = ((/* implicit */short) arr_11 [i_1] [i_8]);
                            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_12 [i_1] [i_1] [i_7]), (arr_12 [i_1] [i_3] [i_5]))))));
                            var_24 = min((((((/* implicit */_Bool) var_8)) ? (-1613780139) : (((/* implicit */int) arr_25 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)12950)))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_1] [i_3] [i_10])) ^ (1887499425)));
                        var_26 += ((/* implicit */short) var_6);
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (+(var_2))))));
                    }
                    for (short i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        arr_49 [i_1] [i_3] [i_9] [i_10] [i_1] [i_10] [i_12] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_48 [i_1] [(short)1] [(signed char)4] [(short)1] [(short)1])) : (((/* implicit */int) var_4)));
                        arr_50 [i_1] [i_3] [i_3] [i_9] [i_10] [i_10] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_3] [i_9] [i_1] [i_1])) ? (((unsigned int) arr_13 [i_1])) : (((/* implicit */unsigned int) var_6))));
                        var_28 = (-(((/* implicit */int) arr_32 [i_1] [i_3] [i_9] [i_9] [i_10] [i_12] [i_12])));
                    }
                    for (short i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) arr_17 [i_1]);
                        var_30 += ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_10] [i_9])) ? (var_2) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_1] [i_3] [i_3] [i_9] [i_10] [i_10] [i_13])))))));
                        var_31 = ((/* implicit */unsigned int) var_10);
                    }
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)6466))))) && (((/* implicit */_Bool) (short)-5449)))))));
                    arr_53 [i_10] [i_3] [i_3] [i_9] [i_10] |= ((/* implicit */unsigned int) (~(((var_6) + (((/* implicit */int) (short)-6466))))));
                    var_33 = var_11;
                }
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((unsigned short) min((var_3), ((short)-11923)))))));
            }
        }
        for (int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            arr_56 [i_1] [i_14] = ((int) ((2054383499) == (var_11)));
            arr_57 [i_1] [i_14] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_10))))), (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)22687)))), (((/* implicit */int) var_5))))));
        }
    }
}
