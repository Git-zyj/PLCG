/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36017
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
    var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [5LL] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_0 [i_0] [5ULL]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) -5877066250782520776LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32477))) : (6780896999505536225ULL))), (9967203675198543317ULL))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2]))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2] [i_2])) == (((/* implicit */int) arr_9 [i_2] [i_2] [i_1] [13LL]))))))))));
                    var_19 = ((/* implicit */long long int) arr_8 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) ((var_10) - (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
}
