/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204899
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-56)) - (((/* implicit */int) (signed char)102))));
        var_12 = (signed char)-103;
        arr_2 [i_0] = min((var_2), (min(((signed char)123), ((signed char)45))));
        var_13 -= var_1;
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_14 *= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
            var_15 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)126)))))));
            var_17 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)124))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_18 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_1 [i_2] [i_2])) + (2147483647))) >> (((((/* implicit */int) var_7)) - (20))))) >= (((/* implicit */int) arr_15 [i_0] [i_0] [i_5 + 2] [i_4] [i_5 + 1] [i_0] [i_4]))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [i_5 + 2])) : (((/* implicit */int) (signed char)108)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)55))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) && (((/* implicit */_Bool) (signed char)-26))))))))));
                arr_19 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] [i_3] [i_3]))));
            }
        }
    }
    var_20 ^= var_8;
    var_21 = ((/* implicit */signed char) min((var_21), (max((var_6), (max((var_4), (var_1)))))));
    /* LoopSeq 2 */
    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((signed char) var_0))) == (((/* implicit */int) max(((signed char)-71), (var_10))))))))))));
        arr_23 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)(-127 - 1)), ((signed char)15)))) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (signed char)-68))));
    }
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 20; i_7 += 2) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (var_9)));
        arr_28 [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_26 [i_7 + 3] [i_7 + 3]))));
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)120))));
    }
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)91)))), (((/* implicit */int) min((var_4), (arr_32 [i_8] [i_8]))))));
        arr_33 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)40)) >= (((/* implicit */int) (signed char)-114))));
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 15; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    var_26 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_39 [i_10])) >> ((((~(((/* implicit */int) var_0)))) + (40)))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)6)) && (((/* implicit */_Bool) (signed char)65))))))) : (((/* implicit */int) (signed char)3))));
                }
            } 
        } 
    }
}
