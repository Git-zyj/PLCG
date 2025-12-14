/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244827
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) arr_4 [i_2]);
                    var_19 -= ((/* implicit */unsigned long long int) min(((unsigned short)41021), (((/* implicit */unsigned short) (short)2192))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_10 [(signed char)2] [i_1] [i_1] [i_3] [22ULL] [i_4] = ((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_2]);
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned short) var_6)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                var_21 = arr_15 [i_5 + 2] [2ULL] [i_6];
                var_22 = ((/* implicit */_Bool) arr_16 [i_5]);
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_9 = 2; i_9 < 14; i_9 += 2) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1988502138))));
                                var_24 = ((/* implicit */signed char) arr_9 [i_7] [18] [i_7] [i_8] [i_9] [i_5 + 2]);
                                arr_26 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_9 + 1] [i_9 - 2] [i_9 - 1])) ? (arr_14 [i_9 - 1] [i_9 - 2] [i_9 - 1]) : (((/* implicit */unsigned long long int) arr_25 [i_5 - 1] [i_6] [i_9 - 1]))));
                            }
                            for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                            {
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24514)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24515))))) ? (arr_0 [i_5 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4076567689378703579ULL)) ? (932834) : (((/* implicit */int) (unsigned short)41020))))));
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) 932834)))))));
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41021)) ? (((/* implicit */int) (short)-30959)) : (((/* implicit */int) (short)-2193))))) ? ((~(arr_11 [i_8 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                var_28 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)2188)), (3524953993897468588ULL)));
                            }
                            for (unsigned long long int i_11 = 3; i_11 < 14; i_11 += 2) 
                            {
                                var_29 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (5236683417218953125ULL)))) ? (((/* implicit */unsigned long long int) arr_2 [i_7] [i_11 - 2] [i_11 - 2])) : (((arr_27 [11ULL] [i_6] [i_6]) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)24514))))))));
                                var_30 = ((/* implicit */_Bool) min((max((arr_28 [i_5 + 1] [i_5 + 1] [i_8 - 1] [i_11 - 2] [i_11 + 1]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_13))));
                            }
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)24620))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (min((arr_11 [i_6]), (((/* implicit */long long int) var_11)))))))))));
                        }
                    } 
                } 
                var_32 -= ((/* implicit */unsigned long long int) ((4076567689378703579ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2207)))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22706)) ? (((/* implicit */int) (short)2208)) : (((/* implicit */int) (short)2169))));
}
