/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34254
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
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
    var_20 = var_14;
    var_21 = ((/* implicit */signed char) ((unsigned long long int) (!(((_Bool) var_7)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((signed char) (+((-(arr_3 [14U] [i_3]))))));
                                arr_17 [i_0] [i_3] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (((+(((/* implicit */int) var_1)))) ^ (((((/* implicit */int) var_6)) % (((/* implicit */int) var_15))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) (!(((((unsigned long long int) var_12)) > (((unsigned long long int) var_5))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_9)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))))) != (((/* implicit */int) (_Bool)0))));
}
