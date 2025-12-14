/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201148
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 279046284U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_2)));
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_16))))), ((+(((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (var_2)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1])) * (((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_1])))) : ((~((+(782076201)))))));
                    var_24 = (unsigned short)2265;
                    arr_11 [i_0] [i_1] [23ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_6))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0 + 1])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 21; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 23; i_4 += 4) 
            {
                {
                    var_25 = ((/* implicit */short) 18446744073709551615ULL);
                    var_26 = max((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(short)2]))) : (0ULL))) ^ (min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1776693142)) && (((/* implicit */_Bool) 0ULL))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_27 &= ((((_Bool) arr_0 [4LL])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))));
                    var_28 -= ((/* implicit */unsigned short) 766903912U);
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        for (long long int i_8 = 1; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [3]);
                                var_30 = ((/* implicit */unsigned short) var_17);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) max((((/* implicit */unsigned long long int) -462910201)), (((((/* implicit */_Bool) arr_3 [(signed char)18] [i_6 - 1])) ? (((/* implicit */unsigned long long int) (+(-1)))) : (1ULL)))));
                }
            } 
        } 
    }
}
