/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33768
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((short) var_6)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((arr_0 [i_0] [i_0]) & (((/* implicit */int) (_Bool)0)));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_11 [i_0 - 2] [(short)7] [i_2] [(short)7] = ((/* implicit */unsigned char) ((int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))) % (arr_9 [i_0 - 4] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned int) ((short) arr_1 [i_0]))))));
                        var_14 += ((/* implicit */long long int) arr_2 [i_0 - 3] [i_1] [i_2]);
                    }
                } 
            } 
        } 
        var_15 -= ((/* implicit */unsigned int) arr_8 [i_0] [(unsigned short)2]);
        var_16 ^= ((/* implicit */signed char) ((arr_9 [i_0] [i_0 + 2] [i_0 - 3] [i_0]) << (((arr_2 [i_0 + 2] [i_0] [i_0]) + (2135472608)))));
    }
    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((arr_12 [i_4]) < (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4])))));
        var_18 = ((/* implicit */signed char) ((long long int) ((unsigned int) ((unsigned long long int) arr_12 [i_4]))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                {
                    arr_20 [i_4] [i_6] = ((/* implicit */_Bool) arr_12 [i_4]);
                    var_19 ^= ((/* implicit */short) arr_18 [i_6] [i_6] [(_Bool)1]);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */short) var_3);
}
