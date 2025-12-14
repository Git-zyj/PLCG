/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23198
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
    var_14 = ((/* implicit */int) (((+(-1272604438))) < (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) (unsigned short)52257))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((unsigned long long int) 228832392)) << (((((long long int) var_7)) - (4210318051LL))))) : (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) (unsigned short)13279)) * (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1] [i_0])))) << (((/* implicit */int) (signed char)8))));
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (signed char)-2)) + (22)))))));
                }
            } 
        } 
    }
}
