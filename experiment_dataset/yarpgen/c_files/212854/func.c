/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212854
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
    var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_18)), (var_5)))) ? (((unsigned long long int) (+(((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */_Bool) arr_0 [i_1 + 1]);
            var_21 = ((/* implicit */unsigned int) ((arr_1 [i_1 - 2]) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 2]))));
            var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63)))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
        }
        arr_4 [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_3 [i_0]))), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) max((min((((/* implicit */int) ((unsigned char) var_18))), ((-(((/* implicit */int) (signed char)28)))))), (((/* implicit */int) (signed char)28))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) ((_Bool) (signed char)-28))) : (((/* implicit */int) ((unsigned char) arr_11 [i_2] [i_3])))));
            arr_12 [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_10 [i_2] [i_3])) == (((/* implicit */int) arr_10 [i_2] [i_2])))) ? (((17209486646322678862ULL) << (((/* implicit */int) ((_Bool) var_14))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_3 [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (unsigned short)4094)) : (((/* implicit */int) arr_8 [i_2])))))))));
        }
    }
}
