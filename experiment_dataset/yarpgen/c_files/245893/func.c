/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245893
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
    var_19 = var_17;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((int) (unsigned char)138))) <= ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_2 [i_0 + 4])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) (~(min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (2147352072U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)76)))))))));
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_6 [i_0])), ((+(((/* implicit */int) (signed char)56))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-120)), (arr_10 [i_0 + 1] [(unsigned short)2]))))))) ? (min((10790605221306591855ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)122))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_23 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (short)(-32767 - 1))))));
    }
}
