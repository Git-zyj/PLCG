/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244589
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
    for (int i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) (~((-(var_0)))));
        var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_2 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */short) arr_0 [i_1 - 1]);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((var_0), (((/* implicit */unsigned long long int) -1627892617142954870LL)))) << (((/* implicit */int) arr_10 [i_1 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (var_9)))))) : (((((/* implicit */_Bool) ((arr_3 [i_1]) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */short) (signed char)-101)))))) : (((((/* implicit */long long int) -1555241954)) + (var_7)))))));
                    var_15 -= ((/* implicit */unsigned long long int) max((max((((((/* implicit */int) arr_3 [i_2])) <= (((/* implicit */int) (unsigned char)219)))), (((((/* implicit */int) arr_10 [i_2])) != (arr_9 [(signed char)16]))))), ((!(((/* implicit */_Bool) arr_1 [i_1 + 1]))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned short) (-(arr_0 [i_1 + 1])))))));
        var_17 -= ((/* implicit */unsigned short) arr_9 [10ULL]);
        var_18 &= ((/* implicit */long long int) ((max(((~(var_3))), (((/* implicit */unsigned long long int) var_2)))) < (((/* implicit */unsigned long long int) 0U))));
    }
    var_19 = ((/* implicit */_Bool) var_8);
}
