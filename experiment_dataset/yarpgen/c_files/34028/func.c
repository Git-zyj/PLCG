/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34028
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) arr_0 [i_0 + 3] [i_0 - 1])))));
        var_19 *= ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_0 [i_0 + 1] [9ULL])) : (((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) (signed char)-17))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) (!(((arr_4 [i_1]) > (arr_4 [i_1])))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) == (((/* implicit */int) arr_5 [i_1])))))) : (((unsigned long long int) arr_4 [(signed char)17]))))));
    }
    var_22 |= ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
    var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
}
