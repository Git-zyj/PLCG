/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227404
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((min((arr_1 [i_1 - 2]), (((/* implicit */long long int) arr_3 [i_0] [(short)1])))) <= (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [(unsigned char)10] [i_0]), (((/* implicit */unsigned char) arr_0 [i_1])))))))))) + ((((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) ((int) var_2))) : (((((/* implicit */_Bool) (unsigned short)404)) ? (arr_1 [i_0]) : (var_4)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), ((unsigned short)382)))) ? (((2147483648U) - (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) var_6)) : (((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [10] [i_1 - 2])))))));
                arr_7 [i_1] [i_1] [1ULL] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_1 - 3])) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])) && (((/* implicit */_Bool) arr_2 [9U] [i_1 - 3])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) 17200408231555473696ULL)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2]))));
        var_14 = ((/* implicit */signed char) (((~(-1982715645))) == (((/* implicit */int) var_5))));
    }
    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 7; i_4 += 4) 
        {
            for (signed char i_5 = 4; i_5 < 8; i_5 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) 1642499387982618531ULL))));
                    var_16 = ((/* implicit */unsigned int) arr_11 [i_3]);
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 8; i_7 += 1) 
                        {
                            {
                                arr_23 [i_7 - 3] [i_7 - 2] [(signed char)6] [i_6] [(signed char)6] &= (+(((((/* implicit */_Bool) arr_14 [i_5] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_2 [9] [i_7])))));
                                arr_24 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (16804244685726933076ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) || (((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)43081)), (arr_19 [i_7 - 2] [(_Bool)1] [i_5] [i_5] [(signed char)9] [i_3]))), (((/* implicit */long long int) arr_17 [i_4 + 3] [i_4 + 3] [i_5 - 4])))))));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) 4076813904U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_8 = 3; i_8 < 7; i_8 += 4) 
        {
            arr_29 [i_3] = ((/* implicit */int) (((-(((arr_12 [i_8] [i_3 - 4]) / (((/* implicit */unsigned int) var_10)))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_8])))))));
            arr_30 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_26 [i_3] [i_8])), (-1982715654)))) ? (((((/* implicit */_Bool) 67108864)) ? (((/* implicit */int) arr_2 [i_3] [i_3])) : (2147483644))) : ((~(var_10)))))) ? (((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42907))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_12 [i_3 + 1] [(unsigned char)1])) == (min((arr_1 [(signed char)2]), (((/* implicit */long long int) arr_21 [i_3] [i_3] [i_8] [i_3] [6ULL] [i_3] [i_8]))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)7168)))))));
            arr_34 [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_3 - 1]))));
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                arr_38 [i_3] [i_9 + 1] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-81))))) >= (268419072U)));
                var_20 = ((/* implicit */_Bool) arr_9 [i_9 - 1] [i_3 - 2]);
            }
            arr_39 [i_3] [i_3] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [(short)6] [i_3 + 1]))));
        }
    }
}
