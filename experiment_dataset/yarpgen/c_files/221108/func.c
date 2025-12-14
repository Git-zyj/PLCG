/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221108
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_12 |= ((/* implicit */unsigned char) max((-1890808206), (((/* implicit */int) (signed char)97))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) (~((-(18446744073709551615ULL)))));
                    var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) 0)) ? (0) : (-4))) : (min(((-(((/* implicit */int) arr_8 [i_0] [3] [i_2])))), (((/* implicit */int) arr_8 [(signed char)0] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((0), (((/* implicit */int) (short)-25914))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) <= (arr_1 [i_0] [i_1]))))) : (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
                                var_16 = ((/* implicit */short) (((~(arr_7 [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                var_17 = ((/* implicit */int) max((var_17), ((((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_3])))) % (((((/* implicit */_Bool) var_8)) ? ((-(153806044))) : (((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((/* implicit */short) arr_5 [i_0]);
                    var_18 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)30))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
        {
            for (int i_6 = 1; i_6 < 10; i_6 += 4) 
            {
                {
                    arr_18 [i_5] [i_5 + 2] [i_6] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 3)), (12681350949559669505ULL)));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_5 + 3] [i_6])) ? (var_0) : (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) -259673854)), (var_6)))))));
                                arr_24 [i_0] [i_0] [i_5] [i_0] [i_8] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_20 = ((/* implicit */int) -9223372036854775777LL);
        var_21 = ((/* implicit */_Bool) ((arr_26 [i_9] [i_9]) & (((/* implicit */unsigned long long int) var_9))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        arr_31 [i_10] = var_8;
        arr_32 [i_10] = var_6;
    }
    /* LoopSeq 1 */
    for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 9; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (-(((((259673854) == (((/* implicit */int) var_7)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) != (5362272924977236475ULL)))) : (((/* implicit */int) arr_6 [i_12 - 3] [i_12 - 2] [i_13] [i_13]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 9; i_14 += 3) 
                    {
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_17 [i_11] [i_12 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (12681350949559669505ULL))) & (3553256660318911409ULL)));
                                arr_45 [i_14] [i_14] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_29 [i_11]) ? (min((-259673854), (((/* implicit */int) arr_2 [i_12])))) : (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_15] [(signed char)0] [i_13] [i_11] [i_11])))))))));
                                var_24 -= ((/* implicit */unsigned long long int) arr_42 [i_13]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_46 [i_11] [i_11] = ((/* implicit */long long int) arr_12 [i_11] [i_11]);
        var_25 = ((/* implicit */long long int) arr_16 [i_11] [i_11]);
    }
}
