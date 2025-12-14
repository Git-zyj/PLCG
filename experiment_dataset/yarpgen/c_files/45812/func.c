/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45812
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
    var_18 = ((/* implicit */int) ((unsigned short) var_3));
    var_19 = ((/* implicit */int) (~(min(((-(var_1))), (min((var_1), (((/* implicit */long long int) var_12))))))));
    var_20 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) 2062822186)), (min((13398031689955462121ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 1]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) 5048712383754089507ULL));
        var_21 += ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))));
    }
    for (unsigned int i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) max((((int) min((var_5), (((/* implicit */unsigned int) var_7))))), ((+(((int) arr_2 [i_1]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) (~(min((arr_2 [i_1 + 2]), (arr_2 [i_1 + 2])))));
    }
    var_22 = ((/* implicit */_Bool) var_17);
}
