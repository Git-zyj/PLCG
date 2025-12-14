/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221038
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 234881024U)) & (((((/* implicit */long long int) 234881024U)) & (-1597530182260934603LL)))))) ? (((/* implicit */unsigned long long int) min(((~(234881024U))), (((/* implicit */unsigned int) ((1597530182260934606LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)67))))))))) : ((((~(14700970967150848422ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((unsigned short) (((~(1597530182260934606LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (signed char)21)))))))))));
                    var_13 = (-(((((/* implicit */int) ((((/* implicit */long long int) 1592857820U)) == (-1597530182260934607LL)))) - (((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)6)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((unsigned long long int) var_5));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) -651882113700704027LL))) & ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))) : (5634252765876029335ULL)))))) ? ((-(((/* implicit */int) ((_Bool) (signed char)62))))) : (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_3)) - (103)))))));
}
