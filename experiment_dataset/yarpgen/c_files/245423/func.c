/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245423
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (3324106890764043925ULL)))) ? (((/* implicit */long long int) ((var_17) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (((var_16) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45551))))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_12))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)58)), (arr_5 [i_2] [i_2])))) ? (((/* implicit */unsigned int) var_8)) : (1295268198U))) >> (((((unsigned int) 3507799333U)) - (3507799333U)))));
        arr_7 [(signed char)5] = ((/* implicit */int) 2996614288U);
        var_21 = ((/* implicit */unsigned int) ((((arr_5 [i_2] [i_2]) << (((1726157475U) - (1726157475U))))) << (((((0LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)90)) ? (900179328U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25849)))))))) - (900179328LL)))));
    }
    var_22 += ((/* implicit */unsigned long long int) var_0);
    var_23 = ((/* implicit */int) (signed char)-124);
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_15))))))));
}
