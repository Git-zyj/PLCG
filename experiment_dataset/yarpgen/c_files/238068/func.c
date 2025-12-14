/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238068
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 += ((/* implicit */int) (-((-(((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
                            var_12 = ((/* implicit */int) var_9);
                            var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((int) var_7)), (((/* implicit */int) var_4))))), (arr_7 [i_0] [i_1] [i_2] [i_3 - 1] [i_3] [i_3 - 1])));
                        }
                    } 
                } 
                arr_9 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) var_4));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_14 += ((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_5])), ((((_Bool)0) ? (((/* implicit */int) (unsigned short)7697)) : (((/* implicit */int) (unsigned short)35858))))));
                            var_15 = ((/* implicit */unsigned char) min(((unsigned short)29678), ((unsigned short)35857)));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((((_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_2)) - (36408)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) var_4)), (var_7))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) var_5))), ((~(var_5))))))));
}
