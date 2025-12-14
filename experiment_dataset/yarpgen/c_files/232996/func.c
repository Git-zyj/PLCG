/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232996
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_19 = ((/* implicit */short) ((unsigned int) arr_0 [i_0 + 2]));
            arr_5 [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
            arr_6 [i_1] = ((/* implicit */_Bool) ((signed char) (short)-23957));
        }
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned long long int) var_5)))));
            var_21 = ((/* implicit */_Bool) var_11);
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_22 -= ((/* implicit */unsigned int) ((arr_3 [i_3] [i_3] [i_0 - 1]) ^ (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (short)-23957)) : (var_11)))));
            var_23 = ((/* implicit */unsigned long long int) ((short) ((_Bool) (signed char)53)));
            var_24 *= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (_Bool)1))) != (((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1]))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-98)) / (((/* implicit */int) (short)-23936)))))));
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_13 [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) max((arr_9 [i_0] [0ULL] [i_0]), (((/* implicit */unsigned char) (signed char)-32)))))))) : (arr_2 [i_0 + 2])));
        var_26 = ((/* implicit */long long int) (unsigned char)52);
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
    {
        var_27 += ((/* implicit */_Bool) -303609620);
        var_28 = ((unsigned long long int) -1417383711882600274LL);
        var_29 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65523))));
    }
    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_15))));
}
