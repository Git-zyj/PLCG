/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210291
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((var_7) / (((/* implicit */unsigned long long int) ((337320920U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) var_10)))))))))))));
    var_18 = (-(5947303023439855291ULL));
    var_19 *= ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 &= ((/* implicit */unsigned char) (+(2147483626)));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(var_9))))));
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_11)) << (((/* implicit */int) var_9)))));
                }
            } 
        } 
    } 
}
