/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241506
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [(signed char)1] = ((signed char) min((arr_1 [(signed char)9] [i_0]), (((signed char) arr_0 [(signed char)4]))));
        var_13 = ((/* implicit */signed char) (((~(((((/* implicit */int) var_6)) + (((/* implicit */int) arr_1 [i_0] [i_0])))))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [(signed char)5]))))) >> (((((/* implicit */int) arr_0 [i_0])) - (41)))))));
        var_14 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((((/* implicit */int) arr_0 [(signed char)1])) >> (((((/* implicit */int) var_1)) - (13))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_15 = var_0;
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (signed char i_3 = 3; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_12 [i_2] [i_2] [i_1] [i_2] [i_3] &= ((/* implicit */signed char) min((((/* implicit */int) (signed char)107)), ((~(((/* implicit */int) (signed char)78))))));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_0 [i_3 - 2]))))))));
                        var_17 = arr_4 [i_2] [i_2];
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_15 [(signed char)10] = (signed char)-94;
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    var_18 += (signed char)127;
                    var_19 = ((/* implicit */signed char) max((var_19), (max((var_9), (var_7)))));
                }
            } 
        } 
        var_20 = var_7;
    }
    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */signed char) (+((~(((/* implicit */int) var_3))))));
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)-7))))))));
    }
    for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        arr_31 [i_8] = ((/* implicit */signed char) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_8])) && (((/* implicit */_Bool) (signed char)112)))))))));
        arr_32 [i_8] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_2))))));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            var_22 = var_12;
            var_23 = var_9;
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_8] [(signed char)0])) == (((((((/* implicit */int) (signed char)26)) / (((/* implicit */int) (signed char)7)))) * ((+(((/* implicit */int) (signed char)-1))))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (signed char i_11 = 2; i_11 < 19; i_11 += 1) 
                {
                    {
                        arr_42 [(signed char)12] [i_8] [i_11] = ((signed char) ((((/* implicit */int) arr_38 [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11])) | (((/* implicit */int) var_9))));
                        var_25 = ((/* implicit */signed char) (+(((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_41 [i_11 + 2] [i_11 - 2] [i_11 + 2] [i_8] [i_11 - 1] [i_11 - 1]))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_12 = 1; i_12 < 19; i_12 += 2) 
        {
            var_26 = ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)25))))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (signed char)83))))) || (((/* implicit */_Bool) ((signed char) (signed char)16))))))));
            var_28 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) arr_35 [(signed char)19] [(signed char)19] [i_12 + 1]))))));
        }
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_34 [i_8] [(signed char)4])) : ((~(((/* implicit */int) arr_36 [i_8] [i_8] [(signed char)5]))))));
    }
    var_30 = ((/* implicit */signed char) ((((((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1)))) + (2147483647))) >> (((((/* implicit */int) var_2)) - (48))))) << (((((/* implicit */int) min(((signed char)-64), ((signed char)125)))) + (73)))));
}
