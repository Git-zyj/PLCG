/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30436
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
    var_11 &= ((/* implicit */long long int) ((unsigned short) (((!(((/* implicit */_Bool) (unsigned short)9)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49660))) : (var_7))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((var_7) / ((+(var_5))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_4))) ^ (((((/* implicit */_Bool) (unsigned short)448)) ? (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)9)))) : (((/* implicit */int) ((unsigned short) arr_0 [3LL])))))));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2 + 1] [i_4])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) var_3)))) / (((/* implicit */int) (unsigned short)47706))));
                                var_13 = ((/* implicit */unsigned short) ((840029746355430832LL) < (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            {
                                arr_21 [i_6] = ((unsigned short) (~(min((((/* implicit */long long int) arr_14 [i_0] [i_0] [(unsigned short)10] [i_0] [i_0])), (var_9)))));
                                arr_22 [i_0] [i_1] [i_1] [9LL] [i_6] [2LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_9))) || (((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1]))))) : (((/* implicit */int) ((arr_13 [i_6] [i_5] [i_2 - 1] [i_2 - 1]) > (2312359277451602079LL))))));
                                var_14 = ((/* implicit */unsigned short) max((arr_20 [i_6 - 1] [i_6 + 2] [i_6] [i_6 + 1] [i_6 + 2]), (var_9)));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((+(288230376143323136LL))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48583)))))), (1339820696900311597LL)));
                }
            } 
        } 
    } 
}
