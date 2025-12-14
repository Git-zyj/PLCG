/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25291
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
    var_20 = ((/* implicit */unsigned char) ((unsigned int) var_15));
    var_21 = ((/* implicit */short) min((var_4), (((/* implicit */int) (unsigned char)65))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)190)), ((short)-15496)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min(((short)15495), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)46)))))));
                                var_23 = ((/* implicit */int) (unsigned char)65);
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */unsigned char) arr_9 [i_1]);
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)44)) ? (-1891789166) : (((/* implicit */int) (signed char)40)))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_7 [i_0] [i_1] [(short)6] [i_0]))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_18)))))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 4; i_6 < 24; i_6 += 2) 
        {
            arr_24 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5] [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_6] [i_5]))) : ((~(var_13)))));
            arr_25 [i_5] [i_5] = ((((/* implicit */_Bool) 10469253687112456684ULL)) ? (var_4) : (((/* implicit */int) var_8)));
        }
        arr_26 [i_5] [(short)9] = ((/* implicit */int) (unsigned char)198);
        /* LoopNest 3 */
        for (short i_7 = 1; i_7 < 23; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (unsigned char i_9 = 4; i_9 < 23; i_9 += 2) 
                {
                    {
                        var_25 -= ((/* implicit */unsigned long long int) var_5);
                        arr_36 [i_7] [i_8] [i_8] [i_5] [i_5] [i_7] = ((/* implicit */short) (-(((/* implicit */int) ((short) var_18)))));
                        arr_37 [i_8] [i_7] [i_7] [i_7] = (i_7 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) var_15)) >> (((arr_30 [i_7] [i_7] [i_7] [i_7]) - (2389271655U)))))) : (((/* implicit */short) ((((/* implicit */int) var_15)) >> (((((arr_30 [i_7] [i_7] [i_7] [i_7]) - (2389271655U))) - (3331274651U))))));
                    }
                } 
            } 
        } 
    }
}
