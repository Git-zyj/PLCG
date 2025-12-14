/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33874
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
    for (signed char i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (max((((/* implicit */unsigned short) (unsigned char)182)), ((unsigned short)53576)))))) - (((/* implicit */int) var_7))));
                    var_16 |= min((min((var_0), ((unsigned short)11960))), (((/* implicit */unsigned short) var_5)));
                }
            } 
        } 
        var_17 *= ((/* implicit */unsigned short) var_10);
    }
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)10122)) <= (((/* implicit */int) (signed char)39))))) : (((/* implicit */int) min(((unsigned char)0), (var_7)))))) : (((/* implicit */int) (unsigned short)11959))));
}
