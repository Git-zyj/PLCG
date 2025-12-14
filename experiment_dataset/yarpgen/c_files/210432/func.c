/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210432
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_14 = ((short) min((var_0), ((~(var_5)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1 - 1] [i_0] [i_3] [i_3] = (((-(var_4))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            var_15 = ((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_9 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_3 - 1]))), ((-(((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) arr_0 [(short)9] [(short)9]);
                            var_17 |= ((/* implicit */short) (!(((_Bool) arr_14 [i_0] [i_1]))));
                            var_18 = ((/* implicit */short) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2))))), ((+(var_3)))));
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((var_9), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (var_6))))))), (83878127U)));
    /* LoopNest 2 */
    for (short i_6 = 2; i_6 < 12; i_6 += 2) 
    {
        for (long long int i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) min(((-(((long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_6] [i_7 - 1] [i_6 - 2])) & (((/* implicit */int) arr_22 [i_6] [i_7 + 1] [i_6] [i_8 + 1])))))));
                            var_22 = ((/* implicit */long long int) (_Bool)1);
                            arr_25 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) ((4211089168U) / (((/* implicit */unsigned int) ((int) var_12))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((long long int) (+(arr_20 [i_6 - 1])))))));
                            var_24 = ((/* implicit */unsigned int) ((((int) max((arr_20 [i_6]), (arr_23 [i_7])))) != (((/* implicit */int) ((arr_20 [i_6 + 1]) < (((/* implicit */unsigned long long int) ((long long int) var_3))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) arr_19 [i_6] [i_6] [i_6 - 2])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 4; i_10 < 22; i_10 += 3) 
    {
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            {
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(var_3))))));
                arr_33 [i_10] = ((/* implicit */unsigned char) (+((-(32736)))));
            }
        } 
    } 
}
