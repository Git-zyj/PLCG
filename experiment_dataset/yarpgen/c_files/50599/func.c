/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50599
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_10 += ((/* implicit */unsigned short) ((signed char) ((unsigned short) var_4)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            var_11 |= ((unsigned short) ((unsigned short) (signed char)-93));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((signed char) ((unsigned short) var_8)));
                            arr_13 [i_1] [i_3] [i_4] = ((signed char) ((unsigned short) (unsigned short)57418));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */signed char) ((unsigned short) (signed char)-21));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((unsigned short) var_1))));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((signed char) var_2)))));
                            var_15 = ((/* implicit */signed char) ((unsigned short) var_2));
                            var_16 = ((/* implicit */signed char) ((unsigned short) arr_15 [i_0]));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_6 = 4; i_6 < 17; i_6 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((signed char) ((signed char) var_1))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (signed char i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    {
                        var_18 += ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_1 [i_8] [i_8])));
                        var_19 = ((/* implicit */unsigned short) ((signed char) ((signed char) arr_5 [i_8 - 1] [i_6 + 1])));
                        arr_26 [i_0] [i_7] = ((unsigned short) ((unsigned short) (signed char)-56));
                    }
                } 
            } 
        }
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
    {
        arr_29 [i_9] = ((unsigned short) ((unsigned short) var_9));
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (signed char i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    {
                        arr_38 [i_11] = ((unsigned short) ((signed char) (signed char)-80));
                        var_20 = ((unsigned short) ((unsigned short) ((signed char) var_6)));
                    }
                } 
            } 
        } 
        var_21 ^= ((signed char) ((signed char) (signed char)-53));
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                {
                    var_22 *= ((signed char) ((signed char) var_3));
                    var_23 += ((unsigned short) ((signed char) var_2));
                }
            } 
        } 
    }
    var_24 = var_4;
}
