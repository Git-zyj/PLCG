/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45887
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        {
                            arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4 + 1])) + (((/* implicit */int) (unsigned char)29))));
                            arr_13 [i_2] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_2])) && (((((/* implicit */_Bool) (signed char)-77)) || (var_1)))));
                        }
                    } 
                } 
            } 
            var_14 *= ((/* implicit */unsigned char) (signed char)-77);
            arr_15 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)78)) > (((/* implicit */int) arr_7 [(unsigned char)4] [i_1] [i_1] [(unsigned char)4])))) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)113)))))));
        }
        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            var_15 -= ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)-18)))) + (((/* implicit */int) ((signed char) var_4)))));
                            arr_27 [i_0] [i_0] [i_0] [(signed char)0] [(signed char)0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)247)) || (((/* implicit */_Bool) (signed char)-91))));
                            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_8])) ? ((-(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (signed char)-74))));
                            arr_28 [i_7] [i_7] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!((_Bool)1))) && (((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_6 - 1]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                arr_31 [(signed char)5] [i_5] [i_9] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_0] [i_5])) == (((/* implicit */int) arr_11 [i_0] [i_9]))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_24 [i_0] [i_5] [i_0] [i_0]))));
                arr_32 [i_0] [i_5] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_9]))));
                arr_33 [i_0] [i_5] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)101)) ^ (((/* implicit */int) (signed char)-8))));
                arr_34 [i_0] &= (signed char)-2;
            }
            for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                arr_39 [i_10] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_5] [i_10])) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) arr_35 [i_0] [(signed char)13] [i_10]))));
                arr_40 [i_0] [(signed char)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((arr_1 [i_0]) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (signed char)-91))))));
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
            {
                arr_44 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-15)) + (((/* implicit */int) (signed char)58))))) ? (((((/* implicit */int) arr_9 [i_5] [(unsigned char)4] [(unsigned char)4])) ^ (((/* implicit */int) (unsigned char)29)))) : (((/* implicit */int) ((signed char) (signed char)127)))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_0])) < (((/* implicit */int) (_Bool)1)))))));
                arr_45 [i_11] = (signed char)3;
            }
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
            {
                arr_49 [i_0] [i_5] [i_12] = ((/* implicit */_Bool) arr_3 [i_12]);
                arr_50 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_0] [i_5] [i_5] [i_12])))) ^ (((/* implicit */int) arr_0 [i_12 + 1]))));
                var_19 += arr_29 [i_0] [i_5] [i_12 + 1];
            }
        }
        for (signed char i_13 = 1; i_13 < 16; i_13 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        {
                            arr_61 [(unsigned char)14] [i_15] [i_0] = (!(((/* implicit */_Bool) var_13)));
                            arr_62 [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13] [(_Bool)1] = ((/* implicit */unsigned char) (signed char)114);
                            arr_63 [i_13] [i_14] [i_16] = ((/* implicit */unsigned char) arr_23 [i_16] [i_13] [i_14] [i_15]);
                        }
                    } 
                } 
            } 
            arr_64 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) arr_2 [i_13 - 1] [i_13 + 2]))));
            var_20 += arr_5 [i_0] [i_13] [i_0];
        }
        var_21 = ((/* implicit */_Bool) arr_16 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_17 = 1; i_17 < 15; i_17 += 4) 
        {
            for (signed char i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_74 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_0])) || (((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0])))))));
                        arr_75 [i_0] [i_17] [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_17 + 2] [i_17 + 3])) != (((/* implicit */int) arr_20 [i_17] [i_17] [i_17 + 3] [i_17 + 2]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_20 = 1; i_20 < 14; i_20 += 4) 
        {
            for (signed char i_21 = 1; i_21 < 16; i_21 += 4) 
            {
                {
                    arr_81 [i_21 + 2] [i_21 + 2] [i_20] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_21 + 1] [i_0])) ? (((/* implicit */int) arr_80 [i_0] [i_21 + 1] [i_21 - 1])) : (((/* implicit */int) (signed char)-119))));
                    arr_82 [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_21 + 1] [i_20 + 2])) ? (((/* implicit */int) arr_57 [i_20 + 3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_2)))))));
                    arr_83 [i_0] [i_20 + 4] [i_21] [i_21] = ((/* implicit */_Bool) ((signed char) (signed char)87));
                    arr_84 [i_0] [i_0] [i_21] [i_0] = arr_8 [i_0] [i_0] [i_21] [i_21];
                }
            } 
        } 
    }
    var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (signed char)-41))))) == (((/* implicit */int) var_11))))) % (((/* implicit */int) ((signed char) ((signed char) var_13))))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) % (((/* implicit */int) ((signed char) (unsigned char)17)))));
}
