/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236248
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [6ULL] [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_1] [i_3])) != (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_3]))))));
                            arr_12 [i_0] [9ULL] [i_2] [9ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) | ((~(((arr_1 [i_1]) ? (arr_0 [i_0]) : (var_14)))))));
                            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) arr_9 [i_1] [i_1])), (var_7))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)4171)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5)))))))) ? (var_15) : ((~((~(var_8)))))));
    var_19 |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_0)));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                var_20 -= ((/* implicit */signed char) var_3);
                arr_17 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4] [i_4]))))) ? (((/* implicit */int) ((var_2) <= (((/* implicit */int) arr_14 [i_4] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
            }
        } 
    } 
}
