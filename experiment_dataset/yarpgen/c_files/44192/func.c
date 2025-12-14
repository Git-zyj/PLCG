/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44192
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((unsigned long long int) arr_1 [i_1] [i_0])) : (max((((/* implicit */unsigned long long int) -36175822)), (10858937830438900227ULL)))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (var_15)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned long long int) 36175822);
                            arr_9 [i_0] [3] [i_0] [i_3] = ((/* implicit */unsigned long long int) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-36175822)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)1))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) : ((~(10858937830438900227ULL))));
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 36175822)) ? (((int) var_8)) : (((/* implicit */int) (unsigned short)29922))));
}
