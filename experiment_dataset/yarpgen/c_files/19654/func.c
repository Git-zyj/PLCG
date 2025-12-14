/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19654
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (3231829686848741950ULL)));
                    var_18 = ((/* implicit */unsigned short) (-(arr_5 [(unsigned short)2])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (((unsigned long long int) var_9)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3])))));
                arr_13 [i_3] = ((/* implicit */short) (-(min((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [(signed char)7] [i_4]))))), (var_5)))));
                var_20 = ((/* implicit */signed char) var_10);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            {
                arr_20 [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_6 - 2] [i_5])) == (((/* implicit */int) (!(var_13))))));
                /* LoopNest 3 */
                for (short i_7 = 2; i_7 < 13; i_7 += 2) 
                {
                    for (unsigned short i_8 = 4; i_8 < 14; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))))) * (((/* implicit */int) var_13))));
                                var_22 |= ((/* implicit */unsigned short) 3300536334U);
                                var_23 = ((/* implicit */signed char) var_9);
                                var_24 &= ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5] [i_5]))) + (-4044646388560302441LL)))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) arr_5 [i_5])))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_14);
}
