/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198062
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
    var_10 = ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_4))))) ? (((unsigned long long int) min((var_6), (((/* implicit */unsigned char) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) % ((~(((/* implicit */int) var_4))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1420553286)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_3)) ? (1420553285) : (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_4)) ? (-51906372) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) max((var_13), ((~((-(arr_6 [i_3 - 1] [i_3 - 1] [i_3 + 1])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_3 + 1] [i_1])) ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(unsigned char)3] [i_0] [i_0] [i_0] [i_0])))))))));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_3 [i_3 - 1]), (arr_3 [i_3 + 1])))))))));
                            arr_14 [i_0] = ((/* implicit */_Bool) arr_1 [4]);
                            arr_15 [i_0] [i_1] [4ULL] [i_3 + 1] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [(unsigned short)5] [i_4]))));
                        }
                    }
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? ((+(218242956U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_3))))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) (_Bool)0)) != (((/* implicit */long long int) ((arr_2 [9ULL] [9ULL]) << (((arr_6 [4ULL] [i_1] [i_2]) + (4836383912513076582LL)))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_17 ^= ((((/* implicit */int) var_8)) != (((arr_17 [i_1] [i_0]) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 218242956U)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (_Bool)1)))))));
                        var_18 |= ((/* implicit */unsigned long long int) ((((2341113761U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_1] [(signed char)0] [i_1])) : (((/* implicit */int) (unsigned char)107))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)107)) - (((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)56), (((/* implicit */signed char) (_Bool)0)))))) : (((long long int) arr_10 [i_1] [i_6] [(short)5] [i_1] [i_0] [i_0])))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_12 [(_Bool)1] [i_6] [i_6] [7LL] [7LL] [(signed char)2]))))));
                        arr_21 [i_2] &= ((/* implicit */long long int) arr_20 [i_0]);
                    }
                    arr_22 [6LL] [i_1] [(unsigned short)6] = ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_0));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (+(var_0)));
}
