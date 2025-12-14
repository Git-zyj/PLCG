/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208754
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
    var_16 = min((3247758051263131906LL), (((/* implicit */long long int) max((var_8), (((/* implicit */signed char) (!(((/* implicit */_Bool) 4234933658614282261ULL)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+((-(9125708585321728533ULL))))))));
                        var_18 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 14211810415095269354ULL))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) ((min((4234933658614282244ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])))) < (((((/* implicit */_Bool) 9321035488387823083ULL)) ? (var_13) : (var_9))))))));
    }
}
