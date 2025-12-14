/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4357
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
    var_10 = ((/* implicit */short) var_5);
    var_11 = ((/* implicit */int) (unsigned short)682);
    var_12 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) <= (((/* implicit */int) arr_0 [i_1 + 2] [15LL]))))))))));
                            arr_13 [16LL] [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */int) max((((unsigned short) arr_2 [i_0])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)183)))))))) > ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0])), ((unsigned char)183))))))));
                            var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (max((min((((/* implicit */unsigned short) (unsigned char)72)), (var_2))), (((/* implicit */unsigned short) arr_1 [i_3]))))));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(max((((/* implicit */int) arr_10 [i_1 + 2] [i_2] [i_2])), (var_9))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            arr_20 [i_1] [i_0] = var_3;
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2])) ? ((-(((/* implicit */int) arr_14 [i_1] [i_5])))) : ((+(((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) var_3))))))));
                            var_17 = ((/* implicit */signed char) var_1);
                            arr_21 [13] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 1684965758)) : (var_8))), (((/* implicit */long long int) (~(599218149U)))))), (((/* implicit */long long int) (~(((/* implicit */int) min(((short)-23858), (((/* implicit */short) (signed char)-89))))))))));
                            var_18 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned char)32))))))), ((~(var_0)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
