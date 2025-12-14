/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202676
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
    var_11 = ((/* implicit */_Bool) -1386113217);
    var_12 = (unsigned char)122;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(arr_4 [i_1]))))));
            var_14 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)122)) ? (4585568952488366606ULL) : (((/* implicit */unsigned long long int) 945216823)))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_15 = 38212291U;
                var_16 -= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned char)122))));
            }
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (signed char)94))));
            var_18 ^= ((/* implicit */long long int) var_4);
            var_19 = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)127)))) | (min((((/* implicit */unsigned int) (unsigned char)134)), (arr_1 [i_0])))))) < (((unsigned long long int) arr_8 [i_3] [i_0] [i_0])));
        }
        var_20 ^= ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((unsigned short) (unsigned char)139))))), (((/* implicit */int) min((((signed char) var_0)), (min((arr_9 [i_0] [(_Bool)1] [0U]), (var_9))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((/* implicit */unsigned long long int) ((unsigned char) min((arr_4 [(unsigned short)6]), (((/* implicit */unsigned int) (short)21809)))))), ((((-(2764884332161521591ULL))) - (((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))))))))))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(7556710462364692630ULL)))))) ? (((/* implicit */unsigned int) 1244260673)) : (max((min((4065126331U), (1353840386U))), (((/* implicit */unsigned int) ((_Bool) var_8)))))));
}
