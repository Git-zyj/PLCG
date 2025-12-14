/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210179
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (!(((arr_3 [i_0]) >= (arr_3 [i_0])))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (arr_11 [i_3 - 1] [i_0] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (3446726824427191111ULL))) : (((/* implicit */unsigned long long int) arr_11 [i_3 - 1] [i_0] [i_1 - 2]))));
                                var_21 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) ((arr_0 [i_0]) ^ (var_16)))))) ? (17383102931813509834ULL) : (((/* implicit */unsigned long long int) max((arr_12 [i_3 - 1] [i_2] [2U] [i_2] [i_1 - 1]), (((arr_1 [i_2]) ? (arr_12 [6ULL] [i_2] [i_2] [i_2] [i_4]) : (((/* implicit */int) var_2)))))))));
                                var_22 = ((/* implicit */unsigned short) ((int) (~(max((var_1), (((/* implicit */unsigned long long int) 4294967290U)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1310505534U)) ? (2742520393721351139ULL) : (((/* implicit */unsigned long long int) 2984461758U))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) : (((((((/* implicit */_Bool) 1574601356U)) ? (17356931209035805118ULL) : (((/* implicit */unsigned long long int) 0)))) >> (((var_18) - (557797741373310525ULL)))))))));
    var_24 *= ((/* implicit */unsigned long long int) var_8);
}
