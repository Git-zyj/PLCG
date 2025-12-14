/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198707
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
    var_10 = ((/* implicit */signed char) (unsigned short)65527);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_11 = ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) ((_Bool) 1706686786257760593ULL))) : (min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_6)))));
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) ((_Bool) 1436507599U))), ((short)31129)))) <= ((-(((/* implicit */int) min(((unsigned short)21881), (((/* implicit */unsigned short) (signed char)8))))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((var_3) ^ (((/* implicit */int) var_0)))) | (((/* implicit */int) ((_Bool) (signed char)30)))));
                                var_14 = var_1;
                                arr_13 [8LL] [i_1] [(signed char)5] [i_1] [i_2] = ((/* implicit */signed char) (short)22725);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((int) var_3)) : ((+(((/* implicit */int) ((short) (signed char)-96)))))));
}
