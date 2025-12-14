/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37779
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_4))));
    var_20 = ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_2] [i_2]))) ? (((3301165621U) + (((/* implicit */unsigned int) (-(arr_6 [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (short)32767)))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((-8729523906430058374LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) || (((/* implicit */_Bool) ((((((/* implicit */long long int) arr_6 [i_2] [i_0] [i_0])) | (127LL))) * (((((/* implicit */long long int) ((/* implicit */int) (short)32767))) / (8392086406712397338LL)))))))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_1])) ^ (-8392086406712397338LL)))))))));
                }
            } 
        } 
    } 
}
