/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246020
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1] [i_1 - 1])))) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28672)) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_2])) : (((/* implicit */int) arr_2 [i_1] [i_1 - 1] [i_2])))))));
                    var_21 += ((/* implicit */unsigned short) (-2147483647 - 1));
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((min((var_8), (((/* implicit */unsigned int) arr_1 [i_1 + 1] [(signed char)9])))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            {
                arr_15 [i_3] [17ULL] = ((/* implicit */int) ((unsigned short) arr_9 [i_4]));
                var_22 -= ((/* implicit */unsigned long long int) arr_8 [i_3] [i_4]);
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_8))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_18 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_7]))))));
                                var_25 = (-((-((+(arr_21 [i_7]))))));
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6 - 1] [i_6 - 2] [i_6 + 1] [7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))) : (var_0)))) ? (max((arr_19 [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_6]), (((/* implicit */int) var_15)))) : ((~(((/* implicit */int) var_13)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
