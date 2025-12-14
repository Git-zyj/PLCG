/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232416
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
    var_15 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)-26331))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : (min((var_7), (((/* implicit */long long int) var_14)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            {
                arr_5 [(signed char)10] [0U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [2LL] [i_1])) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (var_4))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] [i_1 - 1] [i_1 - 2] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) var_4)))))))) * (var_14));
                            var_16 = ((/* implicit */unsigned int) (~(18446744073709551615ULL)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (+(var_13))))) && (((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (signed char)108)))))))))));
            }
        } 
    } 
}
