/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49240
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
    var_16 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0 - 1] [i_0 + 3] = ((/* implicit */int) (!((_Bool)0)));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) / (-6546435800556586033LL)));
        var_18 = ((/* implicit */_Bool) (((~(1936598112352782239LL))) * (((/* implicit */long long int) 0U))));
        var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))));
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) 18446744073709551597ULL);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [i_2] = ((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)104)))))));
                    var_20 -= ((/* implicit */signed char) (~((~(max((((/* implicit */long long int) arr_9 [(_Bool)1] [i_2] [i_1])), (9223372036854775807LL)))))));
                    var_21 = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_4 + 2])) - (((/* implicit */int) arr_7 [i_4])))))));
        var_23 += ((/* implicit */unsigned int) var_7);
    }
    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) 1139849788U)) != (var_8)))) == (min((((/* implicit */int) (signed char)-32)), (0)))))), (min((((/* implicit */unsigned long long int) (signed char)1)), (29ULL)))));
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (11U))))));
}
