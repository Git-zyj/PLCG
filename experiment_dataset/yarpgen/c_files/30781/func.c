/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30781
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (((((_Bool)1) || (((/* implicit */_Bool) (signed char)77)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (14844324068103140783ULL) : (4391201612424048817ULL))))))) == (((/* implicit */int) ((((/* implicit */int) var_1)) > ((~(((/* implicit */int) arr_0 [i_0])))))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_0 [i_0]))))) == (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (4391201612424048820ULL)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((((/* implicit */long long int) (+(((/* implicit */int) (signed char)104))))) == (-4463985068913990590LL))))))));
                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 4])) && (var_16))))));
            }
        } 
    } 
}
