/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238923
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
    var_11 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 |= ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)7)), (9223372036854775798LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_5);
        arr_5 [i_0] &= ((/* implicit */unsigned long long int) var_9);
    }
    for (unsigned char i_1 = 4; i_1 < 24; i_1 += 3) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)124)))))));
        var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)48)) / (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_1])), (var_3))))))));
        arr_8 [i_1] &= 9223372036854775807LL;
    }
    for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 - 2])) > (((/* implicit */int) arr_6 [i_2 + 1]))))), (min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_10))))));
                                var_16 += ((/* implicit */short) min((((((/* implicit */int) ((signed char) (short)17043))) + ((-(((/* implicit */int) (signed char)-1)))))), (((/* implicit */int) (signed char)1))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)1)) - (((/* implicit */int) arr_17 [i_2] [i_2 - 2] [i_2 - 2] [i_2])))) - (((/* implicit */int) var_4)))) > (((/* implicit */int) ((short) ((369853699) / (369853691)))))));
                }
            } 
        } 
        arr_23 [i_2] [i_2] = ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 1844194894612941814LL))))), (((/* implicit */long long int) (signed char)-124))));
    }
    for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) /* same iter space */
    {
        arr_26 [i_7 + 1] [i_7 - 2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)-124)), (((((/* implicit */_Bool) ((unsigned int) (signed char)-46))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (1755761905U)))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (short i_9 = 2; i_9 < 15; i_9 += 3) 
            {
                {
                    arr_33 [i_8] [i_9] [i_7 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) min(((short)2848), (var_2))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (signed char)48))))) ? (((/* implicit */int) var_7)) : (((int) 2311711980U))))) ? (((((/* implicit */_Bool) arr_24 [i_7 - 2])) ? (((/* implicit */int) arr_24 [i_7 + 1])) : (((/* implicit */int) arr_24 [i_7 + 1])))) : (((/* implicit */int) (unsigned short)33175))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */long long int) var_1);
}
