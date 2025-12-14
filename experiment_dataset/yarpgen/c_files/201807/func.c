/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201807
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)17)))) / (((((/* implicit */int) var_7)) + (((/* implicit */int) var_9)))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [(unsigned short)9] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) arr_9 [i_0] [5U]);
                                var_16 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_3] [i_2]))) : (((/* implicit */int) (signed char)-100))))) - (2486996405U)));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) (signed char)113);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (short i_6 = 3; i_6 < 8; i_6 += 3) 
        {
            for (unsigned char i_7 = 3; i_7 < 10; i_7 += 2) 
            {
                {
                    arr_21 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_11)))))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((min((arr_14 [i_6 + 3] [i_6 + 3]), ((!(arr_14 [i_6 + 3] [(short)8]))))) ? (((/* implicit */int) arr_15 [9ULL])) : (((/* implicit */int) arr_16 [i_6 + 2] [i_6 - 2])))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 8; i_9 += 4) 
                        {
                            {
                                arr_28 [i_5] [(short)4] [(short)4] [i_8] [i_8] [8U] &= ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)-13))))));
                                arr_29 [i_5] [i_5] [i_5] [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */short) ((((((/* implicit */_Bool) 1807970891U)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)111)) || (((/* implicit */_Bool) (signed char)13))))))) * (((/* implicit */int) var_12))));
                }
            } 
        } 
    } 
    var_20 = (-(var_8));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((signed char) ((unsigned long long int) (-(((/* implicit */int) var_12)))))))));
}
