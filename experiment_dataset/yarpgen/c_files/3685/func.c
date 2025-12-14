/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3685
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
    var_20 = ((/* implicit */_Bool) var_6);
    var_21 ^= ((/* implicit */signed char) 9223372036854775780LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [20])) > ((~(((/* implicit */int) (unsigned short)41247))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 + 1])) < (arr_10 [(signed char)8] [i_0] [i_0] [i_0 + 1])))) ^ (((((/* implicit */_Bool) var_6)) ? (arr_10 [i_0] [i_0] [(unsigned short)20] [i_0 + 1]) : (var_12)))));
                            var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -765658353)), (6416681189191753703ULL)));
                            arr_13 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned short) (+((~(arr_0 [i_0 + 2] [i_0 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23; i_4 += 2) 
                {
                    for (signed char i_5 = 3; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) var_8);
                            arr_19 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (~(arr_10 [i_0 + 1] [23] [i_5 - 2] [i_4 + 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned short i_7 = 2; i_7 < 20; i_7 += 3) 
                    {
                        {
                            arr_26 [4ULL] [4LL] [i_6] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [i_7 - 1])), (arr_11 [i_0] [17LL] [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)116))))) : (((((/* implicit */_Bool) arr_11 [i_7] [i_6] [i_1] [(signed char)18])) ? (arr_11 [15U] [i_6] [(signed char)19] [i_0 + 1]) : (var_10)))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_17)), (arr_12 [i_7 + 2] [i_0 - 1])))) ? (arr_0 [i_1] [i_0]) : (arr_14 [i_7] [i_1] [i_0])));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(((var_6) >> ((((~(((/* implicit */int) var_13)))) + (4))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
