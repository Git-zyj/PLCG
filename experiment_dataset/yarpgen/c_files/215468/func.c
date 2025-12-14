/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215468
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_12 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [i_2] [i_3]))) : (((/* implicit */int) var_0))))));
                        var_19 ^= ((/* implicit */signed char) max(((-(((/* implicit */int) (signed char)-32)))), (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) min((var_10), (var_7)))) : (((/* implicit */int) var_2))))));
                        arr_13 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [(signed char)2]), (min(((signed char)-46), (arr_2 [i_0] [i_1] [(signed char)6])))))) / (((/* implicit */int) min((var_12), (var_9))))));
                        arr_14 [i_0] [i_1] [(signed char)3] [(signed char)5] [i_3] [(signed char)3] |= arr_7 [i_0] [i_0] [i_2];
                    }
                    arr_15 [i_0] [(signed char)8] [i_2] [i_2] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_1 [i_1 - 1])))) + (2147483647))) << (((((((/* implicit */int) (signed char)-99)) + (110))) - (11)))));
                    arr_16 [i_2] [i_1] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-57)) + (2147483647))) << (((((((/* implicit */int) var_9)) + (74))) - (16)))))) ? ((~(((/* implicit */int) ((signed char) (signed char)88))))) : (((((/* implicit */int) (signed char)100)) & (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)127))))))));
                }
            } 
        } 
        arr_17 [i_0] = ((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    {
                        var_20 ^= var_15;
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_13)))));
                        arr_27 [i_6] = min((arr_11 [(signed char)2] [(signed char)12]), (var_9));
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 2; i_7 < 13; i_7 += 4) 
    {
        arr_31 [(signed char)13] = min((max((arr_11 [i_7] [i_7 - 2]), (arr_11 [i_7] [i_7 - 2]))), (((signed char) var_5)));
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                for (signed char i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 13; i_11 += 2) 
                        {
                            var_22 = var_5;
                            var_23 = (signed char)99;
                            var_24 = var_9;
                            var_25 = ((/* implicit */signed char) min((var_25), (var_16)));
                            arr_43 [i_9] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                        }
                        arr_44 [i_9] [i_9] [(signed char)6] [i_10] [i_9] [i_8] = ((signed char) ((((/* implicit */_Bool) arr_36 [i_7] [i_9] [i_7])) ? (((/* implicit */int) min((var_5), (arr_35 [i_7] [i_8] [i_9])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        arr_48 [i_12] = var_8;
        arr_49 [(signed char)20] [i_12] = (signed char)-120;
        arr_50 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-46)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (28))) - (10)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)127))))) ? (min((((/* implicit */int) (signed char)45)), ((~(((/* implicit */int) (signed char)12)))))) : ((+(((/* implicit */int) arr_45 [(signed char)4]))))));
        arr_51 [i_12] = ((signed char) arr_46 [i_12] [i_12]);
    }
    for (signed char i_13 = 3; i_13 < 12; i_13 += 1) 
    {
        arr_54 [i_13] [i_13] |= ((/* implicit */signed char) max(((~(((/* implicit */int) arr_52 [i_13 + 4])))), (((/* implicit */int) arr_52 [i_13 - 3]))));
        var_26 *= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)83))));
        var_27 ^= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)125))));
        /* LoopSeq 2 */
        for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_3))) ? ((~(((/* implicit */int) arr_45 [i_13 - 2])))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_56 [i_13] [i_13 - 1])) && (((/* implicit */_Bool) arr_56 [i_14] [(signed char)9])))))))));
            var_29 = (signed char)-82;
            /* LoopSeq 2 */
            for (signed char i_15 = 3; i_15 < 13; i_15 += 3) 
            {
                arr_61 [i_15] [i_13] [(signed char)4] [i_13] = ((signed char) var_2);
                arr_62 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)127), ((signed char)60)))) ? ((+(((/* implicit */int) arr_53 [i_13 - 3])))) : (((/* implicit */int) min((arr_47 [i_15]), (var_18))))));
            }
            for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                var_30 = ((signed char) ((signed char) arr_45 [i_13 + 2]));
                /* LoopSeq 3 */
                for (signed char i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) max(((signed char)57), ((signed char)53)))) - (((/* implicit */int) ((signed char) var_5))))) : (((/* implicit */int) var_16))));
                    arr_69 [i_13] [i_14] [i_14] [i_16] [i_14] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) var_14)) / (((/* implicit */int) ((signed char) min((arr_55 [i_13] [i_16] [(signed char)15]), (var_17)))))));
                }
                for (signed char i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    arr_72 [i_18] [i_16] [i_14] [i_13] = ((signed char) ((signed char) arr_45 [i_13 + 1]));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) ((signed char) arr_66 [i_13 + 2] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13] [(signed char)8]))) : (((((/* implicit */_Bool) ((signed char) arr_47 [i_18]))) ? (((/* implicit */int) arr_56 [i_13 + 1] [i_13 + 3])) : (((/* implicit */int) ((signed char) var_18)))))));
                }
                for (signed char i_19 = 0; i_19 < 16; i_19 += 1) 
                {
                    arr_77 [(signed char)9] [i_13] [i_19] [i_16] [i_13] [i_19] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_4))), ((+(((/* implicit */int) (signed char)13))))));
                    arr_78 [i_16] [i_16] &= max((((signed char) max((var_16), ((signed char)44)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_70 [i_13 - 2] [i_13 - 2] [i_13]))))));
                    arr_79 [i_19] [i_14] [(signed char)4] = ((/* implicit */signed char) ((min((((/* implicit */int) var_10)), ((~(((/* implicit */int) arr_74 [i_13] [i_19] [i_19] [i_19])))))) ^ ((~(((((/* implicit */_Bool) arr_46 [(signed char)11] [(signed char)11])) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)105))))))));
                    var_33 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) arr_46 [(signed char)0] [i_14])) : (((/* implicit */int) (signed char)105))))) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) arr_64 [i_14] [i_14] [i_13 + 3])))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))));
                }
                var_34 ^= min((((signed char) ((signed char) (signed char)117))), (((signed char) arr_74 [i_13 - 1] [i_14] [i_13 - 1] [i_13 + 1])));
            }
            var_35 += ((signed char) (+(((/* implicit */int) (signed char)22))));
        }
        for (signed char i_20 = 0; i_20 < 16; i_20 += 1) 
        {
            arr_83 [i_13 - 1] [i_20] [i_20] = min((((signed char) arr_53 [i_13 - 1])), (((signed char) arr_63 [i_13 - 2] [i_13 - 3] [(signed char)5] [i_20])));
            var_36 = ((/* implicit */signed char) min((var_36), (arr_81 [(signed char)12])));
        }
        arr_84 [i_13] = max((((signed char) arr_71 [i_13 + 1] [i_13 - 1] [(signed char)1])), (((signed char) (!(((/* implicit */_Bool) var_5))))));
    }
    var_37 = ((signed char) ((((/* implicit */int) max(((signed char)125), ((signed char)28)))) / (((((/* implicit */int) var_9)) * (((/* implicit */int) (signed char)-126))))));
    /* LoopSeq 3 */
    for (signed char i_21 = 0; i_21 < 23; i_21 += 4) 
    {
        var_38 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_9)))) * (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_85 [i_21] [i_21])))))))) ? (((((/* implicit */int) var_10)) & ((~(((/* implicit */int) (signed char)-46)))))) : (((((/* implicit */_Bool) ((signed char) var_16))) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_86 [i_21])))) : ((~(((/* implicit */int) var_15))))))));
        var_39 ^= (signed char)122;
    }
    for (signed char i_22 = 0; i_22 < 14; i_22 += 3) 
    {
        arr_91 [i_22] [i_22] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((var_5), ((signed char)111)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) arr_75 [(signed char)0] [i_22] [i_22] [i_22])))) : (((/* implicit */int) var_11)))), ((~(((/* implicit */int) arr_7 [i_22] [i_22] [i_22]))))));
        var_40 &= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_28 [i_22]))))));
    }
    for (signed char i_23 = 0; i_23 < 11; i_23 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_24 = 4; i_24 < 10; i_24 += 3) 
        {
            for (signed char i_25 = 3; i_25 < 9; i_25 += 3) 
            {
                {
                    arr_99 [(signed char)10] [(signed char)10] |= ((signed char) min(((signed char)-109), ((signed char)51)));
                    var_41 ^= arr_6 [i_25 + 2] [i_24 + 1] [i_23] [i_23];
                }
            } 
        } 
        arr_100 [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [(signed char)8])) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_23] [i_23] [i_23])) && (((/* implicit */_Bool) var_2)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)-126))) ? ((~(((/* implicit */int) arr_88 [(signed char)0])))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))))));
    }
}
