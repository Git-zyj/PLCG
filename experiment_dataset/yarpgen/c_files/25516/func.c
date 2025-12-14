/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25516
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(signed char)5] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-1)))) % (4294967295U)))), (5629047506470505301LL)));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(2249778711944747695ULL)));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) -5629047506470505272LL))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_2))));
                arr_11 [i_3] [i_3] [i_2] = ((/* implicit */signed char) min((((-5629047506470505264LL) / (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) var_1))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_3 - 1]))) ? (arr_8 [i_2]) : (arr_7 [i_2]))))));
                var_13 = ((/* implicit */long long int) 6290605507647598997ULL);
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1624890339)) ? (((arr_9 [i_2] [i_3] [i_2]) - (((/* implicit */unsigned long long int) 3385832208U)))) : (((/* implicit */unsigned long long int) min((5629047506470505271LL), (((/* implicit */long long int) (unsigned char)2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)40))))) - (var_7)))));
            }
        } 
    } 
}
