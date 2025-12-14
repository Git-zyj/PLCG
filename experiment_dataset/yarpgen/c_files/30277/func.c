/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30277
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_5))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 4; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_19 *= ((/* implicit */signed char) (!(((_Bool) var_8))));
            var_20 = ((long long int) var_14);
        }
        /* vectorizable */
        for (long long int i_2 = 4; i_2 < 19; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5078263267804108838LL)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (signed char)110))));
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_2 - 1])) ? (arr_6 [i_2] [i_2 + 1] [i_2 - 2]) : (((/* implicit */long long int) var_13))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned short)55455))));
        }
        for (short i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((arr_2 [i_0 - 2] [i_0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))))) ? (6050736921357469222ULL) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0])) ? (12396007152352082393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17)))))));
            arr_12 [i_0] [i_3] = ((/* implicit */unsigned char) var_17);
        }
        arr_13 [i_0] [i_0] |= ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))));
    }
    var_24 = var_4;
}
