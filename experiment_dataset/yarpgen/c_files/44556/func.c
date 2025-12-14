/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44556
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_8 [i_4 + 1] [i_4 + 1] [i_2] [i_4 + 1]);
                                arr_14 [(unsigned char)0] [i_1] [16ULL] [i_2] [i_3] [(unsigned char)0] [i_4 + 2] = ((/* implicit */unsigned int) arr_0 [i_2 - 1]);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) ((_Bool) arr_9 [i_2 + 1] [i_2 + 1]));
                    var_15 = ((/* implicit */long long int) arr_4 [(unsigned short)18] [i_1] [i_2 - 1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                {
                    var_16 = ((int) arr_7 [i_0] [i_0] [(signed char)12] [i_0]);
                    var_17 &= ((/* implicit */unsigned long long int) arr_11 [i_5 - 1] [i_6 + 1] [i_6 + 1] [(_Bool)1] [6ULL] [i_6 - 1] [i_6 + 2]);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((signed char) arr_18 [i_0] [i_0] [(_Bool)1]));
        arr_20 [i_0] [i_0] = arr_17 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                {
                    var_19 = arr_17 [i_8] [2ULL] [i_7];
                    arr_27 [i_8] [i_7] = ((/* implicit */_Bool) ((unsigned long long int) ((int) arr_0 [i_9])));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((int) arr_15 [i_7] [i_8])))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_10 [i_7] [i_7] [i_7] [i_7]))));
                    var_22 = ((/* implicit */_Bool) arr_2 [i_9] [12ULL] [i_7]);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) arr_17 [i_7] [i_7] [i_7]);
    }
    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_28 [i_10]))));
            var_25 = ((/* implicit */signed char) arr_29 [i_10]);
            /* LoopSeq 2 */
            for (unsigned short i_12 = 1; i_12 < 17; i_12 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) arr_29 [i_10]);
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_30 [(_Bool)1] [i_11] [(_Bool)1]))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                var_28 = arr_30 [i_10] [16U] [i_10];
                var_29 = ((/* implicit */signed char) arr_30 [i_10] [i_10] [i_10]);
                var_30 = ((/* implicit */unsigned long long int) arr_33 [i_10] [i_11] [i_11]);
            }
        }
        var_31 -= ((/* implicit */signed char) ((unsigned long long int) arr_36 [i_10] [i_10] [12] [i_10]));
        arr_38 [i_10] = ((/* implicit */short) arr_29 [i_10]);
        arr_39 [i_10] [i_10] = ((/* implicit */int) arr_28 [i_10]);
    }
    var_32 ^= ((/* implicit */int) var_9);
}
