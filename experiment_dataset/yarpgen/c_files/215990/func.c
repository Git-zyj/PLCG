/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215990
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
    var_18 = ((/* implicit */short) (_Bool)1);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((var_7) / (1196790676U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1] [i_0 + 1])) ? (arr_3 [i_1] [i_0 + 1] [i_0 - 1]) : (arr_3 [i_1] [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)30)), (arr_4 [i_1] [i_1])))) ? (((6766151992548797538ULL) >> (((var_14) - (18395822282449727145ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_2] = (_Bool)1;
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned int) min(((!(((/* implicit */_Bool) 6766151992548797538ULL)))), (((((/* implicit */int) var_9)) < (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))))))));
                                var_22 += ((/* implicit */long long int) (signed char)-18);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_5] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (11680592081160754085ULL)))))));
                                arr_22 [i_0] [i_1] = ((/* implicit */short) (!(arr_14 [i_0 + 1] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
