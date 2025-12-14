/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247856
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)30869))))) >> (((var_12) - (1417529053971712773LL)))));
                    var_16 = ((/* implicit */signed char) 6767313827345498410LL);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) ((13273480714776088941ULL) | (((/* implicit */unsigned long long int) ((unsigned int) min((var_5), (((/* implicit */unsigned short) var_6))))))));
                        var_18 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_4 [i_3] [i_2] [i_1] [i_0])), (var_1))) & (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2] [i_3])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        var_19 = var_1;
                        var_20 += ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)18663))) < (-6767313827345498412LL))))) : (max((-6767313827345498423LL), (((/* implicit */long long int) (_Bool)1))))))));
}
