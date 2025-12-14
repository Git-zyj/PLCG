/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39169
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) (~(-2147483630)));
                        arr_10 [9LL] [i_1] [0LL] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned short) -8207595054410103020LL));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (2147483647))));
    }
    /* LoopSeq 1 */
    for (int i_4 = 4; i_4 < 23; i_4 += 4) 
    {
        arr_13 [i_4] &= ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_11 [i_4 + 1])), (948353987U))) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_4 + 1]), (arr_11 [i_4 - 2])))))));
        arr_14 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((((/* implicit */long long int) 2013265920U)) - (-8306658147647691084LL))) : (((/* implicit */long long int) -2147483643))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) max(((-((~(((/* implicit */int) arr_11 [i_4])))))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_4 + 1])), ((unsigned char)248))))));
        arr_16 [i_4] |= ((/* implicit */int) min((((((/* implicit */_Bool) arr_12 [i_4 - 4])) ? ((+(9018516015674939116LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned char)194))))))), (((/* implicit */long long int) 948353987U))));
        arr_17 [i_4] [i_4] = (~(((/* implicit */int) max(((short)12770), ((short)-4977)))));
    }
}
