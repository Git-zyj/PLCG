/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217928
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
    var_13 = 604837734U;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_11));
        var_15 = (~(894783950U));
        arr_2 [10U] = ((((/* implicit */_Bool) var_2)) ? (1322639137U) : (3400183332U));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 4; i_2 < 18; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                {
                    var_16 = 1322639119U;
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        var_17 = var_9;
                        arr_11 [i_1] [12U] [i_3 + 1] [i_3 - 1] [i_4] [i_4] = var_0;
                        var_18 = ((unsigned int) 1322639134U);
                        var_19 = min((((((/* implicit */_Bool) var_5)) ? (var_3) : (var_12))), (((1515571562U) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 2972328179U)))))))));
                        var_20 &= var_8;
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        arr_14 [10U] [i_1] [10U] [15U] [i_1] = var_4;
                        arr_15 [i_1] = ((((/* implicit */_Bool) var_0)) ? (var_7) : (724055687U));
                    }
                    var_21 = var_9;
                    var_22 = ((((((/* implicit */_Bool) 1576864618U)) ? (((((/* implicit */_Bool) 2259121566U)) ? (906398657U) : (946737727U))) : (max((32767U), (var_3))))) >> (((max((var_0), (((unsigned int) var_12)))) - (3674225880U))));
                }
            } 
        } 
        var_23 = ((((var_0) & (var_1))) & (((var_3) >> (((604837722U) - (604837701U))))));
        var_24 = min((((((var_12) < (4294967295U))) ? ((~(2045333007U))) : (max((var_10), (616633255U))))), (((((/* implicit */_Bool) (-(616633262U)))) ? (var_3) : (((var_4) - (var_3))))));
        arr_16 [i_1] = var_4;
    }
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        var_25 = ((((/* implicit */_Bool) 3170144640U)) ? (((((3678334040U) - (3012848553U))) / (((((/* implicit */_Bool) 3678334040U)) ? (var_2) : (var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (4294967295U) : (var_2)))) ? (((unsigned int) var_6)) : (2543018798U))));
        arr_20 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 3U)) ? (906398657U) : (176956276U))), (((var_7) * (var_9))))))));
        arr_21 [5U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 616633269U)) ? (var_1) : (var_7)))) ? (max((var_1), (3568924062U))) : (1U)))) ? (1921404129U) : (var_5));
        var_26 = max((min((0U), (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 4294967295U))))));
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            var_27 = var_10;
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (2601979583U)))) ? (var_11) : (((((/* implicit */_Bool) var_2)) ? (1774994286U) : (4294967284U))));
            var_29 = ((((/* implicit */_Bool) min((var_8), (((var_7) / (var_2)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_7))) : (var_12));
        }
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_30 = min((((((var_7) != (var_4))) ? (((((/* implicit */_Bool) 4294967295U)) ? (2287003309U) : (var_10))) : (var_11))), (((3827308543U) & (var_4))));
            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2171229788U)) ? (1502182207U) : (var_7)))) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (var_2))) : (min((var_10), (var_11))));
        }
        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 4) 
        {
            var_32 *= var_4;
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                arr_32 [i_9] [i_9 + 2] [18U] [i_9] = 1071226298U;
                var_33 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_1), (3678334038U))))))), (max((((((/* implicit */_Bool) 3674448410U)) ? (var_8) : (4294967295U))), (var_0))));
            }
            arr_33 [i_6] [i_6] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1715629599U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((692289821U) < (var_5))))) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_0) : (524287U))) == (((((/* implicit */_Bool) 4294967282U)) ? (14U) : (var_6))))))) : (((((((/* implicit */_Bool) 0U)) ? (11U) : (var_10))) | (((2482063465U) % (2543994502U))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        arr_36 [i_11] = 2963543838U;
        var_34 = ((1387669577U) >> (((((/* implicit */_Bool) var_7)) ? (0U) : (1475543049U))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            var_35 = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 3905498761U)) ? (var_11) : (1071226298U))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (3624235302U))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 3; i_13 < 15; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    {
                        arr_45 [i_13] [i_13] [i_12] [i_12] [i_11] [i_11] = 134217720U;
                        arr_46 [i_12] [i_12] [i_13] [i_14] [i_12] = (~(var_6));
                        var_36 = ((((/* implicit */_Bool) var_6)) ? (var_3) : (var_1));
                    }
                } 
            } 
            var_37 += ((((/* implicit */_Bool) 3552281777U)) ? (var_7) : (var_6));
            var_38 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
            var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(4294967268U))))));
        }
    }
}
