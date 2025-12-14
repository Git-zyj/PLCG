/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221770
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [0U] [16U] &= (-(4294967295U));
        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_19)) ? (var_1) : (var_19))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2454354277U)) && (((/* implicit */_Bool) var_4))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 7; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            for (unsigned int i_3 = 2; i_3 < 8; i_3 += 1) 
            {
                {
                    var_21 &= ((((((var_15) < (var_4))) ? (max((var_17), (367461908U))) : (((var_4) << (((var_0) - (896726576U))))))) & (((((/* implicit */_Bool) min((var_10), (var_9)))) ? (3256828216U) : (var_5))));
                    var_22 = max((((/* implicit */unsigned int) ((1038139068U) == (396027681U)))), (var_11));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) 
                        {
                            {
                                var_23 &= ((var_11) % (var_9));
                                arr_16 [i_1] [i_1] = (~(var_19));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_19))))))))));
        var_24 = (-(((((/* implicit */_Bool) var_8)) ? (var_15) : ((~(3898939615U))))));
        arr_18 [i_1] = (~((~(min((var_7), (var_15))))));
    }
    var_25 = ((var_8) & (var_9));
    /* LoopSeq 2 */
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    arr_29 [i_7] = var_0;
                    var_26 = ((/* implicit */unsigned int) min((var_26), (max((1038139080U), ((-(var_13)))))));
                    var_27 = min((((/* implicit */unsigned int) (((~(var_4))) > (((4294967295U) * (3764495580U)))))), (var_19));
                    arr_30 [i_7] [i_7] = (-((+(min((2104372050U), (var_2))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            {
                                arr_36 [i_6] [2U] [4U] [i_6] [i_6] [2U] [15U] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_7) > (var_11))))));
                                arr_37 [i_6] [i_6] [i_6] [2U] [i_6] [5U] [i_6] = min(((~(((3526393547U) ^ (3U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(768573748U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((min((2454354255U), (var_3))) % (((1412930025U) ^ (2454354267U)))))));
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3481284857U))));
                }
            } 
        } 
        arr_44 [i_6] = (-(var_2));
    }
    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
    {
        var_30 *= arr_21 [i_13];
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (arr_27 [12U]) : (var_15)))))) && (((/* implicit */_Bool) max((arr_33 [i_13] [i_13]), (((((/* implicit */_Bool) 1038139058U)) ? (3587783747U) : (1840613019U))))))));
    }
}
