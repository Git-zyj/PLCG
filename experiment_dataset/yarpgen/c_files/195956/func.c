/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195956
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-9159057443856897076LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 += max((((/* implicit */unsigned long long int) var_9)), (max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-16)))), (((var_5) << (((-9159057443856897059LL) + (9159057443856897091LL))))))));
                                var_12 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) ((signed char) (short)11489))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((long long int) (short)11489));
}
