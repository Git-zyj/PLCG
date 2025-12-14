/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235119
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_10 += ((/* implicit */short) ((unsigned long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))));
                            arr_11 [i_3] [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) 7873406887633180786ULL);
                            arr_12 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)61163)) + (((/* implicit */int) ((5234293219901455033ULL) > (((/* implicit */unsigned long long int) 0LL))))))), (min(((~(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) min((var_3), (var_5))))))));
                        }
                    } 
                } 
                var_11 -= ((/* implicit */int) var_7);
                arr_13 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((int) -2206450148324078541LL)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) != (((int) arr_3 [i_1]))));
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((((/* implicit */int) (signed char)118)), (-515425271))) & (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_5)))))))));
                var_12 = var_0;
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (int i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (long long int i_8 = 3; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_28 [i_4] [i_4] [i_6] [i_4] [i_7] = min((((/* implicit */int) var_2)), (((-174871544) - (((/* implicit */int) var_5)))));
                                arr_29 [i_4] [i_4] [i_5] [i_6] [i_7] [i_4] [i_8] &= ((/* implicit */unsigned short) arr_6 [i_5] [i_8]);
                                var_13 += ((/* implicit */unsigned int) ((5234293219901455033ULL) + (((/* implicit */unsigned long long int) 174871555))));
                            }
                        } 
                    } 
                } 
                arr_30 [i_4] [i_4] [i_4] &= ((/* implicit */short) 9223372036854775796LL);
                var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (((max((-9223372036854775776LL), (((/* implicit */long long int) arr_5 [i_4])))) - (((/* implicit */long long int) ((unsigned int) 7697720877200502378ULL)))))));
                arr_31 [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) ((2206450148324078539LL) == (((/* implicit */long long int) 2147483647))));
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) max((min((var_3), (var_5))), (max((((/* implicit */unsigned short) (signed char)-43)), (var_3)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_3)) < (((/* implicit */int) (unsigned short)65535))))), ((unsigned short)61163))))));
    /* LoopNest 2 */
    for (short i_9 = 1; i_9 < 12; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            {
                arr_38 [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((5234293219901455033ULL), (17918069557436455716ULL)))) ? (min((2969699260493620517LL), (((/* implicit */long long int) (short)32765)))) : (((/* implicit */long long int) -1969521577))));
                var_16 &= ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
}
