/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2244
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
    var_12 = ((/* implicit */int) (+(min((((((/* implicit */unsigned long long int) var_2)) + (var_1))), ((~(var_0)))))));
    var_13 += 17086351319898077651ULL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 24; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_14 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                            arr_11 [(short)22] [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_3))));
                        }
                        var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) 3850947881U)) ? (((/* implicit */unsigned long long int) 1475895069)) : (0ULL)));
                        var_16 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) * (10821679309292406377ULL)))));
                        var_17 = ((/* implicit */long long int) var_6);
                    }
                } 
            } 
        } 
        var_18 = (+(((arr_6 [i_0]) - (((/* implicit */int) arr_10 [i_0] [i_0] [11ULL] [i_0] [i_0])))));
    }
}
