/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24632
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((_Bool) -6267330627039158876LL)))) > (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)118), (((/* implicit */unsigned char) (_Bool)1))))) <= (((int) -6267330627039158876LL)))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) -6267330627039158876LL))) ? (((((/* implicit */_Bool) -6267330627039158862LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)16)) | (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3894189982U)) ? (((((long long int) (_Bool)1)) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10179))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned short) 6267330627039158875LL)))))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_2))));
}
