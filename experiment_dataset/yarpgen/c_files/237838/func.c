/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237838
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
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_13)))))) & (((((((/* implicit */int) var_13)) + (2147483647))) >> ((((+(((/* implicit */int) var_8)))) + (91)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 |= ((/* implicit */signed char) ((((/* implicit */int) var_14)) < (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_0 [(signed char)12])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (arr_0 [i_0]))))))));
        var_17 = ((/* implicit */signed char) ((unsigned char) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))))));
    }
    for (signed char i_1 = 3; i_1 < 15; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = min((((/* implicit */unsigned char) ((signed char) (signed char)(-127 - 1)))), (arr_2 [i_1 - 2] [i_1 - 3]));
        arr_6 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_3 [i_1]))))) && (((/* implicit */_Bool) var_12)))))));
    }
    for (signed char i_2 = 3; i_2 < 15; i_2 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((arr_2 [i_2] [(signed char)6]), (arr_2 [i_2] [i_2])))) ? (((/* implicit */int) arr_7 [i_2 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
        var_19 += ((/* implicit */signed char) ((unsigned char) (+(((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_20 = min(((signed char)101), (min((((signed char) var_5)), (max((var_1), (var_8))))));
                                arr_21 [i_2] [i_2] [i_3 - 1] [i_5] [i_5] [(signed char)9] = ((/* implicit */unsigned char) var_14);
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)180)) != (((/* implicit */int) var_13))))) >> (((((/* implicit */int) ((unsigned char) (signed char)-1))) - (249))))) <= (((((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])) * (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)98))))))));
                }
            } 
        } 
        arr_23 [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)91)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_2)))))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    arr_29 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), (((((/* implicit */int) arr_20 [i_7] [i_7])) % (((((/* implicit */_Bool) arr_4 [(signed char)4] [(signed char)4])) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_27 [(unsigned char)7] [i_7] [i_7] [i_8]))))))));
                    var_21 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) ((unsigned char) arr_3 [i_8])))));
                }
            } 
        } 
    }
    for (signed char i_9 = 3; i_9 < 15; i_9 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            arr_35 [i_10] = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
            arr_36 [i_9] [i_9] [i_10] = ((/* implicit */signed char) arr_28 [i_10] [i_10] [i_10]);
            arr_37 [i_9] [i_10] [i_10] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)117))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-8)) < (((/* implicit */int) arr_3 [i_10]))))) : ((+(((/* implicit */int) arr_13 [i_9] [i_9] [i_9]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_11 = 3; i_11 < 15; i_11 += 3) 
            {
                arr_41 [i_9 - 3] [(signed char)4] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_9 - 3] [i_9] [i_9]))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_11 - 2] [i_9 - 3] [(unsigned char)1] [i_11 - 2])) != (((/* implicit */int) (signed char)119))));
            }
            arr_42 [i_10] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_9 + 1])) ? (((((/* implicit */_Bool) arr_19 [i_9] [i_9 + 1] [i_9 + 1] [i_9])) ? (((/* implicit */int) arr_19 [i_9] [i_9 + 1] [i_9 - 2] [i_9])) : (((/* implicit */int) arr_24 [i_9 - 3])))) : (((/* implicit */int) min(((signed char)-72), (arr_19 [i_9] [i_9 - 3] [i_9 - 1] [(signed char)2]))))));
        }
        for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            arr_45 [i_12] [(signed char)0] [i_9] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_8))))));
            var_23 -= (signed char)56;
            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_16 [i_9 - 2] [i_9] [(signed char)14] [i_9 - 2])))));
        }
        for (unsigned char i_13 = 1; i_13 < 15; i_13 += 1) 
        {
            var_25 -= ((/* implicit */unsigned char) ((max((((/* implicit */int) ((((/* implicit */int) (signed char)37)) != (((/* implicit */int) (unsigned char)212))))), ((+(((/* implicit */int) (unsigned char)134)))))) > (((/* implicit */int) max((arr_3 [i_9 + 1]), (arr_13 [i_9 - 1] [(signed char)5] [i_9 - 1]))))));
            arr_49 [i_9] [i_13] [i_13] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-50)) ? (((((/* implicit */int) arr_38 [i_9] [i_9] [i_13 - 1])) * (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (signed char)-84)))))), (min((((/* implicit */int) (signed char)-1)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (signed char)124))))))));
        }
        var_26 ^= ((unsigned char) ((((/* implicit */int) arr_44 [i_9 - 1] [i_9 - 1] [(signed char)14])) & (((/* implicit */int) (unsigned char)113))));
        var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-126)) / (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((signed char) ((signed char) var_2)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) > (((((/* implicit */int) (unsigned char)99)) | (((/* implicit */int) (signed char)-107)))))))));
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)95)) != (((/* implicit */int) var_0))))) : (((/* implicit */int) (signed char)22)))))))));
    }
}
