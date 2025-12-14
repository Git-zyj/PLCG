/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38763
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)39965);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 - 1]))))) ? ((~(10549840773537068250ULL))) : (((/* implicit */unsigned long long int) min((arr_5 [i_1 - 1]), (arr_5 [i_1 - 1]))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */long long int) ((unsigned short) -6419811120194692783LL))))))));
        var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 12040241972771115779ULL)) && (((/* implicit */_Bool) 0ULL))));
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-65)) > ((+(((/* implicit */int) (signed char)114)))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_1))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) 0LL);
        var_22 -= (signed char)80;
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) * (((/* implicit */int) arr_4 [(signed char)20])))) % (((/* implicit */int) arr_9 [i_2] [i_2]))));
        arr_13 [i_2] [i_2] = ((/* implicit */signed char) var_4);
    }
    var_23 = var_15;
}
