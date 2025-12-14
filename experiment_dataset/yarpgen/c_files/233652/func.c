/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233652
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
    var_11 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3483337418U)) / (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])), (11678032905800842869ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((6768711167908708766ULL), (((/* implicit */unsigned long long int) 4294967286U))))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 6438794386029097461ULL)))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (max((((/* implicit */unsigned long long int) var_7)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])))))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(var_8)))) <= (((((/* implicit */_Bool) 25U)) ? (6768711167908708746ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) <= (6768711167908708746ULL)));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) | (((var_8) ^ (((/* implicit */long long int) 4294967286U))))));
        arr_13 [i_3] |= ((/* implicit */short) (+(arr_11 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_18 [i_4 + 1] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) arr_15 [i_4 - 1])) + (2147483647))) >> (((var_10) + (272076660558733786LL)))));
            arr_19 [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_5])) ? (((/* implicit */int) (unsigned short)36503)) : (((/* implicit */int) (signed char)-1))))) && (((((/* implicit */_Bool) 18446744073709551609ULL)) || (((/* implicit */_Bool) (unsigned short)38024))))));
        }
        arr_20 [i_4] [i_4 + 1] = ((/* implicit */signed char) (~(1634435620U)));
        var_14 += ((/* implicit */unsigned short) ((unsigned int) arr_16 [i_4 + 1] [i_4] [i_4]));
        arr_21 [i_4] [i_4 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_4 - 1]))));
        arr_22 [i_4 + 1] [i_4] = ((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_16 [i_4] [i_4] [i_4 + 1]));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        arr_27 [10] |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_23 [i_6]) ? (var_3) : (var_6)))) ? (var_8) : (-5613708097341520510LL)));
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [6LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6])))))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) -6690531358509107463LL)) : (6768711167908708746ULL)))));
        arr_28 [(signed char)6] [i_6] |= ((/* implicit */unsigned int) ((_Bool) -232040341));
        arr_29 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29036))) <= (arr_24 [i_6] [i_6])));
    }
}
