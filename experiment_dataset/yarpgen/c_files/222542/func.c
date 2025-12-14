/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222542
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_5)), (((arr_2 [i_0 - 1]) % (var_4)))));
                    arr_9 [8ULL] [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)28)))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)32767)) % (((/* implicit */int) (short)32767))))))));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) 7057615119711212357LL)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (short)32767)));
}
