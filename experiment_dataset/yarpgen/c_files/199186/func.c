/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199186
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
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */int) ((((arr_1 [i_0]) && (arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) min((-860101628), ((-2147483647 - 1))))) : (max((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) arr_0 [i_0] [(signed char)4])))))));
        var_13 = ((/* implicit */signed char) ((((long long int) arr_0 [(_Bool)1] [i_0])) + (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_6))) : (min((860101627), (((/* implicit */int) var_8)))))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (+(-860101648)))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -860101638)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : ((-2147483647 - 1)))), (max((860101638), (-860101628))))))));
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_5 [i_0] [i_0]))));
            var_16 = ((/* implicit */signed char) ((((860101627) != (((/* implicit */int) (_Bool)1)))) ? (371059261) : (-1)));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_15 [i_0] [i_2] [9ULL] [i_3 - 1] [4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 2] [i_3 - 1] [i_3 - 1]))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765))) : (var_5)))));
                        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1265102137)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_4]))) & (arr_4 [i_0] [7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)5505)) || (((/* implicit */_Bool) 5U))))))));
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_14 [i_3 + 2] [i_2] [i_3]) % (arr_14 [i_3 + 2] [i_2] [i_4])));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2] [i_2])) ? (arr_14 [1U] [i_2] [i_2]) : (((/* implicit */int) arr_13 [i_0] [i_2] [i_2] [i_2] [i_0])))))));
            arr_17 [i_0] = ((/* implicit */long long int) (-2147483647 - 1));
            arr_18 [i_0] = ((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_2]) + (((/* implicit */int) var_1))));
            var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-27)) ? (arr_5 [i_0] [i_2]) : (arr_5 [i_0] [i_2])));
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((min((-480794358), (((/* implicit */int) arr_12 [i_0] [i_6])))), (((/* implicit */int) ((((unsigned int) (unsigned short)37055)) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-5518))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 4; i_7 < 12; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) var_6);
                                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((2147483647), (arr_14 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) (((-2147483647 - 1)) >= (0)))) : (((/* implicit */int) ((arr_21 [i_5] [i_5]) == (2147483647)))))) & (((((/* implicit */_Bool) arr_26 [i_7 - 2] [i_7 - 2] [i_6] [i_7 - 1] [i_8])) ? (arr_22 [i_7 - 1] [7U] [i_7 + 1] [i_7 + 1]) : (((/* implicit */int) arr_26 [i_7 - 4] [(_Bool)1] [i_6] [i_7 - 1] [i_8]))))));
                                var_23 &= ((((((/* implicit */_Bool) arr_13 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 2] [i_7 + 1])) ? (((/* implicit */int) arr_13 [i_0] [i_6] [i_6] [i_7 + 1] [i_7 - 2])) : (((/* implicit */int) arr_13 [i_0] [(unsigned short)11] [i_5] [i_7 - 2] [i_7 + 1])))) >> (((((/* implicit */int) max((arr_13 [i_6] [i_7 - 1] [i_7] [i_7 - 3] [i_7 - 2]), (arr_13 [i_6] [i_7] [i_7] [i_7 - 3] [i_7 - 3])))) - (30337))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (unsigned char)7))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_9 = 1; i_9 < 24; i_9 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_10 = 1; i_10 < 23; i_10 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_9 - 1]))));
            var_26 = ((/* implicit */_Bool) ((unsigned short) arr_28 [i_9 - 1] [i_9 - 1]));
            arr_33 [i_9] [(unsigned char)3] = ((/* implicit */short) (+(var_11)));
        }
        var_27 = ((/* implicit */int) ((arr_29 [i_9 - 1]) || (arr_29 [i_9 + 1])));
    }
    for (short i_11 = 3; i_11 < 20; i_11 += 2) 
    {
        arr_36 [i_11] = ((/* implicit */int) max(((+((+(var_5))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) != (-1265102138))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [13ULL] [i_11 - 3]))) : (((((/* implicit */_Bool) var_1)) ? (344920569U) : (((/* implicit */unsigned int) 7)))))))));
        var_28 = ((/* implicit */_Bool) arr_28 [i_11] [i_11]);
    }
    var_29 = ((/* implicit */_Bool) (+((~(((/* implicit */int) ((_Bool) 1371488431)))))));
}
