/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225085
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        var_12 &= ((/* implicit */_Bool) (+(((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-6338)) + (1838264017)));
                        var_14 &= ((/* implicit */_Bool) (+(-1838264017)));
                        arr_11 [(unsigned char)4] [i_1] [(signed char)7] [2] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_7))));
                    }
                    for (short i_4 = 3; i_4 < 12; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (13454948301588606707ULL))) - (((/* implicit */unsigned long long int) var_10))));
                        var_16 = ((/* implicit */long long int) ((var_10) >> (((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_20 [i_5] [i_1] [i_2 - 3] [i_5 - 1] [2ULL] = ((/* implicit */int) ((var_10) + (var_10)));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((((/* implicit */int) var_7)) / (((/* implicit */int) var_6)))) | (1838263992))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_5)));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    arr_24 [i_0] [8U] [(signed char)10] &= ((/* implicit */short) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (17338))) - (13)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) var_11);
                                var_20 = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 32767)) - (var_1)));
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 11; i_10 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) * (var_8)));
                    var_23 = ((/* implicit */long long int) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    var_24 = ((var_4) >= (var_4));
                }
                for (int i_11 = 1; i_11 < 11; i_11 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) var_8);
                                var_26 = ((/* implicit */int) max((var_26), (min((((/* implicit */int) var_3)), (((min((-1253617528), (((/* implicit */int) var_6)))) * (0)))))));
                            }
                        } 
                    } 
                    var_27 = -1838264017;
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(var_4)))) * (((((/* implicit */_Bool) 2823168547U)) ? (2857311830U) : (var_1)))));
                            var_29 = ((/* implicit */long long int) 49180238);
                            var_30 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) 2549433577U)) + (var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (((((/* implicit */int) var_7)) + (((/* implicit */int) var_3)))))))));
                            var_31 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) -49180224)))) && (((/* implicit */_Bool) var_7))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_0))))) + ((-(var_5)))))) / (((((/* implicit */unsigned long long int) min((var_4), (-1253617528)))) - (((1810860235244989004ULL) * (((/* implicit */unsigned long long int) var_4))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    arr_50 [(_Bool)1] [i_15] [i_18] [0ULL] = ((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)0)))))));
                    arr_51 [20] [i_15] [(short)17] = ((/* implicit */signed char) ((((var_8) + (((/* implicit */unsigned long long int) var_1)))) != (((/* implicit */unsigned long long int) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                }
            }
        } 
    } 
}
