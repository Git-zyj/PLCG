/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225143
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = var_7;
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(_Bool)1]))));
            var_16 = ((_Bool) (_Bool)1);
            arr_5 [i_0] [i_1] [i_0] = ((_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_4 [i_0 - 1]))));
            var_17 = var_4;
        }
        var_18 = (!(var_10));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 += var_7;
            arr_8 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((arr_12 [i_0] [i_0 - 1] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_7))));
                arr_14 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 - 1]))));
                var_20 &= ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_2])) : (((/* implicit */int) arr_1 [i_0]))))));
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_19 [i_0] = var_11;
                var_21 ^= ((/* implicit */_Bool) (((_Bool)0) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) max((arr_15 [(_Bool)1] [i_0] [i_4 - 1]), ((_Bool)1)))) & (((/* implicit */int) (_Bool)0))))));
                arr_20 [(_Bool)1] [i_0] [i_4 - 1] [i_4] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */int) arr_3 [i_0] [i_4])) - (((/* implicit */int) arr_3 [i_0] [i_0]))))))) && (min(((_Bool)1), (min((var_7), (var_4))))));
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 -= (_Bool)0;
            arr_23 [i_0] = ((/* implicit */_Bool) ((arr_21 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_5]))));
            var_23 = (((~(((/* implicit */int) (!((_Bool)0)))))) == ((~(((/* implicit */int) (_Bool)1)))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) (!(arr_22 [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0 - 1])))))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_26 [i_0 - 1] [(_Bool)1] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0 - 1] [i_6] [i_6]))))) ? (((/* implicit */int) arr_24 [i_0 - 1] [(_Bool)1] [i_0 - 1])) : (((/* implicit */int) var_7))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_25 += ((/* implicit */_Bool) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                var_26 = (!(arr_12 [i_0 - 1] [i_7 + 1] [i_7] [(_Bool)1]));
                var_27 &= (_Bool)1;
                var_28 -= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_0)))) + (2147483647))) >> (((/* implicit */int) arr_30 [i_0 - 1] [i_0]))));
            var_30 = (!(((_Bool) (((_Bool)0) ? (((/* implicit */int) arr_18 [i_0] [i_8] [i_8])) : (((/* implicit */int) (_Bool)1))))));
            var_31 = ((_Bool) var_1);
        }
    }
    var_32 = var_9;
    var_33 = var_7;
}
