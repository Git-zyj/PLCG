/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39287
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((var_9) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) ^ (((unsigned int) var_6)))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 56))))) : (((/* implicit */int) var_2)))))));
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) var_2);
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                {
                    arr_10 [i_3] [i_3] [i_3 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((var_4) / (arr_8 [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) var_8)), (var_5))))))));
                    arr_11 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_2 + 3]), (arr_6 [i_2 + 1]))))));
                }
            } 
        } 
    } 
}
