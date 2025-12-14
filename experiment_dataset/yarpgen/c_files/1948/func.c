/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1948
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */unsigned int) var_0);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned short)37309);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */signed char) var_1))))), (var_8)))));
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_10)), (((((((/* implicit */_Bool) arr_8 [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) -8488757236505011510LL)))) % (arr_1 [i_2] [i_2])))));
        arr_11 [i_2] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (short)9978)), (arr_1 [i_2] [i_2]))), ((+(var_11)))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_8 [i_3]) ^ (var_3)));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned long long int) arr_2 [6LL])))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_15 &= (short)-1165;
        /* LoopSeq 4 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_16 *= ((/* implicit */unsigned char) var_4);
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((signed char) var_5)))));
            arr_21 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_5])) ^ (((/* implicit */int) arr_0 [i_4]))));
        }
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((short) arr_19 [i_4] [i_6] [i_6]));
            var_19 = ((/* implicit */signed char) arr_18 [i_4]);
        }
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_28 [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4])) << (((/* implicit */int) arr_0 [i_4]))));
            var_20 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4173810540U)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) var_4)))) * (((/* implicit */int) arr_24 [i_4] [i_7]))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_21 = ((unsigned int) var_7);
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((11082396151682590098ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) arr_25 [i_4] [(signed char)4])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_15 [i_4] [i_8]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) 13393427597151384491ULL))));
        }
        arr_31 [i_4] [i_4] = ((/* implicit */_Bool) arr_25 [i_4] [i_4]);
        arr_32 [i_4] [i_4] = ((/* implicit */int) arr_3 [i_4] [10LL] [i_4]);
    }
    var_24 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((int) (short)-32763))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (var_11))))) >> (((/* implicit */int) var_4))));
}
