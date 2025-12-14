/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238406
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
    var_18 -= ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0])) : (((/* implicit */int) (short)(-32767 - 1)))));
        arr_2 [i_0] = arr_1 [i_0] [i_0];
    }
    for (long long int i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            arr_7 [i_2] = ((/* implicit */short) 17169498674586212811ULL);
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_2])) : (((/* implicit */int) arr_1 [i_1 - 2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_1 + 1] [i_2]), (arr_1 [i_1 - 2] [i_2]))))) : (((((/* implicit */_Bool) (unsigned char)142)) ? (17169498674586212797ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56)))))));
            var_21 = ((/* implicit */long long int) min((var_21), (17179869183LL)));
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) ((((arr_5 [i_2]) == (arr_5 [i_2]))) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (((((/* implicit */int) arr_6 [i_2])) ^ (((/* implicit */int) arr_6 [i_2]))))));
        }
        arr_9 [i_1] = ((/* implicit */short) (_Bool)1);
    }
    var_22 = ((/* implicit */short) (((-(1277245399123338799ULL))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 8U)) || (((/* implicit */_Bool) (unsigned char)144))))))))));
    var_23 = ((/* implicit */int) var_12);
}
