/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229428
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
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65526))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */int) (-((+(((((/* implicit */_Bool) (unsigned short)65526)) ? (15856064925775060169ULL) : (((/* implicit */unsigned long long int) 863168316U))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_6 [5] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
            var_22 = ((/* implicit */short) (unsigned char)23);
            var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-15125)) ? (((((/* implicit */_Bool) (unsigned short)23036)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0 + 1])) < (((/* implicit */int) (unsigned char)191)))))) < (arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
            var_25 = ((((/* implicit */int) min((arr_1 [i_2] [i_0 - 1]), (arr_1 [(unsigned short)9] [i_2])))) == (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) - (var_10))));
            var_26 *= ((/* implicit */_Bool) arr_3 [i_0]);
            arr_11 [(_Bool)1] [11] [i_2] = ((/* implicit */_Bool) (-(min((((/* implicit */int) ((unsigned short) arr_8 [i_2]))), (min((arr_9 [i_0] [i_2]), (((/* implicit */int) (signed char)-68))))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_27 = ((((/* implicit */int) var_1)) >> (((arr_9 [i_0 - 1] [8U]) - (2095822687))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) arr_9 [i_0] [(signed char)2])) : (var_0)))))))));
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */_Bool) ((arr_3 [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        var_30 ^= ((/* implicit */long long int) ((_Bool) arr_4 [i_4 + 1] [i_4] [i_4 - 1]));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [(unsigned short)10] [3LL])) < (((/* implicit */int) arr_1 [i_5] [i_5]))));
        var_31 = ((/* implicit */int) arr_3 [i_5]);
    }
    var_32 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)118)) : (var_10))), (((/* implicit */int) var_18))));
}
