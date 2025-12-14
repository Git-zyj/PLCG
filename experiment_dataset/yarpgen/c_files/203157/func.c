/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203157
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-4))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_2] [(signed char)9] [i_3] = ((/* implicit */unsigned short) arr_5 [i_3] [i_2]);
                        var_20 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-47), ((signed char)51))))) != (((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_0])) ? (283947132U) : (arr_9 [i_0] [i_1] [i_2] [1LL])))));
                        arr_13 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_3])), (((((/* implicit */int) (short)3)) * (((/* implicit */int) ((((/* implicit */_Bool) 2097024U)) || (((/* implicit */_Bool) (short)3)))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)3)))))));
}
