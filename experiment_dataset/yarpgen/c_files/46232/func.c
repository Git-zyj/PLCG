/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46232
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2190397133U) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned long long int) 2104570140U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((2421028332U), (((/* implicit */unsigned int) (unsigned char)253))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) (unsigned short)16382);
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [7] [(unsigned short)13] [i_2 + 1])) ? (1873938947U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [(unsigned short)10] [i_2] [i_2 - 1])))))) ? (((/* implicit */int) (unsigned short)38580)) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2] [i_2 - 1]))));
                }
            } 
        } 
    } 
    var_12 ^= ((min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) 2421028337U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) : (2174753778422186898LL))))) >> (((((((((/* implicit */_Bool) (unsigned char)253)) ? (2421028330U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >> (((((((/* implicit */_Bool) -2174753778422186899LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (5057245661896426552LL))))) - (295534U))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_10), (((3452929090042274357ULL) - (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 3462069706254306096ULL)) ? (((/* implicit */unsigned long long int) 2174753778422186898LL)) : (var_6)))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (long long int i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            {
                arr_13 [(unsigned short)9] [i_4] [i_3] = ((/* implicit */signed char) 881114127U);
                arr_14 [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((2190397133U) * (min((2104570134U), (1873938983U)))))), (3462069706254306090ULL)));
                var_14 += ((/* implicit */unsigned long long int) min((((2421028337U) << (((-722150872) + (722150879))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_4 + 1] [i_4 + 1])) ^ (((/* implicit */int) arr_2 [i_4 - 1] [i_4 + 3])))))));
            }
        } 
    } 
}
