/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34573
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_2] [i_1] [i_4]);
                                var_21 ^= ((/* implicit */long long int) ((int) arr_13 [i_0] [i_1] [i_4 + 3] [i_3] [i_0]));
                                arr_14 [(short)9] [i_1] [i_2] = ((/* implicit */long long int) arr_9 [i_4 - 2] [i_3] [i_2 - 2] [i_1] [i_0]);
                                arr_15 [i_2 - 1] [i_1] [i_2 - 1] [i_1] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) var_13);
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_19)))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_1 [i_0]))));
        var_24 ^= ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_25 ^= ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_20 [(short)5] [i_5] = ((/* implicit */unsigned char) var_11);
        var_26 = ((/* implicit */short) min((var_26), (((short) (-(((/* implicit */int) var_19)))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        arr_28 [i_5] [i_5] [i_7] [i_8] [i_5] = ((/* implicit */short) arr_25 [i_8] [i_5] [i_5] [0LL]);
                        arr_29 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_5] [i_6] [i_5] [i_5]))))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_25 [i_5] [i_5] [6] [i_8])))) : (((((/* implicit */int) arr_19 [i_5])) % (((/* implicit */int) var_17)))))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_18 [i_8]))));
                    }
                } 
            } 
        } 
        arr_30 [i_5] = ((/* implicit */long long int) var_15);
    }
    var_28 = ((/* implicit */signed char) var_17);
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                {
                    arr_40 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) arr_32 [i_9]);
                    arr_41 [i_11] [i_10] [i_9] [i_10] = ((/* implicit */short) var_6);
                }
            } 
        } 
    } 
}
