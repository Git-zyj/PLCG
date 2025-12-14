/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209356
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) ((signed char) (signed char)1));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)4])) ? (((((/* implicit */_Bool) var_4)) ? (1016296187) : (((/* implicit */int) (signed char)-34)))) : (((/* implicit */int) ((_Bool) (unsigned short)36104)))));
                var_21 = ((/* implicit */unsigned char) max((-2939430122021606721LL), (((/* implicit */long long int) (signed char)16))));
                var_22 = ((short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [7U] [i_1]) : (((/* implicit */unsigned long long int) 5U))));
                var_23 = ((/* implicit */short) max((((/* implicit */long long int) min((2551420404U), (((/* implicit */unsigned int) min(((unsigned short)20), ((unsigned short)36076))))))), (((2939430122021606721LL) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    var_24 += ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)29457)))), (((var_15) == (((/* implicit */unsigned int) var_17)))))))) : (max((((/* implicit */unsigned long long int) var_18)), (min((var_13), (((/* implicit */unsigned long long int) var_0)))))));
    var_25 = ((/* implicit */short) var_3);
    var_26 -= ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (short i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                {
                    var_27 *= arr_3 [i_4];
                    arr_13 [i_3] [i_3] [i_4] [i_4 + 1] = ((((-2939430122021606704LL) + (9223372036854775807LL))) << (((3102719943U) - (3102719943U))));
                    var_28 = (~(min((2968510731U), (max((((/* implicit */unsigned int) (_Bool)1)), (3030153082U))))));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((8151602091279546350ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 177925945935851096ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)29432)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_3 - 2])) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)65512)) == (-1966942180))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_8 [i_2] [i_3] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-86), ((signed char)-20))))) : (((var_4) % (542586069U))))))))));
                }
            } 
        } 
    } 
}
