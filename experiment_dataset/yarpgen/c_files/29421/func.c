/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29421
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = (unsigned char)124;
        arr_4 [i_0] = ((/* implicit */short) ((unsigned char) arr_0 [i_0]));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-26892)) ? (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((arr_1 [i_1]), (arr_2 [i_1])))) : (((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) arr_2 [i_1]))))));
        var_19 -= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)157)) >= (((/* implicit */int) var_14))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
        {
            arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_7 [i_2]))));
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                var_20 = ((/* implicit */short) (unsigned char)239);
                var_21 = ((short) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_1]))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    arr_18 [(short)9] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_7 [i_1]);
                    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_4])) <= (((/* implicit */int) (short)32738))))) <= (((/* implicit */int) (unsigned char)252))));
                    var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)102)) ? (((/* implicit */int) (short)-111)) : (((/* implicit */int) (unsigned char)1))))));
                    arr_19 [i_4] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_11 [i_3] [i_3] [i_3 - 2] [i_3])) + (2147483647))) >> (((/* implicit */int) var_10))));
                }
            }
        }
        for (short i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_1] [i_5])) ? (((/* implicit */int) min((arr_23 [i_1] [i_1]), (arr_6 [i_1] [i_5])))) : (((((/* implicit */int) arr_23 [i_1] [i_5])) >> (((((/* implicit */int) var_8)) - (168)))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), ((unsigned char)242)));
        }
        for (short i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
        {
            arr_27 [(short)12] [i_6] |= ((/* implicit */unsigned char) var_11);
            var_26 = ((/* implicit */short) (-(((/* implicit */int) min((var_5), (var_5))))));
        }
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            {
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) (~(((/* implicit */int) var_14)))))))))));
                var_28 ^= ((/* implicit */short) (unsigned char)118);
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_8]))))) ? (((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) arr_28 [(unsigned char)17]))))) : (((/* implicit */int) arr_31 [i_8])))) : ((-((-(((/* implicit */int) var_13))))))));
            }
        } 
    } 
}
