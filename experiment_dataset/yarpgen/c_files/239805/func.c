/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239805
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
    var_15 = var_4;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            arr_4 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1])) != (arr_0 [i_0] [i_0])))) : (((arr_1 [i_1 + 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))));
            var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (min((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_1] [i_0] [i_0]))) : (arr_3 [i_0] [(_Bool)1] [i_1])));
            var_17 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
        {
            arr_7 [7] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((((/* implicit */_Bool) 340715455)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (-1618420268)));
            arr_8 [i_0] = ((int) arr_1 [i_2 - 1]);
        }
        for (int i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
        {
            arr_12 [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
            var_18 = ((/* implicit */unsigned char) ((_Bool) ((arr_10 [i_3 + 4] [i_3 + 4]) ? (((/* implicit */int) arr_10 [i_3 + 2] [i_3])) : (arr_3 [i_3 + 2] [i_3 + 2] [i_3 - 1]))));
        }
        arr_13 [i_0] [i_0] = arr_0 [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_19 &= arr_14 [i_4];
        var_20 &= ((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4] [i_4]))))) : (arr_6 [i_4] [i_4]));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_6] = ((((arr_6 [i_6 - 1] [i_6 - 1]) < (((/* implicit */int) arr_10 [i_5] [i_6 - 1])))) ? (((/* implicit */int) arr_9 [i_5] [i_5])) : (((/* implicit */int) arr_20 [i_6])));
            var_21 = ((/* implicit */_Bool) arr_19 [i_6]);
            arr_22 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_17 [i_6])))) ? (arr_2 [i_5] [i_5] [i_5]) : (((((/* implicit */_Bool) arr_9 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_20 [i_6 - 1])) : (2041922156)))))) ? (((((/* implicit */_Bool) -1618420268)) ? (arr_6 [i_6 - 1] [i_6 - 1]) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_10 [i_5] [i_5])) << (((arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1]) - (1946349091))))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_25 [i_7 - 1] [i_5] = ((int) ((((/* implicit */_Bool) arr_23 [i_5] [(unsigned char)8] [(_Bool)1])) ? (arr_23 [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (arr_23 [i_7] [i_5] [i_5])));
            /* LoopSeq 4 */
            for (int i_8 = 1; i_8 < 16; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (int i_10 = 3; i_10 < 16; i_10 += 2) 
                    {
                        {
                            arr_34 [i_5] [i_5] [i_8] [i_5] = (unsigned char)252;
                            var_22 = ((((/* implicit */_Bool) (unsigned char)0)) ? ((((_Bool)1) ? (-1618420268) : (arr_11 [i_10 - 2] [i_9 + 1] [i_9]))) : (arr_23 [i_7] [i_7] [i_7]));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_5 [i_5]) / (((/* implicit */int) arr_27 [3] [3] [i_8])))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_26 [(unsigned char)4] [i_7] [i_8])) : (arr_5 [i_10 - 3])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            arr_41 [i_12] [i_11] [i_8] [i_8] [i_5] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (arr_27 [i_12] [i_8] [i_5])))) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */int) arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) / (arr_17 [i_5]))));
                            var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483641)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) : (-1962807479)))) ? (max((((/* implicit */int) (unsigned char)2)), (((((/* implicit */_Bool) 603978687)) ? (1962807479) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned char)249))));
                            var_25 &= ((((((((/* implicit */_Bool) 339279816)) ? (-490662722) : (((/* implicit */int) arr_30 [i_5] [i_7 - 1] [(_Bool)1] [i_11] [i_12] [i_7] [i_12])))) + (2147483647))) >> (((((/* implicit */_Bool) arr_35 [i_5] [i_7 - 1] [i_5] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                arr_42 [i_8] = min((((((/* implicit */_Bool) arr_11 [i_8 - 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (2147483641))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_8] [i_5] [i_5])) ? (arr_39 [i_8] [i_8 - 1] [i_7] [i_5] [i_5] [i_5]) : (arr_38 [(unsigned char)10] [i_7] [i_8] [i_7] [(unsigned char)6])))) ? (((/* implicit */int) arr_20 [i_8 + 1])) : (arr_6 [(unsigned char)23] [i_7]))));
            }
            for (int i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                var_26 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_45 [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_45 [i_7 - 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_45 [i_7 - 1] [i_7 - 1] [i_7 - 1])))) * (((/* implicit */int) arr_45 [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                var_27 = ((/* implicit */int) max((var_27), (min((((((int) arr_20 [i_5])) >> (((2147483628) - (2147483616))))), (((/* implicit */int) arr_26 [i_7 - 1] [i_7] [i_7]))))));
            }
            for (int i_14 = 1; i_14 < 16; i_14 += 4) 
            {
                var_28 *= ((/* implicit */_Bool) min((((arr_30 [i_14 - 1] [i_14] [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_7 - 1]) ? (arr_38 [i_14 - 1] [i_14 + 1] [0] [i_7] [i_7 - 1]) : (((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_7] [(_Bool)1])) ? (arr_37 [i_7 - 1] [i_7] [i_7] [i_7 - 1]) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [10] [i_7 - 1] [i_5])) ? (407423558) : (((/* implicit */int) arr_43 [i_14] [i_5] [i_5] [i_5]))))) ? (-763003684) : (((/* implicit */int) arr_16 [i_7 - 1]))))));
                var_29 -= ((/* implicit */_Bool) min((((arr_48 [i_7 - 1] [i_14 - 1] [(_Bool)1]) ? (arr_35 [i_5] [i_14 - 1] [i_7 - 1] [i_7]) : (((/* implicit */int) arr_36 [i_14 + 1] [6] [6] [0])))), (((/* implicit */int) min((arr_47 [i_14 + 1] [14] [(unsigned char)6] [i_14 - 1]), (arr_47 [i_14 - 1] [16] [i_14] [i_14 - 1]))))));
                arr_49 [i_5] [i_5] [i_14] = ((arr_30 [i_14] [i_7 - 1] [i_7 - 1] [i_5] [i_5] [i_5] [i_5]) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_11 [i_14 + 1] [i_14] [i_14]) : (((/* implicit */int) arr_32 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7])))) : (((int) ((arr_32 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_40 [i_5] [14] [i_5] [i_5] [i_5] [i_5])) : (arr_33 [i_14 - 1] [i_14 - 1] [i_14] [i_14] [12] [i_5] [i_5])))));
                var_30 = ((/* implicit */unsigned char) ((int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (_Bool)1)))));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                arr_54 [i_15] [i_7] [i_5] = ((/* implicit */int) ((arr_24 [i_7] [i_7 - 1] [i_7]) <= (((((/* implicit */_Bool) arr_47 [i_5] [i_15] [i_5] [i_5])) ? ((-2147483647 - 1)) : (arr_6 [i_15] [i_5])))));
                arr_55 [i_5] [i_5] &= arr_35 [i_5] [i_7] [i_15] [i_15];
            }
        }
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_10 [i_5] [i_5]) ? (((/* implicit */int) arr_10 [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) arr_10 [i_5] [i_16 - 1]))))) ? (((/* implicit */int) (_Bool)1)) : (-1962807462)));
            var_32 = max((arr_44 [i_16] [i_16 - 1] [i_16] [i_16]), (((int) ((((/* implicit */_Bool) arr_46 [i_16] [i_5] [i_5])) ? (arr_5 [(unsigned char)6]) : (-2147483641)))));
            var_33 = max((arr_0 [(_Bool)1] [i_16 - 1]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1962807479)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)49))))) ? (-1962807482) : (((/* implicit */int) arr_20 [0])))));
        }
        var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_43 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_43 [i_5] [i_5] [i_5] [i_5]))))) ? (((((/* implicit */_Bool) arr_37 [i_5] [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_37 [i_5] [i_5] [i_5] [i_5])) ? (-1321288456) : (arr_35 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */int) arr_47 [i_5] [10] [10] [14])))) : (arr_19 [(unsigned char)0]));
    }
}
