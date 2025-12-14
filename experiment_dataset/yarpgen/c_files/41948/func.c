/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41948
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) var_10);
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(max((var_1), ((+(((/* implicit */int) (unsigned short)30144)))))))))));
                                var_19 += ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_4 - 2] [9LL] [i_4] [i_4] [i_4 - 1]))))) == ((+(((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_3] [i_0 - 1] [i_4 - 1]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [(unsigned char)0] [i_0] [(_Bool)1] = ((/* implicit */signed char) (~(-8878341448183847165LL)));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_11);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_1), (((/* implicit */int) (signed char)85)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))) ? (((((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned short)23985)))) ? (((((/* implicit */_Bool) (unsigned short)36777)) ? (((/* implicit */int) var_2)) : (856631786))) : (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_9))))))) : (max((((((((/* implicit */int) var_2)) + (2147483647))) << (((/* implicit */int) var_13)))), ((+(((/* implicit */int) (unsigned short)35405))))))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 12041542218745882162ULL))));
}
