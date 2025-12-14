/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207111
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
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) var_8));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 14993085679355807240ULL)) ? (16383LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))) ^ (((/* implicit */long long int) 0U))));
        arr_3 [i_0] = ((/* implicit */short) ((((arr_1 [i_0]) + (9223372036854775807LL))) >> (23LL)));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        arr_8 [i_1] [i_1 + 2] = ((((/* implicit */int) max((arr_4 [i_1 + 1]), (arr_4 [i_1])))) & (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (1180384782) : (((/* implicit */int) arr_4 [i_1 - 2])))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_1 - 2])) <= (((/* implicit */int) arr_7 [i_1 - 2])))) ? (((/* implicit */int) min((arr_4 [i_1 + 4]), (arr_4 [i_1 + 2])))) : (((/* implicit */int) arr_4 [i_1 + 1]))));
        arr_10 [i_1 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((-1180384760) > (((/* implicit */int) (_Bool)1)))))) ? (max((((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (0U))), (((/* implicit */unsigned int) arr_4 [i_1 + 1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5732)))))) ? (((/* implicit */int) (unsigned short)30352)) : ((+(((/* implicit */int) var_14)))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) -8720823928496083895LL);
}
