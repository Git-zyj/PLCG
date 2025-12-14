/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242939
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
    var_10 *= var_8;
    var_11 &= ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(signed char)12]))))) ? (max(((~(((/* implicit */int) arr_0 [(signed char)10])))), ((~(((/* implicit */int) var_5)))))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-32235)) : (((/* implicit */int) arr_1 [(signed char)4])))), (((/* implicit */int) arr_0 [(short)6]))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (var_6)));
                        var_13 += ((/* implicit */short) (signed char)(-127 - 1));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 3; i_6 < 22; i_6 += 2) /* same iter space */
            {
                arr_22 [i_4] [i_4] [(short)0] &= ((/* implicit */short) arr_21 [i_4]);
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) min(((!(((/* implicit */_Bool) arr_15 [(short)2])))), (((((/* implicit */int) var_8)) < (((/* implicit */int) arr_12 [(short)2]))))))) < ((~(((/* implicit */int) max((var_8), (var_9)))))))))));
            }
            for (short i_7 = 3; i_7 < 22; i_7 += 2) /* same iter space */
            {
                var_15 ^= ((/* implicit */short) var_0);
                var_16 ^= ((/* implicit */short) max((((/* implicit */int) var_2)), ((((+(((/* implicit */int) arr_16 [i_4 + 1])))) & (((/* implicit */int) max((var_3), ((short)32704))))))));
            }
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_4 + 2]))))) ? (((/* implicit */int) ((short) arr_18 [i_4 + 3]))) : (((/* implicit */int) max(((signed char)127), (arr_18 [i_4 + 1])))))))));
        }
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (short i_9 = 2; i_9 < 24; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    {
                        arr_33 [i_4] [i_10] |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-32740)) ? (((((/* implicit */_Bool) arr_26 [i_10])) ? (((/* implicit */int) arr_26 [i_10])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((short) arr_26 [i_10])))));
                        var_18 |= min((((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_4] [i_9 + 1] [i_10] [i_9 + 1])) >= (((/* implicit */int) arr_32 [i_8] [i_10] [i_10] [i_10]))))), (((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) var_0))))));
                        var_19 = var_3;
                        /* LoopSeq 1 */
                        for (short i_11 = 2; i_11 < 22; i_11 += 2) 
                        {
                            var_20 &= ((/* implicit */short) min(((+(((/* implicit */int) arr_11 [i_9 + 1] [i_11])))), ((+(((/* implicit */int) arr_34 [i_9 - 2] [i_4 - 1] [i_4 + 3] [i_4] [i_4]))))));
                            var_21 |= ((/* implicit */signed char) min(((-(((/* implicit */int) arr_13 [i_11])))), (((((/* implicit */int) arr_17 [i_4 - 1])) & ((~(((/* implicit */int) arr_32 [i_4] [i_10] [i_10] [i_10]))))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_20 [i_9 - 2] [i_10] [i_10] [i_4])) ? (((/* implicit */int) arr_20 [i_9 - 1] [i_10] [i_10] [i_4])) : (((/* implicit */int) arr_20 [i_9 - 1] [i_10] [i_10] [i_4])))), (((((/* implicit */_Bool) arr_20 [i_9 - 1] [i_10] [i_10] [i_4])) ? (((/* implicit */int) arr_20 [i_9 - 2] [i_11] [i_11] [i_4 + 2])) : (((/* implicit */int) var_3)))))))));
                        }
                    }
                } 
            } 
        } 
        var_23 *= ((/* implicit */signed char) (~(((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) arr_32 [i_4 - 1] [(signed char)14] [i_4 + 2] [i_4 - 1])) - (25401)))))));
    }
    /* LoopSeq 4 */
    for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
    {
        var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_12] [i_12] [i_12] [i_12] [i_12]))))) ? (max((((((/* implicit */int) arr_25 [i_12] [i_12])) | (((/* implicit */int) (signed char)117)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_24 [i_12] [(short)4])) : (((/* implicit */int) arr_11 [i_12] [(short)20])))))) : (((/* implicit */int) var_7))));
        var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_12])) ? ((-(((/* implicit */int) (signed char)-119)))) : (max((((/* implicit */int) arr_4 [(signed char)4] [i_12])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [(short)14] [i_12]))))))));
    }
    for (short i_13 = 1; i_13 < 11; i_13 += 2) 
    {
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_20 [i_13 + 1] [(short)4] [(short)4] [i_13 + 1])) ? (((/* implicit */int) arr_24 [(short)10] [(short)10])) : (((/* implicit */int) arr_24 [(short)22] [(short)22])))), (((/* implicit */int) ((((/* implicit */int) arr_20 [i_13 + 1] [(short)8] [(short)8] [i_13 + 1])) == (((/* implicit */int) (short)22307))))))))));
        var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)36))))))) || (((/* implicit */_Bool) ((signed char) (signed char)78)))));
    }
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                for (short i_17 = 2; i_17 < 24; i_17 += 3) 
                {
                    for (short i_18 = 0; i_18 < 25; i_18 += 3) 
                    {
                        {
                            var_28 *= ((short) arr_45 [(short)2] [i_15]);
                            var_29 -= ((/* implicit */short) (-(((/* implicit */int) arr_16 [i_14]))));
                            var_30 -= ((/* implicit */signed char) (-(((((/* implicit */int) arr_43 [i_15] [(signed char)18] [i_15])) & (((/* implicit */int) (short)20342))))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~(((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2)))))))));
                            var_32 ^= ((/* implicit */short) ((((((/* implicit */int) arr_21 [i_14])) + (2147483647))) << (((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_34 [i_14] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_20 [i_18] [i_18] [(short)10] [i_18])))) + (59))) - (3)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_19 = 1; i_19 < 21; i_19 += 3) /* same iter space */
            {
                var_33 -= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */int) arr_42 [i_19 + 1] [i_15])) < (((/* implicit */int) (short)15231)))))));
            }
            for (signed char i_20 = 1; i_20 < 21; i_20 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_21 = 1; i_21 < 21; i_21 += 1) 
                {
                    var_35 &= ((/* implicit */short) ((((/* implicit */int) arr_21 [i_20 - 1])) ^ (((/* implicit */int) arr_21 [i_20 - 1]))));
                    var_36 ^= ((/* implicit */short) (((~(((/* implicit */int) arr_13 [(short)4])))) | (((/* implicit */int) arr_53 [i_20 + 1] [(signed char)12] [i_20 + 1] [i_20] [i_21 + 1]))));
                }
                arr_66 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_20 + 2] [i_20 - 1] [i_14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-84))));
                var_37 += arr_13 [(short)2];
            }
            for (signed char i_22 = 0; i_22 < 25; i_22 += 3) 
            {
                var_38 |= ((/* implicit */signed char) arr_64 [i_14] [i_15] [i_15] [i_22] [i_22] [i_22]);
                var_39 += var_9;
                arr_70 [i_14] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 25; i_23 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_24 = 0; i_24 < 25; i_24 += 3) 
                    {
                        var_40 += ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_6)))));
                        arr_75 [i_23] [i_15] [i_23] [i_23] [i_24] [i_15] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_62 [i_14] [i_14] [i_23]))))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) arr_19 [i_14] [i_15] [i_24]))));
                    }
                    for (signed char i_25 = 0; i_25 < 25; i_25 += 2) 
                    {
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-20354)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_64 [i_14] [i_15] [i_15] [i_22] [i_15] [i_15])))))));
                        var_42 -= arr_68 [i_14];
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_14])) ? (((/* implicit */int) arr_12 [i_14])) : (((/* implicit */int) arr_12 [i_14]))));
                        var_44 += ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_25])) == (((((/* implicit */_Bool) arr_31 [i_25] [i_22] [i_25])) ? (((/* implicit */int) (short)-20367)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                    }
                    arr_78 [i_14] [i_14] [i_14] [i_14] = arr_45 [i_14] [i_14];
                }
                var_45 = ((/* implicit */signed char) max((var_45), (((signed char) arr_46 [i_14] [i_15] [(signed char)22]))));
            }
            var_46 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-127)) : (((((/* implicit */int) arr_15 [(signed char)8])) | (((/* implicit */int) var_6))))));
            /* LoopNest 3 */
            for (short i_26 = 1; i_26 < 24; i_26 += 2) 
            {
                for (short i_27 = 0; i_27 < 25; i_27 += 2) 
                {
                    for (short i_28 = 1; i_28 < 23; i_28 += 3) 
                    {
                        {
                            var_47 += ((/* implicit */short) ((((/* implicit */int) arr_42 [i_26 - 1] [i_26 - 1])) >> (((((/* implicit */int) arr_58 [i_27] [i_28 + 1] [i_26 + 1] [i_27])) - (28235)))));
                            var_48 = (short)19759;
                            var_49 ^= ((/* implicit */short) ((signed char) arr_76 [i_28] [i_28] [i_27]));
                            var_50 *= ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_26 + 1])) == (((/* implicit */int) arr_23 [i_26 - 1]))));
                        }
                    } 
                } 
            } 
        }
        for (short i_29 = 4; i_29 < 24; i_29 += 3) /* same iter space */
        {
            var_51 = var_4;
            arr_89 [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-19759))));
        }
        for (short i_30 = 4; i_30 < 24; i_30 += 3) /* same iter space */
        {
            arr_92 [(short)8] &= ((/* implicit */signed char) arr_47 [i_30 - 3] [i_30 - 2] [(signed char)12]);
            var_52 += ((/* implicit */short) arr_30 [i_30] [i_30] [(signed char)10] [i_30]);
        }
        var_53 ^= ((/* implicit */signed char) (((-(((/* implicit */int) var_5)))) - (((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (signed char i_31 = 4; i_31 < 9; i_31 += 2) 
    {
        var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((((/* implicit */int) arr_56 [i_31] [i_31 - 1] [i_31 - 3] [i_31])) ^ (((/* implicit */int) arr_49 [i_31])))))));
        var_55 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) arr_30 [i_31 + 2] [i_31] [i_31] [i_31 - 1])) : (((/* implicit */int) arr_0 [i_31]))));
    }
}
