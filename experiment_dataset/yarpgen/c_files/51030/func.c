/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51030
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [(unsigned short)4] [i_0] [i_0] = ((/* implicit */int) ((signed char) max((-1684587545), ((+(((/* implicit */int) (signed char)-55)))))));
                var_14 = ((/* implicit */_Bool) arr_2 [i_0]);
                var_15 |= ((/* implicit */short) max((((unsigned int) arr_4 [i_0] [i_1])), (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_12)))), (max((((/* implicit */int) (short)29966)), (var_7))))))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 6; i_2 += 1) 
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_1] [i_2])))) ? ((-(arr_3 [i_0] [i_0] [i_2 + 3]))) : (arr_3 [i_0] [i_1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 6; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) var_7);
                                var_18 = ((/* implicit */short) arr_7 [i_4] [i_0] [i_1]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_13) : (var_3))), (max((var_13), (((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)57))));
    var_20 = ((/* implicit */signed char) min((var_20), ((signed char)-124)));
    /* LoopSeq 3 */
    for (short i_5 = 3; i_5 < 18; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (short i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                for (unsigned int i_8 = 3; i_8 < 19; i_8 += 2) 
                {
                    {
                        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_8 + 2] [i_6] [i_6] [i_5 + 3]))))) ? (((((/* implicit */_Bool) arr_20 [i_8 - 3] [i_6] [i_7] [i_5 - 3])) ? (((/* implicit */int) var_8)) : (arr_19 [i_5] [i_8 - 2]))) : (((/* implicit */int) ((((/* implicit */int) (short)-27)) == (((/* implicit */int) arr_20 [i_8 + 1] [i_6] [i_6] [i_5 + 1])))))));
                        arr_24 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)21547))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_9 = 1; i_9 < 18; i_9 += 3) 
        {
            var_22 ^= ((/* implicit */int) (signed char)7);
            var_23 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (signed char)58)), (((unsigned int) var_1)))), (arr_16 [i_9] [(unsigned char)14])));
        }
        for (signed char i_10 = 2; i_10 < 17; i_10 += 3) 
        {
            var_24 += ((/* implicit */unsigned char) ((_Bool) var_10));
            arr_30 [(short)0] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_27 [i_5] [i_10] [i_5])) ? (arr_22 [i_5] [i_5]) : (var_3))) : (((((/* implicit */int) arr_27 [i_5] [i_10] [i_5])) / (arr_19 [i_5] [i_10])))))) ? (arr_14 [i_5 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            arr_31 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5 + 3] [i_10 - 1])) ? (var_3) : (((/* implicit */int) (signed char)44))))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_5] [i_5] [(signed char)20])), (((((/* implicit */_Bool) arr_19 [i_5] [i_10])) ? (((/* implicit */int) var_8)) : (arr_26 [i_5 - 3] [i_10] [i_10])))))));
            arr_32 [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_3)) : (arr_14 [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [i_5])) ? (arr_21 [i_5] [i_5]) : (((/* implicit */int) var_4))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_26 [i_10 + 3] [i_10] [i_10 + 3]) : (((/* implicit */int) arr_18 [i_10 + 4] [i_10 - 1])))))));
        }
        /* vectorizable */
        for (short i_11 = 2; i_11 < 18; i_11 += 3) 
        {
            var_25 = ((/* implicit */short) (-(((/* implicit */int) arr_18 [8] [i_11]))));
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 18; i_12 += 4) 
            {
                for (int i_13 = 3; i_13 < 20; i_13 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                        arr_42 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_12] [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_5 - 3] [i_11] [i_5] [(unsigned short)20]))));
                        arr_43 [i_5] [i_5] [i_5] [i_13] [i_13 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 805306368U)) ? (arr_39 [i_11 + 3] [i_11] [i_11] [i_5]) : (((((/* implicit */int) arr_15 [i_5])) % (((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 1] [i_5] [i_13]))))));
                        arr_44 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_35 [(signed char)13] [i_5])) : (((/* implicit */int) (unsigned short)36864))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_29 [i_5] [i_5])) : (var_13))) : (((/* implicit */int) ((unsigned char) arr_40 [(signed char)10] [i_5] [i_12] [i_5] [i_13])))));
                    }
                } 
            } 
        }
        var_27 = ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)31)))) / (1015409711)))) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (unsigned short)45187)));
    }
    for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_14] [i_14] [i_14]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_29 [i_14] [i_14])) : (((/* implicit */int) arr_40 [i_14] [i_14] [i_14] [(_Bool)0] [i_14]))))) ? (((((/* implicit */int) var_5)) % (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_27 [i_14] [i_14] [i_14])))) : (((((/* implicit */_Bool) arr_41 [i_14] [(short)2] [i_14])) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_5)))) : (((/* implicit */int) max(((signed char)-8), (var_11))))))));
        var_29 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_16 [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_14])))))) ? (max((((/* implicit */int) var_9)), (1362587266))) : (max((((/* implicit */int) (unsigned char)4)), (arr_22 [(unsigned short)14] [(unsigned short)14])))))));
    }
    for (unsigned int i_15 = 1; i_15 < 23; i_15 += 4) 
    {
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+((-(((/* implicit */int) arr_47 [i_15])))))) : (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) max((arr_47 [i_15]), (((/* implicit */short) (signed char)-32))))) : (((((/* implicit */int) (signed char)-21)) & (((/* implicit */int) (signed char)31))))))));
        arr_51 [i_15] = ((/* implicit */_Bool) var_7);
    }
    var_31 = max((max(((+(((/* implicit */int) var_11)))), (max((((/* implicit */int) var_11)), (var_3))))), (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) var_0)), ((signed char)12)))) < (((/* implicit */int) var_1))))));
}
