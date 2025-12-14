/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21598
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
    var_19 = ((/* implicit */long long int) ((signed char) var_17));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) (unsigned char)36);
                var_21 = ((/* implicit */unsigned int) ((((min((max((var_12), (((/* implicit */int) (unsigned short)60892)))), (((/* implicit */int) arr_3 [i_0])))) + (2147483647))) >> (((var_2) - (6497417543366646072ULL)))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((var_11), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)4643)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) ((var_12) ^ (((/* implicit */int) var_16))))) ? (((int) var_7)) : (((((/* implicit */int) (unsigned short)60892)) | (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_3))));
}
