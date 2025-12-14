/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203250
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-65)))), (((/* implicit */int) ((short) 3717556106U)))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (var_12))))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)38))))))), (max((((unsigned int) var_8)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))))));
                var_17 = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))), (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) / (91965336U)))) ^ (arr_1 [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_18 = max((((/* implicit */long long int) (~(63)))), (var_7));
                /* LoopNest 3 */
                for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_19 += max((max((max(((short)-1), ((short)27240))), ((short)1))), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_4 [i_2] [i_3])))))));
                                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-24)), (arr_14 [i_5] [(unsigned short)4] [i_6 - 1] [(_Bool)0] [i_6] [i_6]))))) / (max((((/* implicit */unsigned long long int) arr_14 [i_3] [(signed char)5] [i_6 + 1] [i_6] [i_6] [i_6])), (arr_12 [i_6] [i_6] [i_6 + 1] [i_6] [i_6] [i_6])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
