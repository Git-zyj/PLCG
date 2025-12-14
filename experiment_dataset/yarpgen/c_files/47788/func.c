/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47788
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)58881))))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((1220534U) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1002991093)) ? (((/* implicit */int) var_9)) : (7))))))))));
                var_12 |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_1 - 2])) <= (((/* implicit */int) arr_0 [i_1 - 3])))) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (min((((/* implicit */int) (short)-17825)), (983040)))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_5);
    var_14 = ((/* implicit */short) ((((var_6) + (2147483647))) << (((((var_6) + (619308417))) - (30)))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_15 -= ((/* implicit */short) (((+(arr_3 [i_4] [i_3]))) + (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)106))))) ? (arr_10 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_3] [i_4])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */short) (((~(arr_7 [i_6 - 1] [i_6 + 1]))) / (((/* implicit */unsigned int) max((arr_15 [i_2] [i_3] [i_5]), (((/* implicit */int) arr_4 [i_2] [i_4] [i_6])))))));
                                var_17 *= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (unsigned char)201)))))))), (((((/* implicit */_Bool) arr_6 [i_6 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_6 - 1]))))));
                                var_18 = ((/* implicit */short) ((min((((/* implicit */long long int) 3998530082U)), (arr_8 [i_6 - 1] [i_6 - 1]))) & (((/* implicit */long long int) ((int) min((((/* implicit */long long int) var_5)), (var_3)))))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned char)255))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_0))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_15 [i_2] [i_3] [i_4]))));
                }
            } 
        } 
    } 
}
