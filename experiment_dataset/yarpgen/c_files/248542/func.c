/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248542
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
    var_17 = ((/* implicit */_Bool) (-((-(((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
    var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) var_11)) * (((var_4) + (var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) var_9);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_8))))));
                                var_21 += ((/* implicit */_Bool) (-((+((~(((/* implicit */int) var_8))))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (((+((-(var_5))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_4))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
