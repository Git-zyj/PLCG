/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42707
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) -597702225)), (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) 4294965248U))))) ? (max((((/* implicit */unsigned int) 597702216)), (4294965248U))) : (((/* implicit */unsigned int) 1373683700))))));
                        var_14 += ((/* implicit */int) ((arr_0 [(short)3]) & (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    }
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32193)) && (((/* implicit */_Bool) (~(597702252))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (var_9)));
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) (short)(-32767 - 1))))))))) < (((var_2) << (((var_9) + (5441143132756282951LL)))))));
}
