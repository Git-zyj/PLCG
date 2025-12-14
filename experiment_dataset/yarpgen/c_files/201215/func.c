/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201215
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((var_5) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_2)))) : (var_0)));
                            arr_12 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_11);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) <= (((/* implicit */int) var_7)))) ? (((var_5) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) >= (var_8)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) 1409605033U)) ? (2234644688128594073ULL) : (((/* implicit */unsigned long long int) 2885362280U))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned short) ((1409605033U) == (1409605002U)));
}
