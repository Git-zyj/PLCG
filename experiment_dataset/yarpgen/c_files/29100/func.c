/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29100
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
    var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)22)), (var_6)))) + (min((((/* implicit */unsigned long long int) var_11)), (var_1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) var_3))))), ((-(var_1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_1] [6U] [i_0] = ((/* implicit */unsigned char) min((((max((var_1), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_1])))) | (18446744073709551609ULL))), (((/* implicit */unsigned long long int) ((int) ((unsigned char) arr_0 [i_0] [0ULL]))))));
                var_15 = ((/* implicit */long long int) arr_1 [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_2] [i_3 + 2] [i_3] [i_3])) & (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) arr_7 [i_0] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3]))));
                            var_17 = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
}
