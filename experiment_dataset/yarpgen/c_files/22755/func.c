/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22755
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0 - 4] [i_0] = ((/* implicit */int) ((unsigned char) arr_0 [i_0]));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7839)) << (((arr_0 [4U]) - (16768216495647914825ULL))))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned int) ((unsigned int) (unsigned short)52608))))));
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [(unsigned short)4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64512))) : (9019783111105515757ULL)));
    }
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57691))) ^ (var_16))), (((/* implicit */long long int) var_0))));
    var_22 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)7839)) >> (((var_7) - (746735303U)))))))) <= (((unsigned int) ((var_16) < (((/* implicit */long long int) 1833727414)))))));
}
