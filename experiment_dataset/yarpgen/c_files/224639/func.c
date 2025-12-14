/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224639
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
    var_14 &= ((/* implicit */_Bool) ((short) ((((unsigned long long int) var_0)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = min((((unsigned int) ((unsigned char) arr_0 [i_0] [i_1]))), (((unsigned int) ((short) arr_3 [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 2; i_4 < 22; i_4 += 2) 
                            {
                                var_16 |= ((/* implicit */signed char) arr_6 [i_3] [i_1] [i_1] [5LL]);
                                var_17 = ((/* implicit */signed char) ((unsigned int) ((short) arr_14 [13] [4] [i_2] [17U] [i_4 + 1] [i_2])));
                                arr_15 [i_2] [(unsigned char)16] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((int) (+(min((((/* implicit */long long int) arr_10 [i_0] [(unsigned char)0] [i_4])), (arr_9 [i_2] [i_3] [i_2] [i_0]))))));
                                var_18 = ((/* implicit */unsigned int) arr_14 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [(signed char)18] [i_4]);
                            }
                            var_19 = ((/* implicit */_Bool) ((int) ((_Bool) arr_12 [i_1] [i_0 + 3])));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((_Bool) arr_0 [i_2] [i_2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                arr_21 [i_5] = ((unsigned char) ((int) ((_Bool) arr_11 [i_6] [i_6] [i_5] [i_5] [i_5])));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 9; i_9 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned char) (+(arr_9 [i_8] [i_8] [i_5] [i_5])));
                                var_22 += ((/* implicit */unsigned short) ((short) min((((unsigned long long int) arr_26 [8U])), (((/* implicit */unsigned long long int) arr_7 [i_7] [i_8] [i_9])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_7 [i_5 - 1] [i_6] [i_7])) * (((unsigned int) arr_10 [i_5] [i_5] [5])))))));
                }
                var_24 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) ((signed char) arr_24 [i_5] [i_5] [i_5] [i_5] [7ULL] [i_5]))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) max((arr_2 [i_5] [i_5] [i_6]), (((/* implicit */int) arr_12 [i_5] [i_5]))))))) >= (((long long int) ((unsigned char) arr_17 [i_5 + 1])))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_5)));
}
