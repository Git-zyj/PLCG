/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241910
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
    var_10 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) var_5))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = (~(((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */short) var_1);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned long long int) ((signed char) var_7));
                    arr_13 [i_2] [i_1 - 1] [i_3] [i_3] = ((/* implicit */signed char) var_4);
                }
            } 
        } 
        var_12 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1 - 1]))) < (arr_1 [i_1 - 1])));
    }
    for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((unsigned long long int) (~(((var_6) ^ (var_0))))));
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) var_4);
            var_15 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)-32754)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        }
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 266287972352LL)) ? (((/* implicit */unsigned long long int) -3080020482149238687LL)) : (320920755951563026ULL)));
        var_17 |= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_14 [i_4 + 1] [i_4]), (((/* implicit */unsigned char) var_1)))))))) + (((/* implicit */int) arr_6 [i_4 - 1] [i_4] [i_4 + 1]))));
        arr_20 [i_4] = ((/* implicit */unsigned long long int) min((arr_4 [i_4 + 1]), (((((/* implicit */_Bool) arr_15 [i_4 + 1])) ? (arr_4 [i_4 + 1]) : (arr_4 [i_4 - 1])))));
    }
}
