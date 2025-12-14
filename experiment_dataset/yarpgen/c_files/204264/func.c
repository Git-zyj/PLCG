/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204264
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */signed char) min((((int) ((((/* implicit */_Bool) arr_0 [(signed char)11])) ? (((/* implicit */int) (short)-23238)) : (((/* implicit */int) (short)23222))))), (((((/* implicit */_Bool) (short)-9756)) ? (((/* implicit */int) (signed char)89)) : (-201880282)))));
                var_13 = ((/* implicit */short) (-((((-(((/* implicit */int) (signed char)-92)))) << (((((((/* implicit */_Bool) (short)-23248)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) + (2411186236664312143LL)))))));
                var_14 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_1]))))) & ((~(((arr_3 [i_0] [i_0]) | (var_1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (short)-23238)) : (((/* implicit */int) (signed char)7)))) == (((/* implicit */int) arr_8 [i_2] [i_3]))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)85)) ? (((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1])) ? (max((((/* implicit */unsigned long long int) arr_6 [i_2])), (arr_7 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) < (arr_7 [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61)))));
            }
        } 
    } 
}
