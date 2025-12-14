/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216052
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
    var_15 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) (~(arr_0 [i_0] [i_0])));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((((/* implicit */int) var_14)) >> (((arr_4 [i_1]) - (6949375869573771488LL))))) : (((/* implicit */int) ((short) 4006588310987334803LL)))));
        }
        for (long long int i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8748))) * ((~(0ULL)))));
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) ((unsigned char) var_8));
        }
        var_19 += ((/* implicit */long long int) ((unsigned char) var_13));
    }
    for (short i_3 = 1; i_3 < 11; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_4 [i_3]))) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)1253))))));
        var_21 = ((/* implicit */unsigned int) var_11);
    }
}
