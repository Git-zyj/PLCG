/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54550
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((min((var_0), (((/* implicit */int) ((unsigned char) (unsigned char)111))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_3)))))))));
                    arr_8 [i_0] [i_1 - 1] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) (((~(arr_4 [i_0] [i_2 - 3]))) & (((arr_4 [i_0] [i_2 - 3]) ^ (arr_4 [i_0] [i_2 - 3])))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_15 [i_0] [3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((arr_13 [i_2] [i_0]) ^ ((~(((/* implicit */int) arr_5 [i_0])))))) | ((~((~(((/* implicit */int) var_8))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_12 [i_1 - 1] [i_1] [i_2] [i_3] [i_2 + 1] [i_3] [i_4])))) ? (max((arr_12 [i_1 + 1] [i_1] [i_3] [i_0] [i_2 + 1] [i_4] [i_4]), (arr_12 [i_1 - 3] [i_1] [i_2] [7] [i_2 - 2] [i_1] [i_3]))) : (((arr_12 [i_1 - 1] [i_1] [i_2 + 1] [i_3] [i_2 - 1] [(signed char)5] [(unsigned char)6]) & (arr_12 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_3] [i_2 - 1] [i_0] [i_4])))));
                            var_12 = ((/* implicit */unsigned char) min((min(((~(((/* implicit */int) arr_7 [i_1 + 1] [i_2] [i_3] [i_4])))), (((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 3] [i_1] [i_3] [i_0] [i_4] [(unsigned char)5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))), ((~(((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))));
                            arr_17 [i_0] [i_1 - 3] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) & (((/* implicit */int) ((unsigned char) ((int) (signed char)-124)))));
                        }
                        for (signed char i_5 = 3; i_5 < 6; i_5 += 3) 
                        {
                            arr_20 [i_0] [(signed char)7] [i_2 - 1] [i_2] [i_0] = ((((/* implicit */int) (signed char)55)) ^ (((/* implicit */int) (signed char)-124)));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 - 1] [i_2] [i_2 - 2])) ? (((/* implicit */int) var_1)) : (max((arr_14 [7] [i_0] [i_1] [i_1] [9]), (((/* implicit */int) var_5))))))) ? (((((((/* implicit */int) arr_18 [i_2] [i_2 + 2] [i_2] [i_0] [i_2 - 2] [i_2] [i_2 - 3])) - (var_9))) - (var_3))) : (min((((/* implicit */int) arr_2 [i_5 - 2])), (((((/* implicit */int) arr_3 [i_0] [i_1])) - (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_0] [i_3] [i_5 - 1] [i_5 + 3])))))));
                        }
                        arr_22 [i_0] [i_1 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                        arr_23 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_1 [i_0] [i_0])) & (var_3))), ((+(min((var_2), (arr_0 [i_0])))))));
                        var_13 = ((/* implicit */signed char) var_9);
                    }
                    for (int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((arr_3 [i_0] [i_1 - 2]), ((unsigned char)110)))) : (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (signed char)10))))))) ? (((/* implicit */int) ((min((var_10), (var_9))) != (((/* implicit */int) ((signed char) var_3)))))) : (((/* implicit */int) min((var_1), (min(((unsigned char)122), (((/* implicit */unsigned char) (signed char)-63)))))))));
                        var_14 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) (unsigned char)13)), ((+(((/* implicit */int) arr_11 [i_2] [(signed char)8] [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 2]))))))));
                        var_15 = var_10;
                    }
                    for (int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        var_16 -= (unsigned char)122;
                        /* LoopSeq 3 */
                        for (int i_8 = 1; i_8 < 7; i_8 += 4) /* same iter space */
                        {
                            var_17 = ((signed char) arr_32 [i_8 + 1] [i_1] [i_2] [i_1 - 3] [i_8 + 1]);
                            arr_33 [i_8 + 2] [i_1] [i_0] [i_7] [i_8] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) arr_32 [i_0] [i_1] [i_8 + 2] [i_7] [i_1 - 2])) - (((/* implicit */int) arr_19 [i_0] [i_1] [i_8 - 1] [i_1] [i_1 + 1] [(unsigned char)0] [i_1])))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 - 2] [i_8])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))));
                        }
                        for (int i_9 = 1; i_9 < 7; i_9 += 4) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] [i_1 - 2] [i_2] [i_7] [i_9] = ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) ((unsigned char) var_4))))) : ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
                            arr_39 [i_0] [i_1 - 1] [i_2 - 1] [i_0] [(signed char)3] [i_2 - 1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((int) (signed char)48))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (max((((/* implicit */int) var_5)), (var_9))))));
                            var_18 -= ((/* implicit */unsigned char) ((signed char) ((unsigned char) arr_1 [i_1] [i_7])));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 3; i_10 < 8; i_10 += 4) 
                        {
                            arr_44 [i_0] [i_1] [i_2] [i_2] [i_0] [i_7] [i_10 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0] [i_10] [i_10] [i_10 + 2] [i_10 + 1] [i_0])) ? (((/* implicit */int) arr_24 [i_0] [i_10 + 1] [i_10] [i_10] [i_10 + 1] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_10] [i_10] [i_10] [i_10 + 2] [i_0]))));
                            arr_45 [i_0] [i_7] [i_2] [i_1 - 2] [i_10] [i_2] [i_7] &= ((signed char) var_9);
                        }
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_0] [i_0] [8] [i_0] [i_0] [i_0])) <= ((+((-(var_9)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                arr_52 [i_0] [i_12] [i_0] [i_12] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -808670692)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned char)133)))), (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) var_5)) ? (var_7) : (arr_0 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 3])))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) >> (((((/* implicit */int) (signed char)115)) - (105)))));
                                var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) var_0))), ((-((~(182363124)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (var_2)))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_5))))) + ((-(536854528)))))));
    /* LoopNest 2 */
    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            {
                arr_58 [i_13] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_57 [i_13]))) - (((((/* implicit */int) (unsigned char)246)) << (((((/* implicit */int) arr_54 [i_14])) + (125)))))))) && (((((/* implicit */int) arr_57 [i_14])) >= (((/* implicit */int) arr_57 [i_13]))))));
                /* LoopNest 3 */
                for (unsigned char i_15 = 4; i_15 < 24; i_15 += 2) 
                {
                    for (signed char i_16 = 3; i_16 < 24; i_16 += 3) 
                    {
                        for (signed char i_17 = 2; i_17 < 24; i_17 += 3) 
                        {
                            {
                                arr_71 [i_16] [i_14] [i_15 - 1] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-8)) ? (8388607) : (((/* implicit */int) var_4)))) != (((/* implicit */int) arr_57 [i_13]))))) & (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_1))))))));
                                var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_13] [i_14] [i_17 - 2])) ? (-808670719) : (((/* implicit */int) arr_69 [i_13] [i_14] [i_13] [i_13] [i_16] [i_17])))))))) ^ (((/* implicit */int) arr_69 [i_17] [i_17 - 1] [i_16] [i_13] [i_14] [i_13])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        for (signed char i_20 = 2; i_20 < 22; i_20 += 4) 
                        {
                            {
                                arr_78 [i_20] [i_19] [i_14] = ((/* implicit */signed char) (~(min((808670665), (-9)))));
                                arr_79 [i_20] [i_14] [i_14] [i_19] [i_13] [23] = ((/* implicit */signed char) ((int) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_70 [i_20] [i_19] [i_18] [i_14] [i_13]))))));
                                var_25 = ((((/* implicit */int) (signed char)7)) ^ (((((/* implicit */int) (signed char)-40)) % (((/* implicit */int) (signed char)57)))));
                                arr_80 [i_13] [i_14] [i_19] [i_14] = arr_59 [i_20 + 2] [i_20 + 2] [i_20 + 2];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) max((((/* implicit */int) ((var_7) < (var_0)))), ((~(((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) min((var_4), ((unsigned char)71)))))));
}
