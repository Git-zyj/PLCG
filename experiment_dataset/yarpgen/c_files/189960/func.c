/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189960
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
    var_13 = ((/* implicit */short) (-(min((((/* implicit */int) max(((unsigned short)32829), (((/* implicit */unsigned short) (signed char)-100))))), ((~(((/* implicit */int) var_0))))))));
    var_14 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */signed char) min((((/* implicit */long long int) arr_1 [i_1])), (min((7342942536865071278LL), (((/* implicit */long long int) (signed char)106))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) var_7);
                            var_17 -= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) / (arr_3 [i_1] [i_1]))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (short)17325))) / (arr_10 [i_1] [i_1] [i_2] [i_0 + 1])))))));
                            var_19 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((arr_8 [i_0] [i_2]), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) (unsigned char)128)))))), (((/* implicit */int) ((signed char) arr_10 [i_0] [11] [i_3 - 1] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((short) ((signed char) var_10)));
}
