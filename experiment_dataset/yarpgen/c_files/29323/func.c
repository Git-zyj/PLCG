/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29323
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_7)))) * (((((/* implicit */int) var_5)) * (((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (var_0) : (((/* implicit */int) var_8))))), (var_10))))));
                    var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)220)), (16383ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_5)))) && ((!(((/* implicit */_Bool) var_1))))))))));
                    var_16 = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_9))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))))) ? (((/* implicit */int) var_8)) : ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 16776192U)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (short)-16757))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_3);
}
