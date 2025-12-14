/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49659
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)94))))), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) (signed char)-33)), (7526553686426173986ULL))), (((/* implicit */unsigned long long int) 1586585421)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
            {
                {
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)186)))), (max((1586585428), (((/* implicit */int) arr_12 [i_3 - 2] [i_2 - 1] [i_2 - 1]))))));
                    arr_15 [i_1] [i_1] [i_3] = ((/* implicit */short) max((max((4294967295U), (((/* implicit */unsigned int) 1586585418)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)16)))))));
                }
            } 
        } 
        var_12 = ((/* implicit */short) (-(-774207378)));
    }
}
