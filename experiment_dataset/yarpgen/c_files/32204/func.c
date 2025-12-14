/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32204
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
    var_12 = min((((/* implicit */long long int) (short)-7390)), (max((((/* implicit */long long int) (short)-7409)), (var_3))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_1 [i_1 + 4] [i_1 - 3]))));
                arr_6 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1 + 4] [i_1 + 3]);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_2] [i_4])))) ? (((/* implicit */int) (short)24722)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 - 1])))))));
                                arr_14 [i_0 + 1] [(unsigned char)12] [i_2] [i_2] [i_4] &= ((/* implicit */unsigned short) (short)20173);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 14; i_5 += 4) 
    {
        for (long long int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    arr_22 [i_5] [i_6] [(short)10] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_20 [i_5]))));
                    var_15 = ((/* implicit */long long int) ((short) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)-3258))))) + (((/* implicit */int) (short)-7421)))));
                    var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (arr_18 [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 4; i_8 < 13; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) arr_19 [i_8 - 4]);
                                var_18 = ((/* implicit */unsigned short) min((var_18), (arr_17 [i_7] [i_5 + 1])));
                                arr_28 [i_5] [i_6] [i_7] [7LL] [i_5] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (short)0)) >> (14LL)));
                                var_19 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) 7843993607822213942LL)))) ? (((((/* implicit */int) arr_21 [i_6 + 1] [i_8] [i_8 + 1] [i_9])) | (((/* implicit */int) arr_20 [i_8])))) : (((/* implicit */int) ((short) -2428089872102207710LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
