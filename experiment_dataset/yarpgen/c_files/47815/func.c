/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47815
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) var_5);
        arr_3 [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) 5878045037616002881ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (8646911284551352320LL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_21 -= ((/* implicit */long long int) (unsigned short)55531);
            arr_8 [i_0] [1] [10] = ((/* implicit */long long int) var_6);
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((int) var_13)))));
            var_23 = ((/* implicit */long long int) arr_9 [(unsigned char)6] [(signed char)8]);
        }
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) min((((/* implicit */long long int) -1381152209)), (-9097027398569840777LL))));
    }
    var_24 += ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (unsigned short)1920)))) : (-685758938));
    var_25 = max(((~(((int) var_10)))), (var_2));
}
