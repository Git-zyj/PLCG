/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50711
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)64)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) min(((signed char)-84), ((signed char)-65)))))));
                            var_11 ^= ((/* implicit */unsigned char) var_2);
                            arr_11 [i_1] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [2ULL])), (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_0])), (arr_1 [i_0]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1))))));
                            var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) (unsigned char)190)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)7231)))) : ((~(((/* implicit */int) arr_3 [i_1] [8ULL]))))))) : (var_3)));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_0])))) ? (((((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (signed char)64)))) + (((/* implicit */int) arr_6 [i_0] [(signed char)6])))) : (((/* implicit */int) min((((/* implicit */signed char) ((18446744073709551615ULL) != (var_5)))), (var_2)))))))));
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (min((((/* implicit */unsigned int) var_7)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) var_6))));
}
