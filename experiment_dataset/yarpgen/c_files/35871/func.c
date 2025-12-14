/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35871
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
    var_14 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)37614)) ? (-1LL) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) var_0))))) < (((((/* implicit */unsigned long long int) var_9)) ^ (var_4))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2 + 3] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2 + 2] [i_3])), (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0 + 1]) : (var_12))))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37614)) / (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)37594))))))) ? (((8787503087616ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0 + 2]) / (arr_2 [i_0 + 2]))))));
                            arr_13 [i_0 + 1] [i_0 + 1] [i_2] [i_3] = ((/* implicit */_Bool) (signed char)-29);
                        }
                    } 
                } 
                var_16 &= ((/* implicit */long long int) ((((max((var_12), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])))) >> (((((/* implicit */int) ((unsigned char) -3300762725089452699LL))) - (88))))) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (var_7))) || (((/* implicit */_Bool) ((((-893295882) + (2147483647))) >> (((arr_1 [i_1]) - (5008212365331614420LL))))))))))));
                arr_14 [i_1] = (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0 + 1] [i_0])) : (((/* implicit */int) var_10)))));
            }
        } 
    } 
    var_17 *= ((/* implicit */unsigned short) var_13);
}
