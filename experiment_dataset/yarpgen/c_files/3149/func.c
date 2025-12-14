/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3149
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
    var_13 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (13237213639656182101ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) : (13237213639656182117ULL)));
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) | (arr_6 [i_0] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(signed char)14] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) var_10))))) : (((arr_1 [i_0] [i_1]) ^ (arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (signed char i_4 = 3; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [i_2] [(unsigned short)16] [i_4 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (min((3697806911486184361ULL), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_4])))) : (5209530434053369514ULL)))) ? ((+(13237213639656182074ULL))) : (((/* implicit */unsigned long long int) min((((((((/* implicit */int) arr_14 [i_3] [3] [i_3])) + (2147483647))) << (((var_6) - (3792773683321036359ULL))))), (((/* implicit */int) var_1)))))));
                    var_14 = ((/* implicit */unsigned long long int) arr_15 [i_4]);
                }
            } 
        } 
    } 
}
