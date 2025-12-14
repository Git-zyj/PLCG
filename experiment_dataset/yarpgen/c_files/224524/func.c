/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224524
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
    var_17 ^= ((/* implicit */unsigned int) var_2);
    var_18 = ((/* implicit */unsigned short) (_Bool)0);
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 8792905463156007398LL))));
        var_21 = ((/* implicit */unsigned int) (((+(max((((/* implicit */unsigned long long int) (short)-26733)), (1636710906121217643ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((arr_3 [i_1]) << (((arr_3 [i_1]) - (1155505530U)))));
        arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1636710906121217643ULL)) ? (var_3) : (((/* implicit */int) var_5))))) & (arr_3 [i_1])));
    }
    for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) 16810033167588333978ULL);
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-((+((-(arr_8 [(signed char)20]))))))))));
    }
}
