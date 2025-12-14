/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207736
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
    var_12 = ((/* implicit */unsigned short) 4503599627370496ULL);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_5)))) & (min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)137)))), (var_8)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (3362738512U))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_5)) : (arr_1 [i_0])))))) : (min((((/* implicit */long long int) ((short) 3362738518U))), (-4922747103951443232LL)))));
                arr_6 [(unsigned char)19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36495)) ? (((/* implicit */int) ((932228783U) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) 3362738512U)) ? (((/* implicit */int) arr_2 [(unsigned char)3])) : (((/* implicit */int) (_Bool)0)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_15 = (~(max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13539))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) var_9)))))));
                                var_16 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (unsigned char)222)) : (var_5))) : ((-(((/* implicit */int) var_4))))))) * (min((6476827280363190489LL), (((/* implicit */long long int) arr_5 [i_3] [i_4 - 1] [i_4 - 1]))))));
                                arr_16 [i_0] = ((/* implicit */long long int) 4294967295U);
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                arr_18 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), ((unsigned char)53))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 15; i_8 += 3) 
                    {
                        for (short i_9 = 3; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((((unsigned long long int) arr_4 [i_5 - 1] [i_8 + 1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)44)))))));
                                var_18 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) var_5))), (((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */unsigned long long int) ((2813732166U) | (((/* implicit */unsigned int) var_5))))) : (var_10)))));
                            }
                        } 
                    } 
                    arr_35 [i_5] [15U] [i_7] [i_7] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (unsigned char)0)), (17964058882918086475ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5 - 1] [i_5 - 1])))));
                }
            } 
        } 
    } 
}
