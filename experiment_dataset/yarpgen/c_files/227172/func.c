/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227172
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned long long int) -608934705)), (0ULL))));
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 95394425U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                var_13 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-105))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_5 [i_0] [i_1]))))) : (min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) var_2))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16465772284991208951ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-122))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_7))))) <= (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_2);
}
