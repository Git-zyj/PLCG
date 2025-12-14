/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196630
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = max((((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_14))))), (((/* implicit */unsigned int) ((unsigned char) arr_3 [i_1]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) var_9)) ^ (var_3))) % (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_14)), (1777087303U)))))))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0])) : (-550323227))) * (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_8 [i_1] [i_0])))), ((-(((/* implicit */int) (unsigned char)22))))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) (unsigned char)32))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_14)))))) : (2972034588253971942ULL));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)236)))))) & (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)216)) >= (((/* implicit */int) (unsigned char)19)))))))));
}
