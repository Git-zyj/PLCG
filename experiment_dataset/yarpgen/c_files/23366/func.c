/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23366
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) (+(-520720101)));
                    var_11 += ((/* implicit */_Bool) 520720102);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 3) 
    {
        for (short i_4 = 4; i_4 < 10; i_4 += 3) 
        {
            {
                arr_12 [i_3 - 2] = ((/* implicit */signed char) min((arr_4 [i_3] [i_3] [i_3] [i_4]), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 11ULL))))), (-520720102))))));
                var_12 -= ((/* implicit */signed char) (-(((((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 3] [i_4 - 1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1127996097U)))))))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) var_6)) : (min((arr_10 [i_3]), (((/* implicit */int) arr_1 [2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_4] [i_3]), (((/* implicit */signed char) var_8)))))) - (((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [12LL])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) (+(max((8444020479088240366ULL), (((/* implicit */unsigned long long int) var_9))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-520720103) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (!(var_3))))))) : ((~((-(((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_23 [i_5] [i_6] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */signed char) (unsigned char)184);
                            arr_24 [i_6] [i_7] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */signed char) arr_9 [i_5] [(short)9] [i_5]);
                        }
                    } 
                } 
                arr_25 [i_5] [i_5] = max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) min((2812055236U), (1127996115U)))) ? (arr_5 [6ULL] [i_6] [i_6] [6ULL]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_19 [i_5] [i_6] [i_6] [i_6])) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
