/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245052
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
    var_10 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((-(max((var_7), (var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (max((var_7), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) var_6))))));
    var_11 = ((/* implicit */unsigned short) ((int) var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) var_7);
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [12ULL] [i_3] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_4)) % (var_0)))));
                                var_12 = ((/* implicit */unsigned int) ((unsigned long long int) var_0));
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_6))));
                                arr_17 [i_1] [i_0] [i_2] [(_Bool)1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(var_6))), (((/* implicit */unsigned int) ((int) var_7)))))) ? ((+((+(var_8))))) : ((-(max((var_1), (var_8)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) max((var_14), (min((((/* implicit */unsigned int) (!(var_4)))), (((var_4) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                }
                for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_5] |= ((/* implicit */signed char) (-(min((var_1), (((/* implicit */unsigned long long int) var_5))))));
                                var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) ((unsigned long long int) ((var_5) << (((var_6) - (3704395811U)))))))))));
                                arr_29 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (min((((/* implicit */unsigned long long int) var_0)), (((var_4) ? (var_1) : (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) (-(var_7))))));
                                var_16 = ((/* implicit */int) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9)))) : (((var_4) ? (var_7) : (((/* implicit */long long int) var_6)))))) + (9223372036854775807LL))) >> (((var_4) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))) : (((((var_7) + (9223372036854775807LL))) << (((((((/* implicit */int) var_9)) + (20))) - (18)))))))));
                            }
                        } 
                    } 
                    var_17 |= ((/* implicit */long long int) (-(((min((var_3), (var_3))) >> (((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) var_6)))) - (18271756043231574757ULL)))))));
                }
                for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_1) - (16683620352967887397ULL)))))) : ((-(var_1)))))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((((((/* implicit */int) var_9)) + (2147483647))) << (((var_3) - (1444459532U))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                            arr_38 [i_0] [i_1] [i_8] [i_10] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8))) : (((/* implicit */unsigned long long int) ((int) var_0)))))) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8))), ((-(var_8))))) : (((/* implicit */unsigned long long int) var_0))));
                            var_19 = ((/* implicit */unsigned long long int) var_4);
                        }
                        arr_39 [i_0] [i_0] [i_1] [i_9] = ((/* implicit */unsigned int) ((int) var_3));
                        arr_40 [i_0] [i_0] [i_0] [4LL] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) ((var_3) ^ (((/* implicit */unsigned int) var_5))))))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) var_7)), (var_8)))))));
                        arr_43 [i_0] [i_8] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) ((((/* implicit */long long int) var_2)) == (var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (var_0)))) ? (var_6) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) var_5))))))) : (max(((-(var_8))), (((/* implicit */unsigned long long int) var_5))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_8))));
                    }
                    arr_44 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (var_1) : (((/* implicit */unsigned long long int) var_7))))) ? ((-(var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2)))) ? (((/* implicit */unsigned int) (~(var_5)))) : ((-(var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))))))));
                }
            }
        } 
    } 
}
