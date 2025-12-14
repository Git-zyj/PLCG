/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45217
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
    var_15 = ((/* implicit */_Bool) var_7);
    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
    var_17 = ((/* implicit */unsigned long long int) (short)32767);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 = min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (-1671798585694138837LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_1))), (min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32760)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_7))));
                                var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 6170530129766669892LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (10199682274938605938ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_4);
}
