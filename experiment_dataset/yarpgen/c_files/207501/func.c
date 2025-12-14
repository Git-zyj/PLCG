/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207501
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
    var_15 = ((/* implicit */short) ((unsigned int) (((-(5669578319796648417ULL))) + (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_13))))));
    var_16 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((signed char) 5669578319796648407ULL)))))) || (((((/* implicit */_Bool) 12777165753912903209ULL)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), ((unsigned short)65535))))))));
                var_17 ^= ((/* implicit */_Bool) (-(((long long int) var_12))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_18 &= ((/* implicit */long long int) var_4);
                            arr_9 [i_0] [i_2 + 1] [i_2 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned char) (signed char)-17))))) ? ((+(((/* implicit */int) (signed char)100)))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (_Bool)0)))))));
                            var_19 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)26281)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 2] [i_3]))) : (12777165753912903208ULL)))));
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] [i_2 + 1] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */long long int) (unsigned char)0)), (-6454640204241971500LL))));
                            arr_11 [i_0] [i_1 + 1] [i_1 - 3] [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_20 += ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), ((+(((/* implicit */int) var_4))))))) - (max((((/* implicit */unsigned long long int) var_7)), (max((17665380548750872611ULL), (((/* implicit */unsigned long long int) 7225762852831450322LL)))))));
            }
        } 
    } 
}
