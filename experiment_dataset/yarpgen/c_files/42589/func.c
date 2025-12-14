/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42589
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
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_3))))) / (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) >> (((((/* implicit */int) var_5)) - (113))))))))));
                            arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_5))))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) % (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_2)))))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) <= (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_1))))) || (((((/* implicit */int) var_7)) <= (((/* implicit */int) var_3))))))) & (((/* implicit */int) ((((/* implicit */int) var_1)) == ((-(((/* implicit */int) var_1)))))))));
    var_12 = ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))) || ((!((!(var_9))))));
}
