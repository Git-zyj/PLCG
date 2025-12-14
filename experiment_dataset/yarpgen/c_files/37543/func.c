/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37543
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
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_1)), (var_2)));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 432345564227567616ULL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)170)), ((+(2604212743330632522ULL))))))));
                    var_17 = ((/* implicit */unsigned char) 4138466824U);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 8454881699857837183ULL)) ? (((/* implicit */int) (short)-9632)) : (((/* implicit */int) (short)(-32767 - 1)))))));
}
