/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209644
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
    var_14 &= var_9;
    var_15 = var_1;
    var_16 = min((515891015), (((/* implicit */int) var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 ^= arr_1 [i_0] [i_1];
                var_18 += max((((unsigned short) ((unsigned short) var_2))), (((/* implicit */unsigned short) ((var_9) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (max((515891015), ((~(515891024)))))));
                                var_20 = (((~(((/* implicit */int) (unsigned short)14)))) * (((/* implicit */int) ((arr_0 [i_0]) < (arr_0 [i_0])))));
                                var_21 -= ((/* implicit */int) ((((/* implicit */unsigned int) (+(-1)))) < (var_7)));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (((-(((((/* implicit */_Bool) arr_6 [12U] [i_3] [11U])) ? (var_8) : (4294967285U))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_0] [13U] [13U]), ((unsigned short)65522)))) ? ((+(515891015))) : (((/* implicit */int) max((arr_9 [i_2] [i_4]), (var_0))))))))))));
                            }
                        } 
                    } 
                    var_23 = arr_8 [i_0] [i_0] [i_0] [i_0];
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        arr_13 [i_5] [i_2] = ((/* implicit */unsigned int) var_13);
                        var_24 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [0]) - (((/* implicit */int) arr_5 [i_0] [i_2] [i_0]))))) ? (((((/* implicit */_Bool) arr_11 [9U] [2] [i_5] [i_5] [i_2] [i_5])) ? (10U) : (4294967286U))) : (((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) (unsigned short)23))))))));
                        var_25 = ((/* implicit */unsigned int) arr_7 [i_5] [8] [i_1] [i_0]);
                    }
                }
                for (unsigned short i_6 = 3; i_6 < 12; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_26 = (-((-(((/* implicit */int) arr_17 [i_0] [i_1] [i_6] [i_7])))));
                        var_27 = ((/* implicit */int) max((((((((/* implicit */_Bool) 3286839542U)) ? (-515891015) : (((/* implicit */int) (unsigned short)35517)))) < (((((/* implicit */_Bool) arr_4 [9] [9])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)12])) : (((/* implicit */int) arr_9 [i_6] [i_7])))))), (((5U) < (((/* implicit */unsigned int) -242397759))))));
                        var_28 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_6 + 2] [i_6])) < (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (((((/* implicit */unsigned int) (~(arr_15 [9U] [i_1] [i_7])))) ^ (var_8)))));
                    }
                    arr_19 [4] |= ((/* implicit */int) ((4294967277U) * (min((4294967290U), (((/* implicit */unsigned int) ((548030782) < (358905321))))))));
                    var_29 = ((/* implicit */unsigned int) ((-548030762) % (max((153251824), (515891027)))));
                    var_30 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_6 + 1] [i_6 + 2] [i_0])) % (((/* implicit */int) var_2)))) < (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_3 [i_6 - 3] [i_6 - 2] [i_6 + 2]))))));
                }
            }
        } 
    } 
}
