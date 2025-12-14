/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224457
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */short) arr_10 [i_2] [i_4]);
                                var_15 &= ((/* implicit */short) ((unsigned int) ((var_12) > (arr_1 [i_0]))));
                                arr_16 [i_0] [i_1 - 2] [(short)20] [i_1 - 2] [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) & (min((var_12), (((((/* implicit */_Bool) arr_15 [1U] [i_1] [12U] [12U] [i_1] [i_1])) ? (4252809686U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_5 = 3; i_5 < 20; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            var_16 = arr_12 [i_5] [i_5] [17U] [i_5] [17U];
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_9))) >= (arr_13 [i_6 + 2] [18U] [18U] [i_1 - 1]))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                        {
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (3097525419U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (995124361U))), (((arr_12 [i_8] [i_6 + 1] [i_8] [i_6] [i_8]) ^ (352821882U))))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (arr_20 [(short)5] [i_0] [i_5] [i_5] [i_0] [i_0]) : (arr_4 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5612))) : (var_8))))))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                        {
                            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 657575224U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1 - 3]))) : (var_11)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : ((+(var_12)))));
                            var_21 = ((/* implicit */short) ((arr_13 [i_6] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-3206)))));
                        }
                        var_22 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_26 [i_1 - 1] [6U] [i_1 - 3] [i_1 - 3] [i_5 + 2])))), (((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) ((var_11) <= (var_5))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 1; i_10 < 20; i_10 += 4) 
                        {
                            var_23 += ((/* implicit */short) (~(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (var_5)))));
                            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (var_3)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) - (var_11))) : (var_8))) ^ (((((/* implicit */_Bool) 1559026583U)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_1 + 1] [i_5 + 1] [i_6] [i_0]))) : (1559026598U))) : ((-(var_12)))))));
                            var_25 = ((((/* implicit */_Bool) 449441768U)) ? (min((((var_4) + (0U))), (((var_3) - (var_8))))) : (((((/* implicit */_Bool) (short)9770)) ? (var_11) : (var_1))));
                            var_26 = ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1 - 2] [i_5 + 1] [i_5 + 1]))) * (3942145416U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_1 [i_5 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                        }
                    }
                    for (unsigned int i_11 = 3; i_11 < 21; i_11 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)2048)) + (((/* implicit */int) (short)3205)))) << (((arr_5 [20U]) - (631751797U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [9U] [i_1] [i_1] [i_1] [i_1]))) : (var_5)));
                            arr_36 [i_12] [i_0] [i_5 - 3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(arr_17 [i_12])))))) ? (((((/* implicit */_Bool) arr_31 [i_1 + 1] [i_1 - 2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20129))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (var_10)))))));
                            arr_37 [i_0] [i_0] [i_5] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) ? (772324248U) : ((~(arr_25 [i_1 - 1] [i_5 - 3] [i_0] [i_5 - 3] [i_12])))));
                        }
                        arr_38 [i_0] [i_11] [1U] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((2478548971U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)10575)))))) >= (((/* implicit */int) max((arr_0 [i_1 + 1] [i_0]), (var_2))))));
                    }
                    for (unsigned int i_13 = 1; i_13 < 20; i_13 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_5))));
                    }
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (~(((/* implicit */int) var_6)))))));
                    var_31 = ((/* implicit */short) var_4);
                }
                for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    arr_44 [i_14] [i_0] [i_0] = (short)-6439;
                    var_32 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_14] [i_14])) || (((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0] [i_0])))))));
                }
                var_33 = ((/* implicit */unsigned int) max((var_33), ((+(arr_39 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))));
                var_34 = arr_9 [i_0] [i_0] [5U] [i_0];
            }
        } 
    } 
    var_35 ^= var_13;
    var_36 = ((/* implicit */short) (-(var_5)));
}
