/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47503
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
    var_14 = ((((/* implicit */_Bool) -6387842205851769327LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (-2320663253110386073LL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */unsigned char) (_Bool)1);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-11112))))))), (min((((/* implicit */unsigned long long int) max(((short)11117), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)96)) ? (20ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_10 [0U] [(signed char)20] [21U] [0U] |= ((/* implicit */unsigned int) (((_Bool)1) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11117)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11118))))), (17780158054445392254ULL))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (0U)))) ? (18446744073709551595ULL) : (max((7ULL), (((/* implicit */unsigned long long int) (signed char)11))))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 3) 
    {
        var_17 |= ((/* implicit */unsigned char) 0U);
        arr_14 [(signed char)0] [(_Bool)1] = ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned long long int) (short)-4313)), (15ULL))), (((/* implicit */unsigned long long int) min((2147483647U), (((/* implicit */unsigned int) (signed char)31))))))), (max((((/* implicit */unsigned long long int) min((146083023U), (((/* implicit */unsigned int) (signed char)39))))), (8ULL)))));
    }
}
