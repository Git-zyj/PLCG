/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49176
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
    var_15 = var_6;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-53)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_16 = ((signed char) arr_2 [i_0]);
        var_17 = ((/* implicit */signed char) max((var_17), (((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10)))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            var_19 |= ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0])) * (((/* implicit */int) arr_8 [i_0]))));
            var_20 = (signed char)-107;
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_22 = arr_0 [(signed char)12];
            var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_2 [(signed char)3])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))));
        }
        for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_24 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_10 [i_0] [i_0]))))));
            var_25 = (signed char)72;
            var_26 = ((signed char) arr_6 [i_0] [i_0]);
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_3])) || (((/* implicit */_Bool) arr_6 [i_0] [i_3]))));
        }
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_28 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_13 [i_4])))) << (((((/* implicit */int) arr_14 [i_4])) + (107)))));
        var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)76))));
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [(signed char)15])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_13 [i_4]))));
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (~(min((((/* implicit */int) min((arr_17 [i_5]), (var_1)))), ((~(((/* implicit */int) (signed char)78)))))))))));
        var_32 = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_5]))));
    }
    var_33 ^= (signed char)75;
}
