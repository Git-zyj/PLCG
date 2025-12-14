/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5114
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
    var_20 = ((/* implicit */short) var_18);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_4))));
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (arr_15 [i_0] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1]) : (arr_15 [i_0] [i_3 + 1] [i_2] [i_1] [i_0] [6LL] [i_0])));
                            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 2] [i_3] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_3] [i_3 - 1] [i_2] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_4] [i_3 + 1] [i_3] [i_3 - 1] [i_3]))));
                            var_23 = ((/* implicit */short) arr_6 [i_1] [i_2] [i_4]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_24 = ((((/* implicit */_Bool) arr_15 [i_0] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_10 [i_3 - 1] [i_3] [i_3] [i_3 + 2] [i_1]));
                            var_25 -= ((/* implicit */unsigned int) (+(arr_17 [i_3] [i_2] [i_3] [i_3 + 2])));
                        }
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1])) && (((/* implicit */_Bool) arr_15 [i_0] [13] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3]))));
                        var_27 |= ((/* implicit */unsigned long long int) var_14);
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) 2571578911U)) ? (((/* implicit */unsigned int) 1883153702)) : (1723388364U))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_29 = var_11;
                            var_30 ^= ((/* implicit */long long int) 4292761144U);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            for (long long int i_8 = 2; i_8 < 13; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            arr_33 [7LL] [7LL] [i_8] [i_0] [i_10] = ((/* implicit */long long int) var_5);
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_23 [i_8])))))))));
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (arr_13 [i_0] [i_8 - 2] [3] [3] [i_10] [9LL] [i_7]) : (((/* implicit */unsigned int) ((arr_7 [i_8 + 2] [i_10] [i_0]) >> (((var_7) + (7658534388223332732LL)))))))))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 13; i_11 += 1) /* same iter space */
                        {
                            var_33 -= ((/* implicit */int) ((short) arr_4 [i_8 + 2] [i_11 + 2] [i_11 + 2]));
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2571578911U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551605ULL))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_9])) : (var_6))))))));
                        }
                        for (unsigned char i_12 = 1; i_12 < 13; i_12 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4292761171U)) ? (1274277586) : (var_13)))) ? (arr_11 [i_0]) : (((/* implicit */unsigned long long int) 1274277574))));
                            var_36 ^= ((/* implicit */short) ((long long int) var_19));
                            var_37 = ((/* implicit */long long int) arr_37 [i_0] [i_0] [i_8] [i_0] [i_0]);
                        }
                        for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            var_38 = ((/* implicit */int) (-(var_16)));
                            var_39 = ((/* implicit */unsigned char) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (arr_32 [i_0] [i_0] [i_7] [i_8] [i_9] [(unsigned char)2])))))));
                            var_40 -= ((/* implicit */unsigned long long int) arr_29 [i_8] [i_8] [i_8] [i_8]);
                        }
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_8] [i_8 - 2] [i_8] [i_8] [i_8 + 2] [i_0])) ? (arr_12 [14LL] [i_8] [i_8 - 2] [i_8 - 2]) : (arr_12 [i_8] [i_8] [i_8 + 2] [i_8 - 2])));
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */int) ((arr_35 [i_0]) <= (((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_14])) ? (((/* implicit */int) var_2)) : (arr_40 [i_14] [i_14])));
        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_14] [i_14])) ? (((/* implicit */long long int) arr_40 [i_14] [2])) : (arr_41 [i_14])));
        var_45 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1274277603)) ? (arr_41 [i_14]) : (var_16))) == (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (arr_40 [8] [i_14]))))));
    }
}
