/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54805
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
    var_15 = ((/* implicit */short) var_6);
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_13)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = (~(((((/* implicit */unsigned int) -642574643)) & (2456737648U))));
                    var_18 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */int) ((2456737648U) >= (1838229647U)));
                                arr_12 [i_0] [i_1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_11)))))))) % ((+(min((((/* implicit */unsigned long long int) var_14)), (var_7)))))));
                                arr_13 [i_0] [1LL] [6] [i_2] [i_0] = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((arr_4 [i_1]) - (var_14)))) ? ((-(((/* implicit */int) var_5)))) : (((arr_0 [i_1]) + (((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
    var_21 = ((unsigned char) ((long long int) var_3));
}
