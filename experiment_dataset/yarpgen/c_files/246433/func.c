/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246433
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
    var_14 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_9))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)7])) ? (((/* implicit */long long int) ((arr_4 [i_0] [i_1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) : (arr_3 [i_1] [i_0])))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) var_11))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) / (-8531579661283213324LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176)))));
            var_16 = ((/* implicit */int) ((min((((/* implicit */unsigned int) min(((unsigned short)22551), ((unsigned short)22551)))), (max((((/* implicit */unsigned int) (short)32767)), (4294967295U))))) >> (((arr_4 [i_0] [i_0] [i_1]) - (319532739U)))));
        }
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (3731819770U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_6))));
        var_19 = ((/* implicit */unsigned int) 1250242747);
        var_20 = ((/* implicit */unsigned int) arr_5 [i_2]);
        var_21 = ((/* implicit */signed char) ((arr_6 [i_2]) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_6 [i_2]))));
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((((/* implicit */unsigned int) (signed char)-114)), (4294967283U))))))));
}
