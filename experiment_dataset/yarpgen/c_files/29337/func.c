/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29337
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
    var_16 += ((/* implicit */unsigned int) (!((_Bool)0)));
    var_17 ^= ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */int) min((arr_1 [i_0]), (((((/* implicit */_Bool) var_11)) ? (var_8) : (arr_0 [i_0] [i_0])))));
        var_19 = ((((/* implicit */int) (unsigned short)29797)) << ((((~(((((/* implicit */_Bool) (unsigned short)35738)) ? (3236226042U) : (1058741272U))))) - (1058741243U))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) > (arr_0 [i_2] [i_1])))) : (((/* implicit */int) ((short) arr_6 [18ULL] [18ULL] [i_1])))));
            arr_7 [i_2] [i_2] [i_1] = ((/* implicit */short) min(((+(((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_2]))))), (((/* implicit */int) var_4))));
            var_21 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [4U] [i_1] [i_1]))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 635826667))))))));
            arr_8 [i_1] [i_1] [i_2] = ((((((/* implicit */_Bool) max((1644440197U), (1892088344U)))) || (((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))))) ? (((int) (~(27U)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1]))))))));
        }
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_12 [18U] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (11059224101770743395ULL)))) ? (var_9) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)29797)))))));
            var_23 *= ((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)12))))));
        }
    }
}
