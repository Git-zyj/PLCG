/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50337
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) var_2);
        var_15 += ((/* implicit */_Bool) ((signed char) ((_Bool) var_9)));
    }
    /* LoopSeq 3 */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((int) var_5));
        var_16 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_9))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned long long int) var_2)))));
            arr_10 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            var_18 = ((/* implicit */_Bool) var_7);
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    arr_20 [i_4] [i_4] [i_4] &= ((/* implicit */unsigned short) ((int) (~(var_0))));
                    var_19 *= ((/* implicit */unsigned char) ((signed char) var_13));
                    arr_21 [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) (-(var_6)));
                    arr_22 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                }
            } 
        } 
        arr_23 [i_3] = ((/* implicit */unsigned char) var_6);
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    arr_29 [i_3] [i_6] [i_7] = ((/* implicit */signed char) var_13);
                    arr_30 [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                    arr_31 [i_3] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((signed char) ((short) ((_Bool) var_9))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) var_11);
                                arr_38 [i_3] [i_3] [i_7] [i_6] [i_3] = ((/* implicit */unsigned int) var_11);
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_39 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
        arr_40 [i_3] [(short)6] = ((/* implicit */_Bool) ((long long int) (-((+(var_0))))));
    }
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            var_22 = ((/* implicit */signed char) var_2);
            arr_46 [i_10] [i_10] [i_10] = ((/* implicit */short) (~(var_10)));
        }
        var_23 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((_Bool) var_13))))));
        var_24 *= ((/* implicit */short) (+(((unsigned long long int) var_4))));
    }
}
