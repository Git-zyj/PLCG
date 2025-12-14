/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194325
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
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) ((int) arr_3 [i_0]))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) var_0)))));
                                var_17 = ((short) (!(((/* implicit */_Bool) arr_5 [i_0]))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) (short)22962)) - (((/* implicit */int) arr_6 [i_2] [i_1])))) ^ (((/* implicit */int) (signed char)127)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] = ((/* implicit */unsigned char) max((((var_6) ? (max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_8 [9U])))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) min((max((((/* implicit */int) var_16)), (arr_2 [i_5]))), (((/* implicit */int) var_4)))))));
                                var_19 = ((/* implicit */_Bool) (+((-(((unsigned long long int) (signed char)127))))));
                                arr_23 [i_1] [i_5] [8U] [i_1] &= ((/* implicit */unsigned int) (+(((long long int) (-(((/* implicit */int) arr_15 [i_0] [i_7] [i_1])))))));
                                var_20 = ((/* implicit */_Bool) ((short) ((var_12) ? (((/* implicit */int) arr_21 [i_7] [i_6] [i_5] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0])))));
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((unsigned long long int) var_15)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))))))));
                            }
                        } 
                    } 
                } 
                arr_24 [i_0] = ((/* implicit */signed char) ((var_4) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20108))) * (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_0])))))));
                arr_25 [i_0] = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_16)) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))), (((/* implicit */long long int) ((signed char) arr_21 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0]), ((unsigned char)178)))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */short) var_11);
}
