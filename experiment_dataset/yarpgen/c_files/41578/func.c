/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41578
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
    var_15 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (unsigned short)22727)) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)0)))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)39))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0 + 2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4173344697U)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)40)) <= (((/* implicit */int) (unsigned short)42810)))))))) ? (((unsigned long long int) arr_5 [i_0] [i_0 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)3] [(unsigned char)3]))))) >= (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_0] [i_0])), ((unsigned char)40))))))))));
                var_16 += ((signed char) ((-8271973766173141133LL) != (((/* implicit */long long int) ((/* implicit */int) (short)9725)))));
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)22727)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_6);
}
