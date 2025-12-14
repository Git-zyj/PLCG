/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214389
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))) - (min((var_3), (((/* implicit */unsigned long long int) var_13))))))));
                var_17 &= ((/* implicit */long long int) (short)-31050);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_2] [(short)16] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(arr_1 [i_2])))) - (((min((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_14))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) + (((/* implicit */int) (_Bool)1)))))))));
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (short)31028)))), (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((min((var_12), (var_11))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))))) : (arr_2 [i_1] [i_2])));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                {
                    var_19 &= ((/* implicit */unsigned short) (~(((min((var_12), (((/* implicit */long long int) arr_3 [i_3] [i_5] [i_4])))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)31049)))))));
                    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((3638230389U), (((/* implicit */unsigned int) var_7))))), ((~(arr_14 [i_5 - 1] [i_5 + 1] [i_5 + 1])))));
                    var_21 = ((/* implicit */unsigned short) ((min((var_14), (((/* implicit */unsigned long long int) 1532006927234181829LL)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_10 [i_5])))))))));
                    var_22 += ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) ((int) var_7))));
                    arr_17 [i_3] [i_3] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    } 
}
