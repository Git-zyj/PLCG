/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19976
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
    var_17 = 6ULL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) 8191ULL);
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((12810590526720327506ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (1394930294U) : (1394930312U))))));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((3614216156U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ^ (((unsigned int) arr_0 [10ULL])))))));
            var_20 = ((/* implicit */_Bool) ((arr_5 [i_0 - 2] [i_0 - 2] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_0])))));
            var_21 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) (_Bool)1)));
            arr_8 [3ULL] [i_0] = ((_Bool) ((869454161U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
        }
        var_22 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [2ULL])) ^ (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1]))));
    }
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_9))));
    var_24 = ((/* implicit */unsigned long long int) ((unsigned int) min((((var_1) ? (var_13) : (var_13))), (var_15))));
}
