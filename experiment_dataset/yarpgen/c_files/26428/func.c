/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26428
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_11))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_0))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_16 += ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)29434)), (arr_0 [i_0 - 1])))) ? (((/* implicit */int) ((arr_1 [i_0 + 2]) > (arr_0 [i_0 - 3])))) : (var_11));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                var_17 &= ((/* implicit */int) (unsigned short)33867);
                arr_7 [(unsigned short)2] [i_0] [i_0] [(unsigned short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 3])) : (((((/* implicit */_Bool) -1463305805)) ? (((/* implicit */int) (unsigned short)19522)) : (1463305805)))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                arr_12 [i_0] [(unsigned short)4] [i_0] = ((((/* implicit */_Bool) -339414237)) ? (-1409071161) : (((/* implicit */int) (unsigned short)21147)));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-418692243) & (arr_1 [i_0])))) ? (((int) -1756324255)) : (var_5)));
            }
            for (unsigned short i_4 = 2; i_4 < 9; i_4 += 4) 
            {
                var_19 = ((((/* implicit */int) arr_10 [i_0] [i_1] [i_4] [i_0 - 2])) - (((/* implicit */int) arr_10 [i_0] [i_1] [10] [i_0 - 1])));
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_22 [i_4] [i_6] &= ((int) arr_8 [i_5 + 1] [i_5 - 1]);
                            var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned short)38923)) / (arr_3 [i_0]))) : (((/* implicit */int) (unsigned short)5708))))));
                        }
                    } 
                } 
                arr_23 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [5] [i_4 - 2])) ? (-1453405296) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_4 - 1]))));
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 10; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((int) 609025564))));
                            arr_35 [i_0] [(unsigned short)7] [(unsigned short)7] [i_7] [i_8] [i_0] [i_10] = ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (-418692243) : (arr_0 [i_0 - 2]));
                        }
                    } 
                } 
            } 
            arr_36 [i_0] = ((/* implicit */unsigned short) (-(((int) 1623987566))));
        }
    }
    for (int i_11 = 3; i_11 < 10; i_11 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_12 = 3; i_12 < 9; i_12 += 2) 
        {
            for (int i_13 = 4; i_13 < 9; i_13 += 2) 
            {
                for (int i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) -2004261071))));
                        arr_47 [6] [i_14] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned short) var_9);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_15 = 3; i_15 < 11; i_15 += 1) 
        {
            for (int i_16 = 1; i_16 < 11; i_16 += 1) 
            {
                {
                    arr_55 [i_11] [i_11] [i_16 + 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (((int) (unsigned short)23146))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(1586136085)))) && (((/* implicit */_Bool) ((int) var_4)))))) : (max((((-686233240) % (418692247))), (((/* implicit */int) (((-2147483647 - 1)) != (536870400))))))));
                    arr_56 [i_11] [i_15 - 2] [10] = min((min((max((639527888), (var_6))), (max((-1), (var_2))))), (((/* implicit */int) min(((unsigned short)45710), ((unsigned short)65535)))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_26 [(unsigned short)10] [(unsigned short)10] [0])) ? (var_0) : (arr_16 [i_11] [i_11] [8] [i_15] [i_15] [3]))))) ? (var_12) : (min((((/* implicit */int) ((((/* implicit */_Bool) 2103738121)) || (((/* implicit */_Bool) -1073741824))))), ((-(arr_33 [10] [10]))))))))));
                    arr_57 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_11] [i_15 + 1] [i_16 + 1] [i_16])) ? (((/* implicit */int) arr_42 [i_15] [i_15 - 3] [i_16 - 1])) : (((/* implicit */int) (unsigned short)25031))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) min((var_13), (arr_42 [i_15] [i_15 - 3] [i_16 + 1]))))));
                    var_24 ^= ((/* implicit */int) ((unsigned short) -595101956));
                }
            } 
        } 
    }
}
