/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196289
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((max((((((/* implicit */int) var_7)) * (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-30741)))))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_1), ((short)30740)))) : ((-(((/* implicit */int) var_5)))))))))));
    var_13 = var_2;
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) ? ((+(((/* implicit */int) arr_8 [i_2 - 1])))) : (min((((((/* implicit */int) arr_0 [i_0] [i_1])) * (((/* implicit */int) (short)30741)))), (((/* implicit */int) arr_8 [i_0 - 1]))))));
                        var_14 = ((/* implicit */short) (-(max((((/* implicit */int) arr_1 [i_2])), (((((/* implicit */int) (short)5626)) + (((/* implicit */int) (short)-30741))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_4 = 2; i_4 < 10; i_4 += 1) 
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((((/* implicit */int) (short)-30741)) * (((/* implicit */int) var_5)))) : (((/* implicit */int) min(((short)32767), (arr_13 [i_0] [i_4] [i_4]))))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_4] [i_0] [i_0] [i_4])) : (((((/* implicit */int) arr_3 [(short)12] [i_1])) & (((/* implicit */int) arr_0 [i_0] [(short)0]))))))));
                var_16 = ((/* implicit */short) min((var_16), ((short)9515)));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [i_1] [i_4])) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)4240)) : (((/* implicit */int) arr_2 [(short)2])))) : (((/* implicit */int) (short)30740))))) ? (((/* implicit */int) arr_7 [i_4])) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_4] [i_4 + 2] [i_4 + 3])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2] [i_4] [i_4 - 2] [i_4 + 3]))))));
                    arr_22 [i_4] = ((short) ((short) (!(((/* implicit */_Bool) (short)18680)))));
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_0] [i_4] [i_0 + 1] [i_4]))));
                }
                /* LoopSeq 2 */
                for (short i_6 = 2; i_6 < 11; i_6 += 3) 
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!((!(((/* implicit */_Bool) arr_1 [i_4 + 3])))))))));
                    var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_6 - 1] [i_0 + 1])) : (((/* implicit */int) (short)-16679))))));
                    var_20 = arr_9 [i_0] [i_1] [i_4] [i_6 - 2] [i_0];
                    var_21 = ((/* implicit */short) (((~(((/* implicit */int) arr_11 [i_4] [i_4 + 3])))) ^ (min(((~(((/* implicit */int) (short)-4240)))), (((/* implicit */int) (short)30754))))));
                    var_22 = arr_9 [i_0] [i_0 - 1] [i_4] [i_0] [i_0];
                }
                for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_4 + 2] [i_4] [i_0 - 2])) + (((/* implicit */int) ((((/* implicit */int) arr_26 [i_0 - 1] [i_1] [i_4 + 3] [i_0 - 1])) <= (((/* implicit */int) arr_13 [i_4 + 1] [i_4] [i_0 - 1])))))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_24 &= ((/* implicit */short) ((((((/* implicit */int) arr_29 [i_0] [i_0 + 1] [i_0] [i_4 - 1] [i_8])) < (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) <= (((/* implicit */int) arr_23 [i_7] [i_1]))))))) ? (max((((/* implicit */int) arr_6 [i_8] [i_7] [i_4 - 1] [i_0 + 2])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) arr_19 [i_0 + 2]))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (short)-32767))) + (((/* implicit */int) arr_11 [i_4] [i_0]))))) ? (((/* implicit */int) max((arr_1 [i_0 + 2]), ((short)-15131)))) : (((((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (short)4096)))) ? (((/* implicit */int) min(((short)-12987), (var_7)))) : (((/* implicit */int) var_6))))));
                    }
                }
            }
            var_26 ^= (short)-29514;
        }
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                for (short i_11 = 2; i_11 < 10; i_11 += 1) 
                {
                    {
                        var_27 *= (short)-17164;
                        arr_41 [i_11] = arr_1 [(short)10];
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) max(((short)4240), (((short) (short)32767)))))));
                        var_29 = ((/* implicit */short) min(((-(((/* implicit */int) var_3)))), (((((/* implicit */int) arr_1 [i_11 - 1])) + (((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [i_9] [i_11]))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (short i_12 = 1; i_12 < 16; i_12 += 2) /* same iter space */
    {
        var_30 = arr_43 [i_12] [i_12];
        /* LoopNest 3 */
        for (short i_13 = 4; i_13 < 16; i_13 += 3) 
        {
            for (short i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                for (short i_15 = 3; i_15 < 15; i_15 += 2) 
                {
                    {
                        var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */int) (short)-30740)) : (((/* implicit */int) arr_42 [i_12]))))) ? (((/* implicit */int) arr_51 [i_12 + 1])) : ((-(((((/* implicit */_Bool) arr_45 [i_14])) ? (((/* implicit */int) (short)-8766)) : (((/* implicit */int) var_3))))))));
                        arr_53 [i_15 + 2] [i_15] [i_12] [i_12] [(short)15] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_12]))))) ? (((((/* implicit */_Bool) arr_50 [i_12 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)6554)))) : (((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_12 + 1]))))) : (((/* implicit */int) arr_45 [i_12])))))));
    }
    for (short i_16 = 1; i_16 < 16; i_16 += 2) /* same iter space */
    {
        arr_58 [i_16] [(short)3] = ((/* implicit */short) (+(((/* implicit */int) arr_46 [i_16] [i_16 + 1] [i_16 + 1]))));
        var_33 = ((/* implicit */short) ((((((((/* implicit */int) arr_54 [(short)12])) + (((/* implicit */int) arr_48 [(short)12] [i_16 + 1])))) <= (((((/* implicit */_Bool) arr_49 [i_16] [i_16 - 1] [i_16] [i_16])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)24311)))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_49 [i_16] [i_16] [i_16] [i_16])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_45 [i_16])))))))) : (((/* implicit */int) var_1))));
        arr_59 [i_16] [i_16 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) | ((~(((/* implicit */int) (short)0))))))) ? (((/* implicit */int) arr_44 [(short)14])) : ((((!(((/* implicit */_Bool) (short)0)))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_47 [i_16 - 1]))))));
    }
    /* vectorizable */
    for (short i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        arr_64 [(short)11] = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) var_7)))) + (((/* implicit */int) (short)26049))));
        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))) < ((+(((/* implicit */int) arr_30 [i_17] [i_17])))))))));
        arr_65 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_6 [i_17] [i_17] [i_17] [i_17]))) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_49 [i_17] [i_17] [i_17] [(short)0]))));
    }
}
