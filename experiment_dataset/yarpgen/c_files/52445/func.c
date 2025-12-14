/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52445
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
    var_16 += ((/* implicit */unsigned char) min((396707766), (((/* implicit */int) (unsigned short)48786))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (signed char)16);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_5)))))));
                                var_19 *= ((/* implicit */signed char) ((unsigned long long int) (~(7689475124460794768LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
