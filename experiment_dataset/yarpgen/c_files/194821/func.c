/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194821
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
    var_11 = ((/* implicit */unsigned short) var_9);
    var_12 &= ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34585))))), (max((((/* implicit */unsigned long long int) (unsigned char)17)), (var_7)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_13 = min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-114))))), (max((((/* implicit */unsigned int) ((short) 22U))), (min((((/* implicit */unsigned int) (short)-25129)), (var_6))))));
                                var_14 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_3] [i_4])) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) var_10))))) / (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_1] [i_4] [i_3])), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 1] [i_2])), (var_3)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 4; i_5 < 9; i_5 += 2) 
                {
                    for (short i_6 = 4; i_6 < 10; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (signed char)26)), ((~(((/* implicit */int) arr_3 [i_5] [i_7]))))))));
                                var_16 = ((/* implicit */short) ((unsigned short) ((9844296274301327629ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10452)) ? (arr_2 [i_6]) : (arr_18 [i_7] [(unsigned short)2] [i_5] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 ^= min((((/* implicit */unsigned int) var_8)), (var_2));
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (signed char i_10 = 3; i_10 < 12; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 4; i_11 < 12; i_11 += 2) 
                    {
                        for (signed char i_12 = 1; i_12 < 11; i_12 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_9] [i_10 + 1] [(unsigned short)0] [i_12] [i_12 + 2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-25869))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_11 + 1]))) / (1705945707U))))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((min(((-(((/* implicit */int) arr_20 [i_10] [i_12])))), (((/* implicit */int) (short)-2578)))) == (-2428275))))));
                            }
                        } 
                    } 
                    arr_34 [i_8] [i_9] [i_8] &= min((min((arr_29 [i_10] [i_10 + 2] [i_10 - 1] [i_10] [i_10] [i_10]), (((short) var_1)))), (((/* implicit */short) ((signed char) var_10))));
                    var_20 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [i_10]))))));
                }
            } 
        } 
    } 
}
