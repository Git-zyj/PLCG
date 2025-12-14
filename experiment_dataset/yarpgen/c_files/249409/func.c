/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249409
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
    var_10 ^= ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) var_9)))));
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
    var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_2)) % (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_13 = ((((/* implicit */int) (unsigned char)47)) < (((/* implicit */int) (_Bool)1)));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((int) ((((/* implicit */int) arr_14 [i_0])) % (var_6)))), (((/* implicit */int) ((short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_2)))))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) > (var_8)))) & (((/* implicit */int) ((((/* implicit */int) var_9)) < (var_7))))))), ((-(min((((/* implicit */unsigned long long int) var_4)), (var_1)))))));
                var_16 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
