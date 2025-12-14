/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242571
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) min((var_1), ((unsigned short)44221))))) ? ((~((~(4U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((7124245598328694499LL) >= (((/* implicit */long long int) var_2)))), (((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) var_1);
            arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) >= (((/* implicit */int) var_12))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                var_14 *= ((/* implicit */unsigned long long int) var_2);
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 + 1])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (short)-12934)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    arr_13 [i_3] [i_3] [i_1] [i_3 - 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_9)))));
                    arr_14 [i_0] [i_1] [i_3 - 3] = ((/* implicit */short) (-((~(((/* implicit */int) var_4))))));
                    arr_15 [i_0] [i_1] = (-(arr_8 [i_1] [i_2 + 3]));
                }
            }
            for (unsigned short i_4 = 4; i_4 < 13; i_4 += 2) 
            {
                arr_18 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_6)))) % (((/* implicit */int) arr_0 [i_4 - 4]))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), ((+((+(arr_10 [i_0])))))));
                            arr_23 [i_1] [i_1] [i_4] [i_1] [i_6] = ((/* implicit */short) ((unsigned long long int) (short)-12921));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (var_8)));
            }
        }
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            arr_28 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) (short)12943)) ? (((/* implicit */unsigned long long int) var_2)) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_11)))))));
            /* LoopSeq 2 */
            for (long long int i_8 = 3; i_8 < 11; i_8 += 3) 
            {
                var_18 = ((/* implicit */short) ((unsigned int) ((((-608209847) + (2147483647))) >> (4U))));
                var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_2)) | (arr_22 [i_0] [i_0] [i_8 - 3] [i_8 + 4] [i_8] [i_8])));
            }
            for (long long int i_9 = 2; i_9 < 14; i_9 += 2) 
            {
                var_20 += ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 14; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_9] [i_11 + 1] [i_0] [i_9])) ? (((/* implicit */int) (short)-12934)) : (((/* implicit */int) var_4))));
                            var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_20 [i_0] [i_7] [i_9] [i_10] [i_0]) ? (arr_37 [i_11 + 1] [i_10] [i_9 + 1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)111)) != (((/* implicit */int) (short)-12934))))) : (((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned int i_12 = 1; i_12 < 8; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_13 = 2; i_13 < 7; i_13 += 2) 
        {
            for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                {
                    var_23 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) 1686910849535888146LL))));
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 10; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 3; i_16 < 9; i_16 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_13] [i_15] [i_13]))));
                                arr_53 [i_12] [i_13 - 1] [i_14] [i_16] [i_16 - 3] [i_16 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((var_0), (((/* implicit */short) ((10ULL) != (5326421499567501589ULL))))))) : (arr_38 [i_15] [i_15] [i_16 - 1] [i_16 - 1] [i_16 + 2])));
                                var_26 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(min(((-(18446744073709551610ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_9))))))))))));
        var_28 *= ((/* implicit */short) ((unsigned int) max((((/* implicit */int) arr_12 [2U] [i_12 - 1] [i_12 + 1] [2U])), (((arr_46 [i_12] [i_12 + 3] [i_12] [i_12]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))))));
    }
}
