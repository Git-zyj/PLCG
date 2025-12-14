/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235163
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(-2054740833)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : ((-(arr_0 [i_2]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_0 - 2] [i_2]))) ^ ((-(var_15)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)33608)) >= (1983476561)));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 2] [i_3] [i_3]))) * (arr_11 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_2] [i_0 - 2])))) ? (max((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2])), ((+(arr_1 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_15)))) : ((-(0ULL)))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 0U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            {
                arr_20 [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(0U)))) | (((long long int) ((unsigned long long int) (signed char)0)))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_19 [i_5 + 2])) ? (-2017707032396815193LL) : (((/* implicit */long long int) 4294967295U)))) + (9223372036854775807LL))) << (0ULL)));
                            arr_25 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((unsigned short) 0U))) : (((((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_7] [i_6])))))) ^ (((/* implicit */int) (unsigned short)35612))))));
                            arr_26 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47802))) * (0U)));
                            var_24 = ((/* implicit */short) min((9230098194239084563ULL), (((/* implicit */unsigned long long int) (unsigned short)16265))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    for (int i_10 = 4; i_10 < 16; i_10 += 1) 
                    {
                        {
                            var_25 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 536870911LL)) ? (864078587) : (((/* implicit */int) (signed char)127))))) >= (((((/* implicit */_Bool) min((3000239997925130451ULL), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned int) arr_28 [i_5] [i_5] [i_5 + 2])) : (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                            var_26 = ((/* implicit */unsigned long long int) arr_27 [i_10 - 1] [i_10 - 1] [4LL]);
                            var_27 ^= var_2;
                            var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5 + 1] [i_5 - 1] [i_10 - 3]))) <= (arr_27 [i_5 + 1] [i_5 - 1] [i_10 - 3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
