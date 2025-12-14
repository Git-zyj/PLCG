/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190761
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
    var_15 = ((/* implicit */unsigned short) var_12);
    var_16 = ((/* implicit */unsigned short) var_3);
    var_17 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned int) (~(var_11))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_4)) : (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = -956620911;
                arr_7 [i_0] [i_0] [(unsigned short)10] &= ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)6938))))), ((+(arr_3 [(unsigned char)12] [i_1 - 1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min(((unsigned short)6935), ((unsigned short)31672)))), (((arr_10 [i_1 + 2] [i_0] [i_2] [i_0]) >> (((((/* implicit */int) (unsigned short)31667)) - (31661)))))));
                            var_20 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) (unsigned short)6926)), (arr_10 [i_0] [i_0] [i_0] [i_1 + 3])))));
                            var_21 &= ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 3] [i_1 - 1]))) != (2271043459U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
