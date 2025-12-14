/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2144
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
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) max((min((var_3), (var_8))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_20 |= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 - 3])) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-5)))))));
        var_21 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 + 1])) >= (((/* implicit */int) arr_2 [i_0 + 1])))))));
        var_23 = ((/* implicit */signed char) max((var_23), (arr_1 [i_0 - 3])));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((((((/* implicit */int) arr_3 [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_5 [i_1])) - (54))))) : (((/* implicit */int) arr_5 [i_1]))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)119)) && (((/* implicit */_Bool) (signed char)38))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
            {
                var_26 ^= ((signed char) arr_10 [i_2] [i_3]);
                var_27 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)47)) < (((/* implicit */int) var_15))));
            }
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
            {
                var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_9 [i_1] [(signed char)0] [i_1] [i_2])) : (((/* implicit */int) arr_11 [i_4] [i_1]))))) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)110)))))));
                var_29 = arr_13 [i_1];
            }
            for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                arr_20 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_5])) ? (((((/* implicit */int) arr_13 [i_2])) * (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_12))))))) : (((/* implicit */int) ((signed char) arr_19 [i_5] [i_5] [i_5])))));
                var_30 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_2])) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) arr_13 [i_2])))))));
            }
            arr_21 [(signed char)4] [(signed char)6] [i_2] = arr_19 [i_1] [i_2] [i_2];
        }
        for (signed char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-62)) != (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6])) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)95)))))))))))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_32 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_7]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-121)) / (((/* implicit */int) arr_24 [i_1] [i_6] [i_7] [i_8]))))) ? (((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) arr_23 [i_1] [i_7] [(signed char)2])) : (((/* implicit */int) (signed char)13)))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_7])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_4 [i_1])))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_1] [i_6] [i_8])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)-74))))))));
                        arr_30 [i_1] [i_6] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_29 [i_7] [i_6] [i_7] [i_8] [i_7])) : ((~(((/* implicit */int) arr_16 [i_1] [i_1]))))))) ? (((((/* implicit */int) arr_25 [i_1] [i_6])) | (((/* implicit */int) arr_7 [i_7] [i_6])))) : (((((/* implicit */_Bool) max(((signed char)-91), (var_8)))) ? (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) arr_17 [i_7] [i_6])))) : ((~(((/* implicit */int) (signed char)125))))))));
                        arr_31 [i_7] |= arr_7 [i_1] [i_1];
                        var_33 = ((/* implicit */signed char) min((((/* implicit */int) arr_27 [i_1])), (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]))))));
                        var_34 &= min(((signed char)101), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_8])) != (((/* implicit */int) arr_6 [i_1]))))));
                    }
                } 
            } 
            arr_32 [i_1] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_1] [i_6])) ? ((-(((/* implicit */int) arr_11 [i_1] [i_6])))) : (((((/* implicit */int) arr_25 [i_1] [i_6])) - (((/* implicit */int) arr_25 [i_1] [i_6]))))));
        }
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
        {
            arr_36 [i_9] = ((/* implicit */signed char) ((min((((/* implicit */int) min((arr_16 [i_1] [i_1]), (arr_22 [i_9])))), (((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)117)))))) ^ (((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) arr_29 [i_1] [i_1] [i_9] [i_9] [i_9]))))));
            arr_37 [i_1] [i_9] [i_9] = ((signed char) ((((/* implicit */int) (signed char)18)) & (((/* implicit */int) (signed char)-27))));
            var_35 *= ((signed char) var_3);
        }
    }
    for (signed char i_10 = 1; i_10 < 21; i_10 += 2) 
    {
        arr_40 [i_10] = ((/* implicit */signed char) min(((-(((/* implicit */int) max((arr_38 [i_10]), (arr_38 [i_10])))))), (((((/* implicit */_Bool) arr_39 [i_10])) ? ((-(((/* implicit */int) arr_39 [i_10])))) : (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) arr_38 [i_10])) : (((/* implicit */int) (signed char)-12))))))));
        arr_41 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_38 [i_10 + 1]))))) ? ((-(((/* implicit */int) arr_38 [i_10 - 1])))) : (((/* implicit */int) min((arr_39 [i_10]), ((signed char)-25))))));
        var_36 = (signed char)-45;
    }
}
