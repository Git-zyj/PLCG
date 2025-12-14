/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40810
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_11 = ((unsigned short) arr_1 [i_0 + 1]);
        arr_2 [(unsigned short)7] [(unsigned short)7] = (unsigned short)1335;
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) (unsigned short)39839)) : (((/* implicit */int) arr_4 [i_2]))))));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [(unsigned short)5] = (unsigned short)25715;
                                var_12 &= ((unsigned short) ((unsigned short) (unsigned short)0));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)58004)) : (((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (unsigned short)48300)) - (48299))))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) min((var_14), (max((((unsigned short) min((var_9), (arr_6 [i_0] [i_0 - 1])))), (((unsigned short) min(((unsigned short)26772), ((unsigned short)16376))))))));
    }
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        arr_17 [i_5] = arr_15 [i_5 + 1] [(unsigned short)13];
        arr_18 [i_5 + 3] [i_5 - 2] = ((unsigned short) (unsigned short)27227);
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                for (unsigned short i_8 = 1; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_28 [i_7] [i_8] [i_8] [i_7] [i_6] [i_7] &= min((var_2), (((unsigned short) min((var_4), ((unsigned short)39745)))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), ((unsigned short)39820)));
                    }
                } 
            } 
            arr_29 [i_5 + 3] [i_6] [i_6] = (unsigned short)4;
            var_16 = ((unsigned short) (unsigned short)26772);
            arr_30 [i_5 - 2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4518)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)49160)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)15)))))) : (((/* implicit */int) ((unsigned short) (unsigned short)52033)))));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                var_17 = ((unsigned short) (unsigned short)65535);
                arr_34 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)25715))))) ? (((((/* implicit */int) (unsigned short)42631)) ^ (((/* implicit */int) arr_33 [i_5 + 1] [i_9])))) : (((((/* implicit */int) (unsigned short)46028)) | (((/* implicit */int) (unsigned short)25715)))))), (((/* implicit */int) (unsigned short)39745))));
            }
        }
        /* vectorizable */
        for (unsigned short i_10 = 3; i_10 < 19; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned short i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        {
                            arr_44 [i_5] [i_10 - 3] [i_11] [i_12] [i_13 - 1] &= (unsigned short)65512;
                            arr_45 [i_5] [i_5] &= ((unsigned short) ((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) (unsigned short)25736)) : (((/* implicit */int) (unsigned short)61620))));
                            var_18 -= ((unsigned short) (!(((/* implicit */_Bool) arr_20 [i_5]))));
                        }
                    } 
                } 
            } 
            var_19 = arr_39 [i_5] [i_5 - 1] [i_5];
        }
    }
    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) min((max(((unsigned short)49155), ((unsigned short)13911))), (((unsigned short) arr_46 [i_14] [i_14]))))))))));
        arr_48 [i_14] = ((/* implicit */unsigned short) min((max((((((/* implicit */int) (unsigned short)22905)) >> (((((/* implicit */int) arr_47 [i_14])) - (55843))))), (((/* implicit */int) ((((/* implicit */int) arr_46 [i_14] [i_14])) != (((/* implicit */int) arr_46 [i_14] [i_14]))))))), ((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)16381))))))));
    }
    var_21 = ((/* implicit */unsigned short) max((var_21), (max((((unsigned short) (unsigned short)15134)), (((unsigned short) (unsigned short)14553))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) + (((/* implicit */int) max(((unsigned short)26826), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) > (((/* implicit */int) (unsigned short)30541))))))))));
}
