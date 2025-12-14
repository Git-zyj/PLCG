/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4401
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
    var_13 += ((/* implicit */unsigned long long int) (-(((max((((/* implicit */unsigned int) var_9)), (3361214697U))) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))));
    var_14 &= ((/* implicit */short) var_0);
    var_15 |= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) min(((unsigned char)177), (((/* implicit */unsigned char) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_1] [i_0] [i_0] &= ((/* implicit */unsigned long long int) 1216824169U);
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) -4701352898871943844LL)))))))))))));
            var_17 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
        }
        arr_7 [i_0] &= ((((((/* implicit */_Bool) arr_1 [i_0])) ? (4256191667363968477ULL) : (((((/* implicit */_Bool) 933752599U)) ? (((/* implicit */unsigned long long int) -7445792210745037548LL)) : (var_3))))) / ((+(max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_2))))));
    }
}
