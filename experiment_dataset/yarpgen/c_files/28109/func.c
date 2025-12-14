/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28109
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) 4201814578U)) ? ((((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33139))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_0])) + (((/* implicit */int) arr_2 [i_0] [i_1]))))))) : (var_5)));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 408106234))));
                    var_17 = arr_1 [i_1 - 2];
                }
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((arr_9 [i_1 - 3] [i_1 + 2] [i_1 - 2] [i_1]) ? (((/* implicit */int) arr_9 [i_1 - 3] [i_1] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) arr_9 [i_1 - 3] [i_1 - 2] [i_1] [i_0])))));
                arr_11 [i_0] [i_1 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1] [i_1 - 1]))))) ? (min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_0] [8U] [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0] [7U] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (+(1952336956)));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (short)-1024)) / (1952336962))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-64)) ? ((((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) (unsigned short)32396)) ? (((/* implicit */int) (unsigned short)19144)) : (((/* implicit */int) (short)17236)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))));
                            var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_6)))) >> (((((((/* implicit */int) arr_12 [i_5])) & (((/* implicit */int) var_8)))) - (4493))))) << ((((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_7)) : (arr_14 [18]))))) - (3144376844U)))));
                        }
                    } 
                } 
                var_23 += ((/* implicit */long long int) (unsigned char)244);
            }
        } 
    } 
}
