/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192207
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_13 = var_4;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((arr_1 [(_Bool)1]) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */int) arr_3 [i_1] [(_Bool)1])) >> (((arr_3 [i_1] [i_0]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */int) arr_2 [(_Bool)1])) ^ (((/* implicit */int) (_Bool)1))))))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        }
        var_16 = ((/* implicit */_Bool) min((var_16), (min((min(((_Bool)1), (min((arr_0 [(_Bool)0]), (var_7))))), (((((/* implicit */int) var_1)) != (((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_7 [i_2] &= (!(((_Bool) arr_5 [i_2 + 1] [i_2 + 1])));
        var_17 *= ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1])), ((((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1]))))))) && (((/* implicit */_Bool) max((((arr_6 [i_2 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) var_3)))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (arr_9 [i_3])));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = (_Bool)1;
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        var_21 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1])) * (((/* implicit */int) var_1))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) arr_15 [i_3] [i_3] [i_3] [i_4]))));
                        arr_20 [i_3] [i_3] [i_5] [i_3] [i_4 - 1] [i_3] = arr_5 [i_3] [i_4];
                        var_23 = ((/* implicit */_Bool) min((var_23), (arr_19 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [(_Bool)1] [(_Bool)1])));
                        var_24 -= ((((arr_8 [i_5]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [i_3] [i_3] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1])))) > ((~(((/* implicit */int) var_11)))));
                    }
                    var_25 &= ((/* implicit */_Bool) ((arr_1 [i_4 - 1]) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_26 *= arr_13 [i_3];
                                arr_27 [i_9] [i_9] [i_9] [i_8] [(_Bool)1] [i_4] [i_3] = (_Bool)1;
                                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((arr_15 [(_Bool)1] [i_5] [i_8] [i_9]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_4 - 1] [i_8])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_28 [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3]))));
        /* LoopSeq 4 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_28 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) | ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [(_Bool)1] [i_3] [(_Bool)1]))))));
            var_29 = (_Bool)1;
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_30 ^= arr_17 [i_3];
                        arr_39 [i_12] [i_11] [i_10] [i_11] [i_3] = ((_Bool) (_Bool)1);
                        var_31 &= ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) arr_5 [i_3] [i_11])) : (((/* implicit */int) (_Bool)0))));
                        var_32 -= ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_40 [i_3] [i_10] = (_Bool)1;
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_43 [i_13] [i_13] = ((/* implicit */_Bool) ((arr_10 [i_3] [i_13]) ? (((/* implicit */int) arr_29 [i_3] [i_13])) : (((/* implicit */int) arr_30 [i_3]))));
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((arr_6 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_41 [i_13] [i_13] [i_3])))) : ((~(((/* implicit */int) (_Bool)1)))))))));
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            arr_48 [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) * (((/* implicit */int) ((_Bool) arr_16 [i_3])))));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % ((~(((/* implicit */int) (_Bool)1))))));
            var_35 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_14]))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_15] [i_3] [i_3])))))));
            var_37 *= ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) arr_30 [i_15])) : (((arr_22 [i_3] [i_15] [i_15]) ? (((/* implicit */int) arr_23 [i_3] [i_15] [i_15] [i_15] [i_3])) : (((/* implicit */int) arr_23 [i_3] [i_15] [i_15] [i_3] [i_15]))))));
            arr_52 [i_3] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_3] [i_15] [i_3] [i_3]) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) (_Bool)1))));
        }
    }
}
