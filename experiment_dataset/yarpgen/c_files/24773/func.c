/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24773
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_7);
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_2 [i_2 - 2] [i_2 - 2] [(signed char)10]) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)125)) ^ (((/* implicit */int) var_10)))))))), (var_8)));
                                var_13 -= ((/* implicit */unsigned int) (~(1189012434)));
                                arr_12 [i_0] [i_1] [7ULL] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (+(-1189012431))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_6))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-126), ((signed char)124)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((((var_8) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), (var_7))))))), (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) - (var_8))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)124)) : (-1189012452))))))));
    var_15 = ((/* implicit */int) (((~(min((17603543680540502009ULL), (((/* implicit */unsigned long long int) var_3)))))) << (((((var_11) & (((/* implicit */long long int) ((((/* implicit */int) (signed char)-125)) & (((/* implicit */int) (signed char)-1))))))) + (2068452510491101324LL)))));
    var_16 = ((/* implicit */long long int) (signed char)-38);
}
