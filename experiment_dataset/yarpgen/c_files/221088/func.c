/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221088
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -5654551772824869064LL))) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (short)-25115))))) : ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) ((unsigned char) (_Bool)0))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_4);
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) == (((/* implicit */int) arr_5 [i_2] [i_1]))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_3)) < ((-(((/* implicit */int) arr_3 [i_1])))))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned short) 4294967284U);
}
