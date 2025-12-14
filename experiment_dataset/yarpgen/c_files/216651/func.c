/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216651
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
    var_16 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_0] = ((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1]))));
                    var_17 = ((/* implicit */unsigned long long int) (~(-680772298)));
                    arr_11 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                    var_18 -= ((/* implicit */unsigned short) (~(arr_0 [i_0] [i_0])));
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    arr_14 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((signed char) -680772295)))))));
                    arr_15 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (-(arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(min((arr_5 [i_3]), (arr_5 [i_3])))))))))));
                    arr_16 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0]);
                }
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)199)) + (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (-(arr_13 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (arr_12 [i_0] [i_0]))))) : (min((((/* implicit */unsigned int) var_1)), (arr_12 [i_0] [i_1])))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) && ((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))));
                arr_17 [i_1] [i_1] = ((min((((/* implicit */long long int) ((unsigned int) var_12))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */long long int) arr_6 [i_0] [i_0])) : (arr_7 [i_0] [i_0] [i_0]))))) - (((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])), ((+(-680772303)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((((var_3) | (((/* implicit */int) var_11)))) >> (((min((var_12), (((/* implicit */unsigned long long int) var_1)))) - (10105ULL))))) == ((~(((int) var_5))))));
}
