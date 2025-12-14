/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29820
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
    var_17 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_0 [i_0]))));
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-17472)), (((unsigned int) -982182277))));
    }
    var_20 = ((/* implicit */long long int) (+(min((var_10), (((int) var_11))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            {
                arr_9 [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) 4056424986U)) / (var_14)))) || (((/* implicit */_Bool) ((arr_3 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))))) ? (((/* implicit */int) (unsigned short)54603)) : (((/* implicit */int) max((arr_2 [i_1] [i_2 + 3]), (((/* implicit */unsigned short) (_Bool)0)))))));
                var_21 = ((/* implicit */_Bool) max((max((var_10), (((/* implicit */int) arr_4 [i_2 + 1])))), (((((/* implicit */_Bool) arr_2 [i_2 + 3] [i_2 - 2])) ? (((/* implicit */int) arr_2 [i_2 - 2] [i_2 + 3])) : (((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 2]))))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_5 [i_1] [i_2 + 1]), (((/* implicit */unsigned char) (signed char)29))))) >> ((((-(((int) (unsigned short)64711)))) + (64722)))));
                            arr_15 [(_Bool)1] [i_2] [i_3] = ((/* implicit */int) arr_4 [i_2]);
                            var_23 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_8)))));
                        }
                    } 
                } 
                arr_16 [17ULL] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(min((arr_3 [i_1]), (((/* implicit */unsigned int) var_12))))))) / (arr_10 [i_1] [13] [i_2] [i_1])));
            }
        } 
    } 
}
