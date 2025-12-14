/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19097
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_10 -= ((/* implicit */unsigned short) min((8105962407362988191LL), (((/* implicit */long long int) (unsigned char)6))));
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        for (long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) var_1))))));
                                arr_13 [i_1] [i_1] [i_3 - 2] [i_4] [i_1] [i_5] = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) max((var_12), (arr_8 [i_2 + 1] [i_2] [i_2] [i_2 + 1])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        arr_17 [i_6] [i_3 - 2] [i_1] [i_6] = ((/* implicit */unsigned long long int) (-((+(var_7)))));
                        arr_18 [i_6 + 1] [i_6] [i_3] [i_1] = ((arr_15 [i_2 - 2] [i_3 + 1]) || (arr_15 [i_2 - 1] [i_3 - 2]));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) var_2);
                        var_14 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_15 [i_1 - 1] [i_7])) >= (((/* implicit */int) var_8)))) ? (((unsigned int) (signed char)-4)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7])))));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)26601)) ? (5127657628108897382ULL) : (13319086445600654259ULL))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) || (((/* implicit */_Bool) var_6)))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (13319086445600654209ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))));
                        arr_23 [i_1] = ((((/* implicit */_Bool) (unsigned char)10)) || (((((/* implicit */_Bool) (short)-2023)) || (((/* implicit */_Bool) (signed char)-31)))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    var_18 ^= arr_25 [i_1 + 1] [i_1 - 1];
                    arr_29 [i_1] [i_9] [i_1] [i_1] = ((/* implicit */unsigned short) arr_15 [i_1 - 1] [i_1 + 1]);
                }
            } 
        } 
        arr_30 [i_1] [i_1] = ((/* implicit */long long int) (unsigned char)123);
    }
    var_19 = ((min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))))))) ^ (var_7));
    var_20 = ((/* implicit */short) var_3);
}
