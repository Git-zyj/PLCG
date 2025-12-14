/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217283
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_2))));
            var_13 += ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))));
        }
        arr_8 [i_0] = arr_6 [i_0] [i_0];
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_3] [i_0] [i_0] |= ((/* implicit */unsigned int) arr_14 [i_0] [(signed char)7] [i_3] [i_3]);
                                arr_22 [i_4] [i_4] [i_4] [i_3] [(unsigned short)21] [i_4] = ((/* implicit */unsigned int) arr_9 [i_0] [i_2]);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) arr_1 [i_2] [i_2]);
                    arr_23 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) arr_10 [i_0]);
                    arr_24 [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)5261))))) != (max((var_11), (var_0)))))), (var_0)));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_26 [i_0] [i_2] [i_2] [i_2])))) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) / (676719819U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_0] [i_0] [i_3] [i_6]), (((/* implicit */unsigned short) var_3))))))));
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_6])) >> (((((/* implicit */int) var_5)) - (20492))))))));
                        arr_28 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), ((-(3506985253U)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-111))))))) : (((/* implicit */int) ((signed char) arr_5 [i_0])))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_4)))));
                        arr_33 [(unsigned short)13] [(unsigned short)13] [i_7] [i_7] = ((/* implicit */unsigned short) (+(((unsigned int) var_7))));
                        arr_34 [i_2] [i_7] = ((/* implicit */signed char) ((unsigned short) (~(1U))));
                        arr_35 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20545)) <= (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)125))))));
                        var_18 ^= ((/* implicit */unsigned short) ((unsigned int) arr_32 [i_7] [i_2] [i_7] [i_7]));
                    }
                }
            } 
        } 
    }
    for (signed char i_8 = 3; i_8 < 13; i_8 += 1) 
    {
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (unsigned short)20553))))), (1231387470U)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_1)), (arr_0 [i_8] [i_8])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7528)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_3 [20U])) ? (((/* implicit */int) arr_6 [i_8] [(_Bool)1])) : (((/* implicit */int) (signed char)124)))) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (signed char i_9 = 3; i_9 < 15; i_9 += 3) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)4032), (((/* implicit */unsigned short) (signed char)-36)))))))) & ((~(((/* implicit */int) arr_27 [i_9 + 1] [i_9 - 3] [i_9]))))));
            var_21 = var_3;
        }
        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_20 [i_8 - 2] [i_8] [i_8] [i_8] [i_8] [i_8]))))) < (((/* implicit */int) arr_18 [i_8 + 1] [i_8 + 1])))))));
        var_23 ^= ((/* implicit */unsigned short) arr_16 [i_8] [2U] [i_8 - 2] [2U] [(signed char)18]);
    }
    var_24 = ((/* implicit */signed char) max((var_9), (var_10)));
}
