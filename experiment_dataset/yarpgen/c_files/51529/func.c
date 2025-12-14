/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51529
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
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_15 &= ((/* implicit */long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) ((arr_1 [(unsigned short)0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))))));
        arr_2 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (unsigned char)125)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            arr_5 [16LL] [i_1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [17LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1400793532U)))) ? (arr_1 [12ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))))))));
            var_16 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (short)-25569)) : (((/* implicit */int) (unsigned char)125))))) : ((+(arr_1 [10ULL])))))));
        }
        var_17 = ((/* implicit */unsigned char) (short)-32765);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25582))) : (arr_1 [i_0])))))) ? (((arr_1 [i_0]) >> (((/* implicit */int) arr_0 [i_0 - 2] [18LL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0 + 2]))))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)25558)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (unsigned char)10))));
}
