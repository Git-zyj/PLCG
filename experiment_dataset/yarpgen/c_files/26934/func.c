/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26934
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_18))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 239218036)) ? (((/* implicit */long long int) 239218039)) : (arr_0 [i_1 - 1] [i_2 - 1])));
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */short) arr_5 [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        arr_24 [i_4] [(signed char)1] [i_6] = arr_14 [i_3];
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_22 = ((_Bool) ((((/* implicit */_Bool) (unsigned short)7996)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-15823))));
                            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_19)) / ((~(((/* implicit */int) var_11))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_24 = var_4;
                            arr_30 [i_8] = ((/* implicit */unsigned char) ((int) ((var_9) || (((/* implicit */_Bool) var_4)))));
                            var_25 ^= ((/* implicit */long long int) ((arr_15 [i_3] [i_4]) ? (((/* implicit */int) arr_15 [i_6] [i_3])) : (var_16)));
                        }
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */long long int) var_19);
    }
}
