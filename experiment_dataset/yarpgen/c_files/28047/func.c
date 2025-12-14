/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28047
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [(unsigned short)5] [7ULL] = ((/* implicit */unsigned long long int) var_5);
                    var_15 = (((!(((/* implicit */_Bool) ((var_4) ? (arr_7 [i_0] [i_2]) : (((/* implicit */unsigned long long int) arr_1 [(short)0]))))))) ? (((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)126))))) % (min((((/* implicit */long long int) var_5)), (var_11))))) : (((((/* implicit */_Bool) var_1)) ? (max((var_11), (arr_4 [i_0] [(unsigned char)1] [(unsigned char)1]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_9)) : (arr_4 [i_0] [(signed char)5] [i_2]))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) 28U);
                    arr_10 [3LL] [i_1] [(unsigned char)9] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126))))) ^ ((((_Bool)1) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (signed char)126))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_6);
}
