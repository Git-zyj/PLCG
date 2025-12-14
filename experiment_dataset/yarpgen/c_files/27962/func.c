/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27962
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_1]))));
                var_18 |= ((/* implicit */unsigned short) min((min(((~(6941768358867569965ULL))), ((-(11504975714841981651ULL))))), (((/* implicit */unsigned long long int) arr_3 [4LL]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max(((-((-(((/* implicit */int) (short)18737)))))), (((int) var_3))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_20 |= ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) > (var_9)))), ((-(((/* implicit */int) var_2))))))) ? ((~(((((/* implicit */_Bool) var_7)) ? (268435328LL) : (-268435328LL))))) : ((-(arr_10 [i_3 + 1]))));
                    arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
