/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25039
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (max((arr_2 [i_0] [i_1] [i_2]), (((/* implicit */int) (unsigned short)2441)))) : ((-(158938137))))) > (min((6144), (((((/* implicit */_Bool) var_13)) ? (-778893171) : (-1180520280)))))));
                    var_18 -= ((((/* implicit */_Bool) (unsigned short)50638)) ? ((~(((/* implicit */int) (unsigned short)63137)))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_4) : (((/* implicit */int) arr_0 [i_2])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
                    {
                        var_19 |= ((((/* implicit */_Bool) 1108687989)) ? (((/* implicit */int) var_12)) : (((arr_4 [i_1]) & (((/* implicit */int) var_17)))));
                        var_20 = (unsigned short)2445;
                        var_21 = min((((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2] [i_3])), ((-(arr_2 [11] [i_0 - 1] [i_0 + 1]))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        arr_15 [i_0 + 1] [i_0 + 1] [(unsigned short)16] [(unsigned short)16] [7] [i_4] = ((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_2] [(unsigned short)19] [i_4]);
                        arr_16 [i_0] [18] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (-(-11272396)));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_22 -= var_10;
        /* LoopSeq 1 */
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            var_23 = ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)2450))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47609))))))) | (((((/* implicit */_Bool) arr_2 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_6] [i_6 + 3] [i_6 + 4])))))));
            arr_22 [i_5] [i_5] = ((((int) max(((unsigned short)0), ((unsigned short)12443)))) / (((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) 11272409)) ? (((/* implicit */int) arr_9 [i_5] [17] [i_5] [i_6 + 2] [i_5])) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)15673)) : (((/* implicit */int) arr_14 [i_5] [i_6])))))));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                arr_25 [i_5] [9] [i_5] = var_6;
                arr_26 [i_5] [i_7] = ((/* implicit */unsigned short) -6132);
                arr_27 [i_6 + 1] [i_7] = ((/* implicit */unsigned short) arr_13 [i_7] [i_6] [i_5] [i_5]);
                arr_28 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(684001126))))));
                arr_29 [(unsigned short)4] [i_6] [i_6] = ((/* implicit */unsigned short) ((int) (unsigned short)15279));
            }
            for (int i_8 = 2; i_8 < 17; i_8 += 1) 
            {
                var_24 = ((((/* implicit */_Bool) arr_21 [i_5] [i_6 + 3] [i_8 + 2])) ? ((~(((/* implicit */int) ((unsigned short) arr_13 [(unsigned short)14] [i_6] [i_8 + 1] [(unsigned short)18]))))) : (((/* implicit */int) var_3)));
                arr_32 [i_5] [i_6 + 1] [i_8 - 2] &= ((/* implicit */unsigned short) (-((+(var_2)))));
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 20; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                for (unsigned short i_11 = 1; i_11 < 17; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 3; i_12 < 19; i_12 += 2) 
                        {
                            var_25 = arr_33 [i_5];
                            arr_45 [i_12] [i_9 - 1] = ((((/* implicit */_Bool) (~(-177934602)))) ? (((((/* implicit */_Bool) (unsigned short)49854)) ? (arr_13 [(unsigned short)6] [i_11 + 1] [i_11 + 1] [i_11 + 1]) : (arr_13 [i_11] [i_11] [i_11 + 4] [i_11 + 4]))) : (((/* implicit */int) ((unsigned short) arr_43 [i_11] [i_11] [i_11] [i_11 - 1] [i_11 + 2]))));
                        }
                        arr_46 [i_9] [i_9] [i_9] [i_9] [16] [i_9 + 1] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) % (((1073741824) % (var_1)))))) ? (((/* implicit */int) arr_1 [i_5] [i_11 + 1])) : (min((((((/* implicit */_Bool) (unsigned short)124)) ? (((/* implicit */int) arr_6 [i_10] [i_10] [i_9 - 1] [i_5])) : (arr_38 [i_9 + 1]))), (((/* implicit */int) var_7)))));
                    }
                } 
            } 
        } 
    }
}
