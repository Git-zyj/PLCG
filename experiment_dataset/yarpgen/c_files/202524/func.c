/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202524
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) 10854759113240500063ULL);
        var_11 = ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) arr_1 [i_0] [i_0])));
        var_12 = ((/* implicit */unsigned short) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)8] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    arr_10 [(_Bool)1] [i_2] [i_3] |= (short)1714;
                    var_13 |= ((/* implicit */int) 7591984960469051569ULL);
                    arr_11 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (10854759113240500067ULL)));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((10854759113240500078ULL) % (((/* implicit */unsigned long long int) var_2)))) > (15882821028663984040ULL))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)31952)), (7591984960469051549ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)6] [i_1]))) : (((7591984960469051538ULL) | (((/* implicit */unsigned long long int) arr_8 [(signed char)22])))))))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        var_15 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) != (arr_0 [i_4] [i_4])));
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_4] [(short)12])) || (((/* implicit */_Bool) arr_6 [i_4] [i_4]))));
    }
    var_17 ^= ((/* implicit */unsigned long long int) 4294967295U);
}
