/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238156
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) var_14);
            arr_8 [0LL] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)42377)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) : (3734238887211734281ULL)));
            arr_9 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)3)) ? (((((/* implicit */_Bool) var_2)) ? (var_6) : (arr_5 [12U] [i_1 - 2] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (-6770760833980106003LL));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_12 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((var_2) & (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7444)))));
            arr_13 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (7616391117353075351LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-101))))) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
            var_15 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned long long int) var_6)))));
            var_16 = ((/* implicit */long long int) ((arr_2 [i_0] [i_2]) << (((/* implicit */int) (unsigned char)15))));
            arr_14 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        }
        var_17 = ((/* implicit */short) var_11);
        var_18 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) 5917909384740597899LL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))));
    }
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24631)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
}
