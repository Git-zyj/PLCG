/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47398
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
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_17 = arr_0 [i_0 - 1];
        arr_2 [i_0] [i_0 + 1] = arr_1 [i_0 + 1];
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)4])) ? (((/* implicit */int) arr_5 [(_Bool)0])) : (((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)0))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : ((+(var_11)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_2] = ((/* implicit */unsigned int) ((short) arr_9 [i_1] [i_2] [i_1]));
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_3 [i_2]))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-8584))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_4]))));
                        arr_28 [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_3 [i_4]))) ? (((((/* implicit */_Bool) ((short) (short)24455))) ? (((/* implicit */int) (short)-15015)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_4] [i_5] [i_5])) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) arr_3 [i_4]))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)24455))))) : (arr_8 [i_4] [i_4] [i_4])));
                        var_22 &= ((/* implicit */short) ((unsigned int) max((arr_27 [i_4] [i_6] [i_6] [i_7]), (arr_27 [i_4] [i_4] [i_4] [i_4]))));
                    }
                    arr_29 [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)24455), ((short)9450))))) % (min((arr_8 [i_4] [i_5] [i_6]), (arr_8 [i_4] [i_5] [i_6])))));
                    arr_30 [i_4] [i_4] = ((/* implicit */short) (((+(((/* implicit */int) arr_23 [i_4] [i_4] [10U])))) + ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)511))))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_5 [i_5])))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            arr_35 [i_9] = (short)7;
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_31 [i_8] [i_9])) : (((/* implicit */int) arr_34 [i_8] [i_8])))))));
        }
        var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-507)) ? (2734239216U) : (arr_32 [i_8])))));
    }
    var_26 = ((/* implicit */short) (_Bool)1);
}
