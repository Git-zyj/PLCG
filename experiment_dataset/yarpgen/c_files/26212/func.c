/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26212
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) ((arr_3 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [(unsigned char)13] [i_0] = ((/* implicit */unsigned char) (signed char)0);
                            var_18 = ((/* implicit */unsigned short) (_Bool)1);
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(arr_5 [i_0] [i_2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))))) ? (((unsigned int) min((((/* implicit */unsigned int) (unsigned short)51613)), (var_13)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)38))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((int) (~(((var_16) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)0)))))));
    var_21 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (-(var_10))))))));
}
