/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200175
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
    var_12 = ((/* implicit */signed char) (~(((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (15985137720352344659ULL))) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((((/* implicit */int) (signed char)-13)) + (28))) - (15))))))))));
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [15ULL])) * ((-(((/* implicit */int) (signed char)-1))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((unsigned int) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)));
            var_14 = ((/* implicit */unsigned short) (+(4114417251439319224LL)));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (signed char)-1))));
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) (signed char)65))) > (((/* implicit */int) (signed char)-86))))) * (((/* implicit */int) (_Bool)1))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_5 [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [5LL]))) - (arr_2 [i_1])))))) ? (((/* implicit */int) (unsigned short)16938)) : (((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (signed char)89))))));
        }
    }
}
