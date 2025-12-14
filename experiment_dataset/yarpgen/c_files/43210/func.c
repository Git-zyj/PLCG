/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43210
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_14))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [(signed char)11] [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) 2861875187U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_3 [i_1] [i_1]))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -3922836251255491198LL)) == (arr_0 [(signed char)10] [(signed char)10])));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_2 [i_0]) & (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0])))))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (var_1)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 4; i_3 < 7; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_3] = ((/* implicit */signed char) (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (2ULL)))))));
                    arr_17 [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) min((arr_10 [i_3 - 4]), (((/* implicit */unsigned short) var_11))))), (arr_2 [i_4]))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (((long long int) max(((unsigned short)16470), ((unsigned short)16474))))));
}
