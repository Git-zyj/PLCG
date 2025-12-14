/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48961
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 + 2] [i_2 + 2])) ? ((-(var_10))) : (min((var_14), (((/* implicit */int) arr_6 [i_4]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1460699715U)));
                                var_19 = var_2;
                                arr_13 [(unsigned char)7] [i_1] [(unsigned char)7] [7U] [7U] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_13)))));
                                var_20 = ((/* implicit */int) ((unsigned char) min((arr_0 [i_2 - 2]), (arr_0 [i_2 + 1]))));
                            }
                        } 
                    } 
                } 
                var_21 = max(((+(var_16))), (max((var_1), (((/* implicit */unsigned int) var_15)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_23 = ((/* implicit */short) ((arr_17 [i_5] [i_5]) > (((/* implicit */int) arr_15 [i_5] [i_5]))));
        var_24 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) var_5)))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                for (int i_8 = 2; i_8 < 23; i_8 += 1) 
                {
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_7] [i_7] [i_8] = ((/* implicit */short) var_17);
                        arr_26 [i_5] [i_6] [i_7] [i_8 - 1] = ((/* implicit */int) var_7);
                    }
                } 
            } 
        } 
    }
}
