/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214912
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
    var_10 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((arr_3 [i_0] [i_0] [3ULL]), (((/* implicit */unsigned int) (_Bool)1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9145449935661381876LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))) : (((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)3])) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [2U]))))))))));
                arr_6 [11U] = ((/* implicit */unsigned int) arr_0 [i_1]);
            }
        } 
    } 
}
