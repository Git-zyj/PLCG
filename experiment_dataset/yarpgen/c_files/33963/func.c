/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33963
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
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */short) (~(((/* implicit */int) (signed char)49))));
                        var_16 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [(short)16] [(short)16] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */unsigned char) arr_8 [i_0]);
    }
    for (signed char i_4 = 2; i_4 < 20; i_4 += 1) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_9 [(signed char)18]))));
        arr_11 [i_4] = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) ((short) arr_9 [i_4]))))));
        arr_12 [i_4] [i_4] = ((/* implicit */int) arr_10 [i_4]);
    }
    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_19 = ((/* implicit */short) ((long long int) arr_14 [i_5] [(signed char)23]));
        arr_16 [(signed char)13] = ((/* implicit */short) (-(arr_15 [i_5] [i_5])));
    }
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_17 [i_6])))))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        for (signed char i_10 = 2; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_6]))));
                                var_21 = (+(arr_20 [i_10] [i_6] [i_6]));
                                var_22 = ((/* implicit */int) ((short) ((unsigned char) ((long long int) arr_9 [i_6]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            {
                                arr_38 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_6] [(signed char)1] = ((/* implicit */signed char) ((short) (!((!(((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_6])))))));
                                arr_39 [i_6] [i_7] [i_8] [i_11] [i_6] = ((/* implicit */long long int) arr_10 [(unsigned char)10]);
                            }
                        } 
                    } 
                    arr_40 [i_6] = (-(((long long int) ((unsigned char) arr_35 [(short)12] [i_8] [(short)12] [i_6] [i_8]))));
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */long long int) ((signed char) var_1));
}
