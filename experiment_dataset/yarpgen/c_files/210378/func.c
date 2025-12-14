/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210378
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 3])))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (min((((/* implicit */unsigned long long int) var_13)), (var_0))))) : (((/* implicit */unsigned long long int) max(((+(arr_1 [i_0] [i_0]))), (min(((-2147483647 - 1)), (((/* implicit */int) (short)-24570))))))));
                arr_6 [i_1 - 1] [12U] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))) ? ((-(((/* implicit */int) arr_0 [(_Bool)1] [i_1 - 2])))) : (((/* implicit */int) arr_2 [i_0] [i_1 - 2])));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) (~(var_7)))) % (var_12))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) (_Bool)1);
                            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)205)))) / (var_9)))) ? (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3 - 1]))))) : (((min((var_0), (((/* implicit */unsigned long long int) var_9)))) % (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1]))))));
                            arr_13 [(_Bool)0] [i_0] [i_0] [18ULL] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)113), (((/* implicit */unsigned char) var_1))))) ? (min((((/* implicit */long long int) arr_2 [i_2] [(_Bool)1])), (var_9))) : (((/* implicit */long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))))))))) ? (((/* implicit */unsigned int) ((int) (~(((/* implicit */int) var_5)))))) : (var_3));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((long long int) var_7));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_5))));
}
