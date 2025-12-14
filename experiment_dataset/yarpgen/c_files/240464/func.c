/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240464
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15542)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (2056941510925556454ULL)))) ? (((/* implicit */int) (short)25175)) : (((/* implicit */int) (unsigned short)65532))));
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2056941510925556454ULL)) ? (16389802562783995154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (short)-25177);
}
