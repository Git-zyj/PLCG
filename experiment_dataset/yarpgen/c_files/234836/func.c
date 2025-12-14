/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234836
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
    var_16 = max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21920)) - (((/* implicit */int) var_4))))) : ((+(5829889700471712246ULL))))));
    var_17 = ((/* implicit */unsigned long long int) -1155399693553020342LL);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [(signed char)9])) / (var_15))) << (((var_2) - (7801295)))));
            var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (4790835104147458042ULL))));
            var_20 = ((/* implicit */_Bool) (-(((unsigned int) var_0))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            var_21 += ((/* implicit */long long int) (!(((/* implicit */_Bool) -1))));
            arr_8 [i_0] [i_2] = ((/* implicit */long long int) (+(arr_0 [i_2])));
        }
        var_22 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((4436833023766136098ULL) <= (((/* implicit */unsigned long long int) var_2))))) <= (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-122)), ((unsigned short)12003))))))) * (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */int) var_1);
        var_24 *= ((/* implicit */short) arr_1 [i_3]);
        arr_11 [i_3] = (~(((/* implicit */int) var_10)));
    }
    var_25 = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) var_7)), (var_5))))));
}
