/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42013
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
    var_20 = (signed char)2;
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_21 = max((min(((signed char)41), ((signed char)17))), ((signed char)-42));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            var_22 -= ((signed char) arr_1 [i_0] [i_0 - 2]);
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_3 [i_0] [i_1]))) - (((/* implicit */int) arr_1 [(signed char)8] [i_1]))));
        }
        for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_24 = ((signed char) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                var_25 = var_13;
                var_26 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) var_13))))))));
                var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)57)) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) ((signed char) (signed char)10))) : (((/* implicit */int) (((-(((/* implicit */int) arr_3 [i_0 - 2] [i_2])))) >= ((-(((/* implicit */int) var_9)))))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) max((var_14), (min((var_15), (var_3)))))) * (((((/* implicit */int) (signed char)84)) & (((/* implicit */int) (signed char)-83))))));
            }
            for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((signed char) (signed char)7)))) ? (((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_2 - 1])) >= (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_4] [i_2]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_2 [i_2])))))))));
                var_30 = min((((/* implicit */signed char) ((((/* implicit */int) min((var_4), (arr_7 [(signed char)6] [i_0] [(signed char)3] [i_2])))) < ((-(((/* implicit */int) arr_1 [i_4] [i_2]))))))), (var_18));
                var_31 = ((/* implicit */signed char) min((((/* implicit */int) var_14)), ((~(((/* implicit */int) max(((signed char)122), ((signed char)-125))))))));
            }
        }
        var_32 &= ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [(signed char)0])) : (((/* implicit */int) var_6)))) ^ (((/* implicit */int) (signed char)-3)))), (((/* implicit */int) ((signed char) var_14)))));
        var_33 = (signed char)84;
    }
    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_34 = ((/* implicit */signed char) min((var_34), ((signed char)-41)));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            var_35 = ((/* implicit */signed char) max((var_35), (((signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)83))))))));
            var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((arr_6 [i_6] [i_6] [i_5]), (var_17))), (var_0))))));
        }
    }
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 18; i_7 += 1) 
    {
        var_37 = (i_7 % 2 == zero) ? (((/* implicit */signed char) ((((((((/* implicit */int) (signed char)54)) - (((/* implicit */int) arr_14 [i_7])))) + (2147483647))) >> (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_16)))) - (22)))))) : (((/* implicit */signed char) ((((((((((/* implicit */int) (signed char)54)) - (((/* implicit */int) arr_14 [i_7])))) - (2147483647))) + (2147483647))) >> (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_16)))) - (22))))));
        /* LoopNest 3 */
        for (signed char i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    {
                        var_38 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)112)))) && (((/* implicit */_Bool) (signed char)75))));
                        var_39 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                        var_40 ^= var_19;
                    }
                } 
            } 
        } 
    }
    var_41 = ((/* implicit */signed char) min((var_41), (((signed char) (~((~(((/* implicit */int) (signed char)119)))))))));
}
