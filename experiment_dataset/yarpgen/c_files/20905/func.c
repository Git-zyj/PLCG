/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20905
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
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (var_6) : (var_8))) & (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_9))))), ((+(((/* implicit */int) (short)(-32767 - 1))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_12 *= ((/* implicit */long long int) ((((int) arr_3 [i_1 - 1] [i_0])) >> (((((/* implicit */int) min((arr_3 [i_1 + 2] [i_0]), (arr_3 [i_1 + 2] [i_0])))) - (45)))));
            var_13 *= ((/* implicit */long long int) arr_2 [(unsigned char)4] [i_1 + 2] [i_1 + 1]);
        }
        arr_5 [(signed char)5] = ((/* implicit */long long int) ((((((int) var_3)) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_4 [2U] [12ULL] [i_0])) < (((/* implicit */int) arr_1 [(_Bool)1]))))))));
    }
}
