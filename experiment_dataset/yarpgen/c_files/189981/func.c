/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189981
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
    var_10 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) 2413773246U)) ? (1881194056U) : (((/* implicit */unsigned int) var_4))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) 1830906587)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (1051389201609477228ULL))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_8);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_12 += ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [(unsigned char)18] [i_1]))));
            arr_6 [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)21)) % (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) var_4)) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (min((1881194058U), (((/* implicit */unsigned int) (_Bool)0))))))));
            var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) ((long long int) (unsigned char)177)))), (min((min((((/* implicit */unsigned int) (_Bool)1)), (103557093U))), (((/* implicit */unsigned int) arr_2 [i_1] [i_1]))))));
            arr_7 [20LL] [i_1] = min((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((((/* implicit */_Bool) 2991375361U)) ? (((/* implicit */int) (signed char)-116)) : (1830906611))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-29858)))))))));
        }
    }
}
