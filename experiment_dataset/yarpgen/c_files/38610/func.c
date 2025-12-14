/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38610
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
    var_20 = ((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) ((5ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) <= (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (signed char)64))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        var_22 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)5)) > (((/* implicit */int) var_9)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_23 |= var_11;
        var_24 &= ((/* implicit */int) ((((3745411950U) < (arr_3 [i_1]))) ? (arr_3 [i_1]) : (3745411950U)));
        var_25 ^= ((/* implicit */long long int) 3599904957U);
        arr_5 [2ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) <= (((16037574014517363620ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))));
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) (_Bool)1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (arr_6 [i_3] [i_2]) : (arr_9 [i_2] [i_3])));
            var_28 &= ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3])) * (((/* implicit */int) arr_4 [i_3]))))) : (((unsigned int) 18327745593527272184ULL)));
        }
    }
}
