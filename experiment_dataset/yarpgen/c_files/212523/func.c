/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212523
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
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))))) + (2147483647))) << (((((((/* implicit */int) var_4)) + (126))) - (17)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((signed char) (+(((/* implicit */int) (signed char)86)))))));
                    var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) min(((signed char)86), ((signed char)127)))))))));
                    var_18 = ((/* implicit */signed char) max((var_18), ((signed char)-42)));
                    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-122)) || (((/* implicit */_Bool) (signed char)-17))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-52))))) ? ((-((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-52)))))));
        var_21 = ((/* implicit */signed char) (~(max((((((/* implicit */int) (signed char)42)) & (((/* implicit */int) (signed char)-127)))), ((~(((/* implicit */int) (signed char)17))))))));
        arr_8 [(signed char)4] = ((signed char) ((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0 - 1] [(signed char)4] [(signed char)4] [i_0 + 1])) - (58)))));
    }
    for (signed char i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_4 [i_3 - 3] [i_3 - 3] [i_3]))))));
        var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)0)))), (((/* implicit */int) arr_10 [i_3]))))) ? (min((((((/* implicit */int) var_13)) & (((/* implicit */int) (signed char)86)))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1))))))) : (((((/* implicit */_Bool) min((var_14), ((signed char)25)))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_13))))) : (((/* implicit */int) ((signed char) var_11)))))));
    }
    for (signed char i_4 = 3; i_4 < 10; i_4 += 2) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (min((((/* implicit */signed char) ((((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) (signed char)127)) - (127))))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)17))))))), (((signed char) ((((/* implicit */int) (signed char)-102)) ^ (((/* implicit */int) var_11)))))))));
        var_24 = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_4] [i_4 + 1] [i_4 + 1] [i_4])) < (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4 - 1])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [(signed char)7] [(signed char)6] [i_4] [i_4])) : (((/* implicit */int) arr_7 [(signed char)11] [(signed char)11] [i_4] [i_4 - 2])))) : (((((/* implicit */_Bool) arr_7 [(signed char)11] [i_4] [(signed char)11] [i_4])) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) arr_7 [i_4] [i_4 + 1] [i_4] [i_4]))))));
        /* LoopSeq 3 */
        for (signed char i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)42), ((signed char)59)))) || ((!(((/* implicit */_Bool) var_9))))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    var_27 = (signed char)-23;
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)91)) <= (((/* implicit */int) (signed char)-17))));
                }
                arr_23 [i_6] = (signed char)0;
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [(signed char)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_7] [i_6] [i_7]))))))))));
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (signed char)-1))))));
                    arr_27 [i_6] [i_4 - 2] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4 - 3])) ? (((/* implicit */int) arr_21 [i_4] [i_4 + 1] [i_4 + 1] [i_9])) : (((((/* implicit */int) arr_19 [i_6])) | (((/* implicit */int) (signed char)16))))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 4; i_10 < 10; i_10 += 3) 
                    {
                        arr_30 [i_6] [i_6] = ((signed char) arr_26 [i_4 + 1]);
                        arr_31 [i_10 - 2] [i_6] [i_7] [i_6] [i_6] [i_4 - 2] = arr_1 [i_4];
                    }
                    arr_32 [i_4 + 1] [(signed char)4] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_7))));
                }
                for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) (signed char)-60)) : (((((/* implicit */int) (signed char)16)) % (((/* implicit */int) var_5))))));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_4 - 3] [i_4])) : (((/* implicit */int) var_2))));
                }
                /* LoopNest 2 */
                for (signed char i_12 = 3; i_12 < 9; i_12 += 1) 
                {
                    for (signed char i_13 = 1; i_13 < 7; i_13 += 4) 
                    {
                        {
                            arr_43 [i_6] [i_6] [i_6] [i_4] [i_13] = var_14;
                            var_33 ^= ((signed char) arr_34 [i_13 - 1] [(signed char)5] [(signed char)10] [i_12 - 1]);
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) arr_21 [i_13] [(signed char)1] [i_13] [i_13 + 2]))));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_5))))));
            var_36 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_10))) + (2147483647))) << ((((~(((/* implicit */int) var_8)))) - (45)))));
        }
        for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            arr_46 [i_4 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (signed char)23))) ? (((/* implicit */int) ((signed char) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_12)))))) + (((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)3)) - (((/* implicit */int) var_0))))))));
            arr_47 [i_4] = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_4 - 2] [i_4] [i_14] [i_14])) || (((/* implicit */_Bool) var_5))))), ((signed char)(-127 - 1))))), ((~(((/* implicit */int) ((signed char) arr_5 [(signed char)4])))))));
            var_37 = ((/* implicit */signed char) max((var_37), (arr_25 [(signed char)6] [i_14] [i_14] [i_4 - 1])));
            arr_48 [i_4] [i_4] = ((/* implicit */signed char) (((~(((/* implicit */int) max((var_9), (arr_20 [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 3])))))) / (((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) ((signed char) (signed char)20))) - (20)))))));
        }
    }
}
