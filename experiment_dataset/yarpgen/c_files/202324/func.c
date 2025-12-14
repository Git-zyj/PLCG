/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202324
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
    var_10 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10868)) << (((((/* implicit */int) var_8)) - (31290)))));
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (-(min((7129663994468481927LL), (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned short) var_2)))))))));
        var_12 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25870))) : (14369300650078563645ULL)))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-14774))));
            var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)6343)) : (((/* implicit */int) (short)14774))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_15 = ((((/* implicit */int) (unsigned short)10868)) ^ (((/* implicit */int) ((signed char) arr_6 [(unsigned short)5]))));
            var_16 = ((/* implicit */unsigned short) min((((((arr_0 [i_1]) + (((/* implicit */long long int) 2539582922U)))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3852))))), (((/* implicit */long long int) 2391332273U))));
            var_17 = ((/* implicit */long long int) (-2147483647 - 1));
        }
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1])), ((unsigned short)3852))))) | (((long long int) (-(var_1))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
        var_20 = ((/* implicit */short) var_0);
    }
}
