/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35573
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) (unsigned short)63831))), (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) | (arr_1 [i_0])))))) && (((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) max((arr_2 [i_0]), (var_0)))))))));
        var_20 = ((/* implicit */long long int) min(((~(((/* implicit */int) var_11)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */long long int) (_Bool)1)))))));
        arr_7 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)240))))) ? (((/* implicit */unsigned int) ((((-908953688) + (2147483647))) << (((var_6) - (8032468478324091789LL)))))) : (((unsigned int) (unsigned short)65530))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_2])), (var_8)))) ? (((/* implicit */int) (!((_Bool)0)))) : ((+(((/* implicit */int) arr_10 [i_2]))))))) ? ((~(((/* implicit */int) ((unsigned short) arr_8 [i_2]))))) : ((+(((((((/* implicit */int) var_18)) + (2147483647))) >> (((var_16) + (7713498118395486393LL)))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) (short)20024);
        var_23 = ((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) < (((/* implicit */int) (unsigned char)247))));
        var_24 = ((/* implicit */short) (((+((-(((/* implicit */int) arr_9 [i_2] [i_2])))))) != (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) -11)), (-8156938703399709807LL)))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_25 [i_3] [i_3] [i_5] [i_5] [i_6] [i_6] &= ((((((/* implicit */int) arr_22 [i_3] [i_5] [i_4] [i_5] [i_6])) <= (((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_5] [i_3] [i_5] [i_5] [i_5] [i_5])), (arr_21 [i_3] [i_3])))))) ? ((((!(((/* implicit */_Bool) var_3)))) ? (min((((/* implicit */long long int) (unsigned short)63828)), (arr_17 [i_3] [i_4]))) : (min((arr_16 [i_3] [i_5] [i_5]), (((/* implicit */long long int) var_15)))))) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                            var_25 ^= ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */int) arr_22 [i_3] [i_3] [i_5] [i_6] [i_6])), (arr_23 [i_3] [i_3] [i_3] [i_3]))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_3] [i_3] [i_4] [i_3] [i_6]), (arr_22 [i_3] [i_5] [i_5] [i_5] [i_5]))))) | (8156938703399709785LL))))));
                        }
                    } 
                } 
                arr_26 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) max((((/* implicit */int) max((var_12), (((/* implicit */signed char) arr_14 [i_3]))))), (((((/* implicit */_Bool) 4152438055U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_22 [i_3] [i_4] [i_3] [i_3] [i_4]))))))) : ((~(arr_17 [i_3] [i_4])))));
            }
        } 
    } 
    var_27 = ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (min((var_4), (((/* implicit */short) var_17))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)20009))) % (((var_16) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63828))))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) var_15))))), (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
    var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((var_8), (var_14)))) ? (((/* implicit */int) ((_Bool) (short)-6709))) : ((-(((/* implicit */int) (unsigned short)17878))))))));
}
