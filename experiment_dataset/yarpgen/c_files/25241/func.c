/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25241
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
    var_15 = ((/* implicit */short) (~(var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)48167), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) min((arr_0 [i_0] [i_2]), (var_13)))) : (max((arr_4 [i_1]), (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) max((((arr_2 [i_0]) - (arr_1 [i_2]))), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) : (min((arr_6 [i_2] [i_1]), (arr_6 [1] [i_1]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_17 = arr_7 [i_0] [i_1];
                                var_18 = ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_1))))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) < (min((((/* implicit */unsigned long long int) arr_11 [i_0])), (arr_6 [9] [9]))))))));
                                arr_14 [i_4] [i_4] = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (arr_8 [i_0] [i_0] [i_2] [i_0]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))) : (max((((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3]), (((/* implicit */unsigned short) arr_11 [i_0]))))), (var_5))));
                                var_19 = ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_9 [i_0] [i_0] [i_2])) <= (((/* implicit */int) arr_11 [1])))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_9 [i_4 - 1] [i_4 + 4] [i_4 - 1]))))));
                                var_20 = var_5;
                            }
                        } 
                    } 
                    var_21 = (((-((((_Bool)0) ? (16747980524068922746ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) | (((/* implicit */unsigned long long int) (~(min((arr_5 [i_0] [i_0] [3LL]), (((/* implicit */long long int) arr_4 [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            {
                var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) ((var_4) && ((_Bool)1)))), (((((/* implicit */_Bool) arr_7 [i_6] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_10)))))));
                var_24 = ((/* implicit */long long int) var_2);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))));
}
