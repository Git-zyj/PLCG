/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25200
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
    var_17 = ((/* implicit */unsigned char) (+(max((var_1), ((-(var_0)))))));
    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) (short)-6664));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (~(max((max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (var_0)))))));
        var_20 -= ((/* implicit */unsigned short) (+((~(var_10)))));
    }
    var_21 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > ((+(var_10))))))));
    /* LoopNest 3 */
    for (short i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        for (short i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            for (long long int i_3 = 4; i_3 < 20; i_3 += 1) 
            {
                {
                    arr_10 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)29936))));
                    var_22 = ((/* implicit */unsigned int) max((10206173433527997090ULL), (((/* implicit */unsigned long long int) (unsigned short)61779))));
                    var_23 *= ((/* implicit */unsigned short) ((long long int) (~(((long long int) var_15)))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */long long int) var_14);
                                var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_9 [i_5] [i_5] [i_5] [i_5])))))), (var_15)));
                                var_26 = ((/* implicit */short) var_15);
                                var_27 = ((/* implicit */unsigned short) ((long long int) (~(-4957687762086498444LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
