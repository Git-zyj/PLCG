/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206427
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_4)))) ? ((+(8183514876388049997ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) var_0))))), (((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
        var_13 = max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [15ULL] [i_0]) : (arr_0 [i_0] [i_0]))), (((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - (10156832233838520765ULL))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */short) ((((unsigned long long int) 10263229197321501618ULL)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1] [i_0]))))));
            arr_6 [i_0] [12ULL] [i_0] = ((/* implicit */short) ((unsigned long long int) (-((+(arr_0 [i_0] [i_1]))))));
        }
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_14 = (((-(8183514876388049997ULL))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-18559)) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) arr_12 [i_2] [i_2] [(unsigned char)10] [i_3])) ? (arr_0 [3ULL] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                var_15 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (unsigned char)255)), (min((18446744073709551614ULL), (((/* implicit */unsigned long long int) (unsigned char)247)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18559))) | (var_4))) | (arr_11 [i_3] [i_0] [i_2] [i_0])))));
            }
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18560)) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_2]))))), (1229151118605880032ULL))))));
        }
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    {
                        arr_19 [i_4] [i_4] [i_4] = 0ULL;
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_17 += ((/* implicit */unsigned long long int) var_10);
                            arr_22 [i_4] [i_4] = arr_20 [i_0] [i_0] [i_5] [i_6 - 1] [i_6] [i_7] [i_7];
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_4] [i_6 - 1] [i_4])) + (((/* implicit */int) arr_9 [i_4] [i_6 + 1] [i_5]))));
                            var_19 = ((/* implicit */short) ((unsigned char) var_9));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            arr_25 [i_4] [i_4] = ((/* implicit */signed char) (~(((((((/* implicit */int) ((signed char) (short)18580))) + (2147483647))) >> (((arr_12 [i_0] [i_0] [(unsigned char)13] [i_6]) - (9820860040624341289ULL)))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_12))));
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6] [i_6] [i_6 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4])))) >> (((((/* implicit */int) ((short) (signed char)-38))) + (50)))));
                            arr_26 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-18559)) + (((/* implicit */int) (short)18558))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */short) (~(11690890853128652079ULL)));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_23 [i_9 - 1] [i_6 + 1] [i_6 - 1] [4ULL] [i_6 - 1] [i_6 - 1] [i_0]))) % ((~(((/* implicit */int) (short)18558))))));
                            var_24 |= ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_0))))) ^ ((~(13589842537219159117ULL))))) & ((~(arr_12 [i_9] [i_0] [i_4] [i_0]))));
                        }
                        arr_29 [i_4] [i_5] [8ULL] [i_4] = ((/* implicit */signed char) min((var_6), (var_9)));
                        arr_30 [9ULL] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18565)) ? (((/* implicit */int) (short)18559)) : (((/* implicit */int) arr_28 [i_6 + 1] [i_4] [i_4] [i_4] [i_0]))))) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)50)))))))) || (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18559))) % (arr_3 [(signed char)14] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)18556)) : (((/* implicit */int) (short)18594))))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) (short)-18559)) + (18590)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)50)))))))) >> (((min((arr_24 [i_10] [i_10] [i_10] [(unsigned char)8] [i_10] [i_10]), (arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))) - (8892745784758093430ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_14 [i_10]), (arr_14 [i_10]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        arr_42 [i_10] [i_11] [i_13] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)18542)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [3ULL] [i_12] [0ULL] [i_10] [i_10]))) : (var_6))) >> (((var_12) - (10146358168397643387ULL)))));
                        var_27 -= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_0 [i_11] [(short)14]))) + ((-(((/* implicit */int) arr_32 [i_11] [i_10]))))));
                    }
                    arr_43 [(short)12] [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_27 [i_10] [i_11] [i_12] [i_11] [i_10] [i_11] [i_12])), (var_10)))) ? (min((((/* implicit */unsigned long long int) arr_38 [i_11] [i_11] [i_11] [i_10])), (12415228862975637868ULL))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10] [i_10] [i_10] [(unsigned char)14] [i_11] [i_11] [i_12]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_10] [(short)14] [i_11] [i_12] [i_12] [i_12]))) % (((((/* implicit */_Bool) arr_16 [i_10] [(unsigned char)12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_23 [i_10] [i_10] [i_12] [i_10] [i_10] [i_10] [i_10]))))));
                }
            } 
        } 
        var_28 = max((2459214923489275855ULL), (((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) var_2)))))));
        arr_44 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (8183514876388049997ULL)));
        arr_45 [i_10] = ((((arr_40 [(signed char)5]) % (arr_0 [i_10] [i_10]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 17058430578106433041ULL))) || ((!(((/* implicit */_Bool) var_5)))))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
    {
        arr_49 [i_14] = ((/* implicit */unsigned long long int) min(((short)-18595), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_14]) : (var_12)))))));
        arr_50 [(signed char)13] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_34 [i_14] [i_14] [i_14])) >> (((arr_33 [i_14] [i_14] [i_14]) - (9998917281521120567ULL)))))));
        arr_51 [i_14] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)17065)) >> (((((/* implicit */int) (short)18559)) - (18542))))))))), (arr_15 [i_14] [i_14] [i_14])));
        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4856901536490392498ULL))));
    }
    for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) arr_52 [i_15] [i_15]);
        arr_56 [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))));
        arr_57 [(short)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_52 [i_15] [i_15])) - (108))))) | (((/* implicit */int) ((((/* implicit */_Bool) (short)-8828)) || (((/* implicit */_Bool) arr_52 [4ULL] [4ULL])))))))) || (((/* implicit */_Bool) max(((short)18559), (((/* implicit */short) ((signed char) var_3))))))));
        arr_58 [i_15] [i_15 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_15 - 2] [i_15 - 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_55 [i_15 - 2]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) arr_53 [i_15 - 2])))));
    }
}
