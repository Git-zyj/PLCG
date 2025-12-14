/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243763
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min(((-(3459229779U))), (((/* implicit */unsigned int) ((int) min(((unsigned short)17464), (((/* implicit */unsigned short) var_7)))))))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (~(7693024595339764823LL))))));
    }
    for (unsigned short i_1 = 4; i_1 < 19; i_1 += 1) 
    {
        var_14 += ((/* implicit */signed char) arr_2 [i_1]);
        var_15 = ((/* implicit */unsigned char) arr_2 [i_1 + 1]);
        var_16 = ((/* implicit */unsigned char) arr_1 [i_1 + 1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_8 [10] [i_2]) : (arr_9 [i_2])));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) (+(arr_8 [i_2] [i_2])));
        var_18 += ((arr_7 [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)120))));
    }
    var_19 ^= ((/* implicit */unsigned long long int) max((((602562811U) / (max((((/* implicit */unsigned int) (unsigned short)65416)), (var_3))))), (((/* implicit */unsigned int) (+(min((-1356621155), (((/* implicit */int) var_7)))))))));
}
