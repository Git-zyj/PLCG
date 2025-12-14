/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205160
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((var_3) - (8317042021658231335LL)))))) ? ((-(2384681939422779579LL))) : (-2384681939422779560LL))) : (max((((long long int) var_12)), (((/* implicit */long long int) (-(1941401979))))))));
    var_16 = ((/* implicit */unsigned char) var_11);
    var_17 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((var_2), (var_4)))) ? (((((-2384681939422779580LL) + (9223372036854775807LL))) << (((((-1414136600) + (1414136618))) - (18))))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_6)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 130782738)))))));
            arr_7 [3U] [i_0] [i_1] = ((/* implicit */long long int) max((var_10), (var_11)));
        }
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_0)), (var_7)));
            arr_12 [i_0] [i_0] = (-(max((-2384681939422779580LL), (2384681939422779560LL))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
        {
            arr_15 [18LL] [18LL] |= ((/* implicit */long long int) arr_8 [i_0 - 1] [i_0 - 1]);
            arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (var_11)))) ? (((2384681939422779579LL) | (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 764503704)) && (((/* implicit */_Bool) arr_9 [i_0]))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    arr_22 [i_0] = ((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (0U))))))));
                    var_18 &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) var_9))))) <= (((var_12) | (((/* implicit */unsigned long long int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((max((((/* implicit */long long int) var_0)), (var_3))), (((/* implicit */long long int) arr_1 [i_0 - 1]))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (max((((int) 6ULL)), (((/* implicit */int) var_6)))) : (((/* implicit */int) ((-7468670603521148532LL) <= (((/* implicit */long long int) 130782752))))))))));
                }
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    arr_31 [i_6] [i_7] = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (var_7)))));
                    var_20 = ((/* implicit */_Bool) var_4);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            {
                                arr_36 [(unsigned short)2] [(unsigned char)8] [i_7 + 1] [5U] [i_9] [i_7] [i_10] = ((/* implicit */signed char) var_7);
                                arr_37 [i_7] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((var_10) + (2147483647))) << (((((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_7] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) != ((((_Bool)0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_27 [(short)8]))))))) - (1)))));
                            }
                        } 
                    } 
                    var_21 = max((((/* implicit */int) var_1)), (max((((/* implicit */int) ((unsigned char) var_9))), ((+(-1414136594))))));
                    var_22 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) arr_20 [i_6] [i_7 + 1] [(unsigned short)20])) + (var_7)))));
                }
            } 
        } 
        arr_38 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(var_10)))) >= (var_12)));
    }
}
