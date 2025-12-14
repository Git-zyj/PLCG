/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216642
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
    var_12 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 = arr_4 [i_2];
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (signed char)10)) : ((+(((/* implicit */int) var_9))))))) ? (((/* implicit */int) (signed char)28)) : ((~(((/* implicit */int) (signed char)-32))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            var_14 += var_5;
                            var_15 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)43))) * (((/* implicit */int) var_3))));
                        }
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            var_17 = (signed char)110;
                            arr_23 [(signed char)15] [i_1] [i_1] [i_1] [(signed char)16] [i_5] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)31)))), (((((/* implicit */int) var_8)) % (((/* implicit */int) max((var_5), (arr_13 [i_0] [i_0 + 2]))))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
                        {
                            var_18 = var_3;
                            var_19 = var_1;
                        }
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)63), ((signed char)52)))) ? ((~(((/* implicit */int) ((((/* implicit */int) arr_25 [i_5])) < (((/* implicit */int) (signed char)64))))))) : ((+(((/* implicit */int) max((arr_22 [(signed char)3] [i_1] [i_1] [i_1] [i_1]), (var_7))))))));
                            arr_28 [i_5] [i_5] [i_5] [i_5] [i_0 + 2] = var_8;
                            arr_29 [i_0] [i_5] [i_1] [(signed char)15] [(signed char)15] [i_5] [(signed char)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)116), ((signed char)30)))) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (signed char)-31))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_10 = 2; i_10 < 18; i_10 += 2) 
                        {
                            arr_32 [i_0 - 2] [i_1] [i_2] [i_5] [i_10] [i_10] [i_5] = var_0;
                            arr_33 [i_10] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_10 - 2] [i_10 + 1] [i_10 - 1] [i_10 - 2] [i_10 + 1])) ? (((/* implicit */int) min((var_2), ((signed char)-104)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_10 - 1] [(signed char)2] [i_10 + 1] [i_10 - 2] [i_10 + 1])) : (((/* implicit */int) var_9))))));
                            arr_34 [i_2] [i_2] [i_5] [i_5] = var_0;
                            var_21 ^= max((var_3), (max(((signed char)-34), (var_6))));
                        }
                        for (signed char i_11 = 2; i_11 < 17; i_11 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)13] [i_0])) : (((/* implicit */int) var_9))));
                            arr_37 [i_5] [(signed char)2] [i_5] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) var_8))))), (((/* implicit */int) arr_14 [i_0] [i_5] [i_0] [i_5]))));
                        }
                        for (signed char i_12 = 2; i_12 < 17; i_12 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)103))));
                            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                        }
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)33)))) & ((~(((/* implicit */int) (signed char)-34))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))));
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
                    {
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0 + 4] [i_0]))))) ? (((((/* implicit */int) arr_38 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0])) | (((/* implicit */int) var_9)))) : (((/* implicit */int) max(((signed char)31), ((signed char)-126))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) ((signed char) (signed char)-123))) : (((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0]))));
                        var_28 ^= var_9;
                    }
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) var_4)))) : ((+(((/* implicit */int) arr_48 [i_15] [i_15] [i_2] [i_0 + 1] [i_0 + 1]))))));
                                arr_51 [(signed char)0] [(signed char)9] [(signed char)0] [i_2] [i_2] [(signed char)0] [(signed char)9] = (signed char)-86;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
