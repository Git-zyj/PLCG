/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233755
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
    var_10 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3867693847U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((long long int) var_4))) ? (3867693847U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (1301119003U) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_1 - 2])), (63))))));
                var_12 &= ((/* implicit */signed char) max((3867693847U), (((/* implicit */unsigned int) (signed char)-25))));
                var_13 -= 18436224047573573104ULL;
                var_14 = ((/* implicit */int) ((long long int) -3658762105805377816LL));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) / (3268573196018975311LL))))));
}
