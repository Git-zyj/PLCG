/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52730
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */int) ((unsigned short) arr_1 [i_1 + 3]));
            arr_7 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 - 4] [i_1 + 3]))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)6))));
            arr_12 [i_0] [1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765))) : (var_4)));
            arr_13 [i_0] = ((/* implicit */int) ((long long int) arr_1 [i_0]));
            arr_14 [i_2] = ((/* implicit */signed char) (_Bool)1);
        }
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
        {
            arr_19 [i_3] [i_0] [i_3] = ((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned char)1])) / (var_1))));
            arr_20 [0] [i_3] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_3] [i_3]))));
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_24 [i_4] = ((/* implicit */unsigned short) ((var_11) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14409))) ^ (800303805U)))) : (var_6)));
        arr_25 [i_4] [7] = ((int) ((unsigned long long int) (unsigned char)28));
        arr_26 [(_Bool)1] = ((/* implicit */unsigned char) (_Bool)0);
    }
    var_12 = ((/* implicit */unsigned char) (unsigned short)65529);
    var_13 = ((/* implicit */int) min((var_7), (var_5)));
}
