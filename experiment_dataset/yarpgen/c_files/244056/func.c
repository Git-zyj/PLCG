/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244056
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_2);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
        var_11 ^= ((/* implicit */long long int) var_1);
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        var_12 = ((/* implicit */int) (+(var_9)));
        var_13 &= ((/* implicit */short) (+(((/* implicit */int) var_2))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 4; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                {
                    var_14 = (+((-((+(((/* implicit */int) var_7)))))));
                    arr_18 [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_7))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) var_3);
                            arr_29 [i_5] [(short)8] [i_8] [i_8] [i_5] [i_7] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */int) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            {
                arr_37 [i_9] [i_9] [i_10] = ((/* implicit */short) (+((+(((/* implicit */int) var_7))))));
                arr_38 [i_10] [i_10] = ((/* implicit */unsigned short) (~((~((+(var_9)))))));
                /* LoopSeq 2 */
                for (long long int i_11 = 1; i_11 < 22; i_11 += 3) 
                {
                    arr_42 [i_11] [i_10] [i_11] [i_11] = ((/* implicit */long long int) var_1);
                    var_18 = var_8;
                }
                for (int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    arr_45 [8LL] [i_10] [i_12] = ((/* implicit */unsigned char) var_3);
                    arr_46 [0U] = (!((!((!(((/* implicit */_Bool) var_4)))))));
                }
            }
        } 
    } 
}
