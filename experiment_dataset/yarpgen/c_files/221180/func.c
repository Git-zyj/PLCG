/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221180
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
    var_18 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 ^= ((signed char) var_5);
                    arr_11 [i_1] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */signed char) (~(((/* implicit */int) (short)14300))));
                                var_21 = ((short) ((unsigned int) arr_15 [i_0] [i_2] [i_0] [7U] [i_4] [7U]));
                                var_22 = ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (short)-14301)), (37660722U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((short) 4257306573U))) - (((/* implicit */int) max((var_4), (arr_6 [7U] [7U] [7U]))))))) : (arr_1 [i_0]));
                                var_23 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) ? (arr_17 [i_0] [i_1] [i_1] [i_3]) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_7 [i_1] [i_1] [i_1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) > (3963890210U))))) / (37660725U)))));
                                arr_19 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (short)32764))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_5 [i_1] [i_0]))) ? (max((((/* implicit */unsigned int) arr_12 [i_0] [i_1])), (((4103001262U) & (467522473U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_17 [i_0] [i_1] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4257306589U)) ? (1101635090U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_7]))))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((37660722U), (((/* implicit */unsigned int) var_17)))))))));
                                arr_31 [i_5] [i_5] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-114)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_27 *= ((/* implicit */short) max((((/* implicit */int) arr_23 [(signed char)4] [i_6])), ((+(((/* implicit */int) arr_12 [i_5] [i_10]))))));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (var_11))) > (arr_27 [i_10] [i_10]))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)14311)) ? (((/* implicit */int) arr_18 [15U] [i_6] [i_6] [i_10])) : (((/* implicit */int) (signed char)-123))))))) : (max((((arr_28 [2U] [i_6] [i_7] [i_5] [i_11] [(signed char)4] [i_6]) >> (0U))), (((/* implicit */unsigned int) ((4257306571U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))));
                                var_29 = ((/* implicit */unsigned int) max((((arr_22 [i_6] [i_10] [i_11]) >= (((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_27 [i_5] [i_6]))))), ((!(((/* implicit */_Bool) arr_9 [i_10] [(signed char)9] [i_7] [i_10]))))));
                                var_30 = arr_8 [i_7];
                                var_31 = ((/* implicit */signed char) max((var_31), (arr_34 [i_10] [i_10] [i_10] [i_5])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_13] [i_12] [i_6] [i_5])) << (((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))), (((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) - (788602683U)))));
                                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_7] [i_13] [i_7] [i_12] [i_7]))))) ? (((unsigned int) arr_32 [i_7] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_45 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((4294967289U) / (arr_17 [i_5] [i_5] [i_5] [12U]))))) ? (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : ((+(max((3499829003U), (3450118226U)))))));
    }
    var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
}
