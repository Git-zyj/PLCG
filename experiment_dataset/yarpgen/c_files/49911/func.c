/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49911
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
    var_18 = ((/* implicit */_Bool) ((unsigned char) var_3));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_19 -= ((/* implicit */unsigned int) arr_1 [7ULL] [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((unsigned short) (!(((/* implicit */_Bool) arr_0 [16LL] [0]))));
            /* LoopNest 3 */
            for (long long int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) arr_4 [i_0] [i_1])));
                            var_21 -= ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_4 [i_2] [i_1])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_4 [i_0] [i_1])))) + (29)))));
                            arr_13 [i_0] [i_1] [i_0] [i_3 + 1] [i_4] = ((/* implicit */_Bool) ((long long int) (!(arr_4 [i_2] [i_2]))));
                            var_22 -= ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_2 - 2] [9ULL] [i_2 - 2])))));
                        }
                    } 
                } 
            } 
            var_23 -= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_7 [i_0] [20ULL] [(short)6]))) != (((int) arr_3 [i_1]))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (signed char i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    {
                        arr_19 [i_0] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_1] [i_5] [i_6]))));
                        arr_20 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)138))));
                        arr_21 [i_1] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_16 [i_0] [i_1] [i_5] [i_6] [i_5] [i_1])))));
                    }
                } 
            } 
        }
        arr_22 [i_0] = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) & (704965238U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_34 [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((unsigned char) arr_24 [i_7])))))));
                    arr_35 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) (+((+(arr_31 [i_7] [i_8] [(signed char)9] [(signed char)8]))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_14] [i_11] [i_11])))))))) >> ((-(((/* implicit */int) ((_Bool) (_Bool)0)))))));
                                arr_49 [i_14] [(short)8] [4U] [(short)5] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [(unsigned short)23] [(unsigned short)23] [i_13]))));
                                var_25 = (!(((/* implicit */_Bool) (+((+(arr_32 [i_10] [i_10])))))));
                            }
                        } 
                    } 
                } 
                var_26 -= ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_15 [i_10] [i_10] [i_10] [i_11])))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_11] [i_11] [i_10] [11ULL] [i_11] [i_11]))))));
            }
        } 
    } 
}
