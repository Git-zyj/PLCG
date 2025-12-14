/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191482
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [(_Bool)1] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) 7LL)) : (2088326909438772563ULL))))));
                                arr_12 [i_0] [i_0] [(signed char)1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_3 [i_3] [0ULL])));
                            }
                        } 
                    } 
                    arr_13 [0ULL] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_3))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 7; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((var_3) - (5607000387153788318ULL)))))) | (((long long int) arr_11 [i_5] [i_1] [i_1])))))));
                                var_16 += ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) arr_16 [(signed char)0] [i_1] [5ULL] [i_0] [i_1] [5ULL]);
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */_Bool) var_8);
    var_19 &= ((/* implicit */long long int) 2088326909438772563ULL);
    var_20 = var_7;
    var_21 = ((/* implicit */short) min(((~(((((/* implicit */unsigned long long int) var_0)) ^ (16358417164270779053ULL))))), (((unsigned long long int) ((((var_1) + (9223372036854775807LL))) >> (((3440800292U) - (3440800290U))))))));
}
