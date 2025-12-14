/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3305
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (short)18029)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
    var_19 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((_Bool) arr_3 [i_0])))));
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(signed char)4])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((int) (_Bool)1)))))));
        var_23 ^= ((/* implicit */_Bool) ((long long int) arr_7 [(signed char)2] [i_1]));
        var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_7 [i_1] [i_1]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [2]))))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_5 [(_Bool)1]) : (((/* implicit */long long int) var_16))))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
    }
    for (long long int i_2 = 3; i_2 < 12; i_2 += 1) /* same iter space */
    {
        var_26 |= ((/* implicit */unsigned char) arr_8 [i_2]);
        var_27 = ((/* implicit */long long int) var_1);
    }
    for (long long int i_3 = 3; i_3 < 12; i_3 += 1) /* same iter space */
    {
        var_28 ^= ((/* implicit */long long int) arr_12 [i_3 + 1] [(_Bool)1]);
        var_29 -= ((/* implicit */short) arr_10 [6U]);
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 - 2])) ? (((/* implicit */int) arr_3 [i_3 - 2])) : (((/* implicit */int) arr_0 [i_3 - 2]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_3 - 3]))))) : (arr_11 [i_3 - 1])));
    }
    var_31 = ((/* implicit */short) ((var_13) ? (((/* implicit */int) ((short) (_Bool)0))) : (var_11)));
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [16U] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [(short)17]))) : (arr_16 [20U])))) ? ((+(arr_16 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [1ULL] [22ULL]))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((int) arr_15 [i_4] [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4]))))))) : (arr_14 [i_4] [i_4])));
        arr_18 [i_4] [i_4] = ((((/* implicit */_Bool) ((signed char) arr_15 [i_4] [i_4]))) ? (((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */int) ((unsigned short) arr_16 [i_4]))) : (((/* implicit */int) arr_15 [i_4] [i_4])))) : (((/* implicit */int) arr_13 [i_4])));
        var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) -6135625542080341909LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(short)24] [i_4])) ? (arr_14 [i_4] [(unsigned char)21]) : (((/* implicit */int) arr_15 [i_4] [10LL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [3]))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_15 [18] [i_4])) : (((/* implicit */int) arr_13 [i_4]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_13 [(_Bool)1]))))) ? (arr_16 [(short)23]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_14 [(short)24] [i_4]) : (((/* implicit */int) arr_15 [i_4] [24ULL]))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_16 [i_4]))))))) ? (((((/* implicit */_Bool) arr_13 [i_4])) ? ((~(((/* implicit */int) arr_13 [i_4])))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_10)));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_34 = ((/* implicit */long long int) arr_14 [i_5] [i_5]);
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_15)));
    }
}
