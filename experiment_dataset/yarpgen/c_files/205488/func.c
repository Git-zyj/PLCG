/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205488
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
    var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (max((((/* implicit */unsigned long long int) var_9)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551603ULL))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_2))));
                                var_16 = ((/* implicit */short) 1ULL);
                                arr_13 [(short)0] [i_3] [i_3] [i_4] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_3 - 2] [i_1 + 1] [i_0 + 1] [i_0]))) ? (((/* implicit */unsigned long long int) arr_11 [i_4] [i_3 + 1] [(_Bool)1] [i_2] [i_1 + 1] [(short)10] [i_0])) : (((((/* implicit */_Bool) 883466998U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)253)))))) : (var_6)))));
                                arr_14 [i_4] [i_4] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                                var_17 ^= ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 883467021U)) ? (6468804079355764849ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0 + 2] [i_1] [i_0 + 1] [i_1])))))) << (((/* implicit */int) var_0))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            {
                arr_22 [i_6] [17ULL] |= ((/* implicit */unsigned char) (!(((arr_19 [i_5 + 1] [i_5 - 1] [i_5]) || (arr_19 [i_5] [i_5 + 1] [15ULL])))));
                var_19 ^= ((/* implicit */short) 3411500297U);
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        {
                            arr_29 [i_8] [i_6] = ((/* implicit */short) (+(((unsigned long long int) arr_18 [i_5]))));
                            arr_30 [i_5] [5LL] [i_8] [i_5] [i_5] [i_5] = (-(min((var_3), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_6]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            arr_35 [i_5] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_25 [i_10] [i_9]) + (((((/* implicit */_Bool) var_6)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12306)))))))) ? (((/* implicit */int) arr_17 [(_Bool)1])) : (((/* implicit */int) arr_16 [i_5 + 1] [(short)7]))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_13))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (var_8)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
