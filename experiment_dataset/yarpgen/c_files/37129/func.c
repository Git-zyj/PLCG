/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37129
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_5))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (((~(arr_11 [i_0]))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_2])))))));
                        var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)10351)))));
                    }
                } 
            } 
            arr_14 [i_1] = ((/* implicit */signed char) (short)-10358);
            var_22 += (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0])) && (((/* implicit */_Bool) (short)-698))))));
            var_23 = ((/* implicit */signed char) min(((-(arr_6 [i_1] [i_0] [i_0]))), (((arr_6 [(_Bool)1] [i_0] [i_1]) - (((/* implicit */unsigned long long int) var_15))))));
        }
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_24 = ((/* implicit */signed char) (((_Bool)1) && (arr_16 [(signed char)11])));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_16 [i_4]))));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4] [(unsigned short)22])) || (arr_22 [i_5] [i_6 + 2] [i_6])))))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_22 [i_6 + 1] [i_6] [i_6 + 1])) : (((((/* implicit */_Bool) (short)10351)) ? (683487489) : (((/* implicit */int) (signed char)29))))));
                    }
                } 
            } 
            arr_25 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)692)) : (var_18)));
            var_28 += ((/* implicit */unsigned short) ((arr_19 [i_4]) + (arr_19 [i_4])));
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_29 = ((/* implicit */signed char) var_7);
        arr_30 [i_8] = ((/* implicit */signed char) arr_21 [i_8] [i_8]);
    }
    var_30 = (unsigned short)6255;
}
