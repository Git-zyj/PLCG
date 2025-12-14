/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49017
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 |= var_4;
                var_15 = (signed char)88;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_16 &= ((/* implicit */unsigned int) max((min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) (signed char)-81))))))), (((/* implicit */unsigned long long int) var_7))));
                            var_17 = ((/* implicit */long long int) ((signed char) var_11));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((8521908846418439526ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((var_2), ((_Bool)1)))), (var_7))))));
                                var_19 = ((/* implicit */unsigned long long int) ((signed char) max((max((8521908846418439538ULL), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) 2147483629)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 &= max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) (short)11)));
}
