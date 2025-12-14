/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232288
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_4 - 1] [i_0] [i_0])) != (((/* implicit */int) (_Bool)1))))), (var_17)));
                                arr_15 [i_3] = ((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (arr_9 [i_4 + 1] [i_4 + 1])))));
                            }
                        } 
                    } 
                    var_18 = min((((/* implicit */long long int) (_Bool)1)), ((~((~(16LL))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_17)))));
    var_20 += ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_2)) : (var_4)));
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (int i_7 = 2; i_7 < 14; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (long long int i_9 = 3; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (short)-29416);
                                var_22 = ((/* implicit */unsigned short) ((unsigned int) ((arr_26 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9] [i_9]) > (arr_26 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9] [i_9] [i_9]))));
                                var_23 ^= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_9] [i_8]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (12010296882853200135ULL)));
                            var_25 = ((/* implicit */unsigned short) (-(arr_26 [i_7] [i_7 - 1] [i_7 + 3] [i_7] [i_10] [i_10] [i_10 - 1])));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7 + 1]))) >= (var_0)));
                            arr_35 [i_10] [i_10] [i_7] [i_6] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (signed char)6))));
                        }
                        arr_36 [i_10] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_7 + 1] [15ULL] [i_7 + 1] [i_10 + 2] [i_10])) ? (((/* implicit */unsigned long long int) arr_22 [i_7] [i_7 + 2] [i_5])) : (var_6)));
                    }
                }
            } 
        } 
    } 
}
