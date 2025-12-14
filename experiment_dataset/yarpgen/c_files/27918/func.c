/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27918
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
    var_20 = ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned int) (unsigned short)0)), (3535951883U)))))) : (((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) var_18))))) ? (((((/* implicit */_Bool) var_15)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : ((~(var_19))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((max((arr_0 [i_0 + 1]), (arr_6 [i_0] [i_0]))) % (((/* implicit */unsigned long long int) max((-3643636822598777300LL), (((/* implicit */long long int) 501209072U))))))) <= (var_10)));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) var_3)), (max((((/* implicit */short) arr_8 [i_0] [i_0] [i_2])), (var_8)))))) ? (((((8796093022206LL) < (((/* implicit */long long int) 3535951883U)))) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((3535951887U) >> (((18446744073709551615ULL) - (18446744073709551597ULL))))))));
                    var_23 = ((/* implicit */_Bool) max((arr_9 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) || (((/* implicit */_Bool) max((3535951883U), (((/* implicit */unsigned int) var_5))))))))));
                    var_24 = ((/* implicit */unsigned short) ((3535951883U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                }
            } 
        } 
    } 
}
