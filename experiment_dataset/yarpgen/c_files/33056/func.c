/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33056
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (3542816157216484346ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) var_9)) : (var_5)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) arr_4 [i_0] [i_0]))), (arr_5 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1])) ? (14903927916493067265ULL) : (15492797342760236820ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 + 1])) ? (((/* implicit */long long int) min((8588137U), (var_6)))) : (((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_3))))))));
                var_12 = ((/* implicit */int) var_3);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_0);
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_15 &= ((/* implicit */unsigned short) (~(((int) arr_12 [i_2 + 1] [(unsigned char)12] [i_3]))));
                arr_14 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 1] [i_3] [i_3]))) : (arr_9 [i_3])));
            }
        } 
    } 
}
