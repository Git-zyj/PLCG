/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2605
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((arr_4 [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) 1379609192U))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((~(var_9))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) | (arr_2 [i_0 + 1] [i_0 + 2])));
            }
        } 
    } 
    var_18 = ((/* implicit */short) 3236436040U);
    /* LoopNest 2 */
    for (unsigned char i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    arr_15 [i_2] [i_2] = ((/* implicit */long long int) (-(((int) var_6))));
                    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
                                var_21 = ((/* implicit */unsigned char) ((1311564543576911601ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 1] [i_3] [i_2 + 1] [i_3])))));
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_22 [i_2] = ((/* implicit */unsigned int) (+((-(((var_6) ? (var_1) : (18446744073709551596ULL)))))));
                    var_22 |= ((/* implicit */int) (~((-(arr_7 [i_3 - 1] [i_3 - 1])))));
                }
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_23 ^= ((/* implicit */signed char) var_10);
                    arr_25 [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_24 += ((/* implicit */_Bool) (-((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_11)))))))));
                                arr_30 [i_2] [i_3] [i_8] [i_9] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) 1337006638U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24203)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))))) / (var_9)));
                                arr_31 [i_2 - 3] [i_2] [4U] [i_9] [10LL] |= ((/* implicit */unsigned int) min((((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) var_2)))), (((/* implicit */int) var_13))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) min((var_15), (((/* implicit */unsigned char) ((signed char) 16545577941665447062ULL)))))))))));
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (-((~(min((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])), (var_0))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            {
                                arr_37 [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)165);
                                var_27 = ((/* implicit */long long int) var_15);
                                var_28 ^= ((/* implicit */_Bool) ((unsigned int) ((long long int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_6))))));
                                var_29 -= ((/* implicit */signed char) ((((/* implicit */long long int) (+(-1676097010)))) / (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((5984694113475019785LL) * (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)47))) * (1099511627768LL)))))));
                            }
                        } 
                    } 
                }
                arr_38 [i_2] [i_2] = ((unsigned char) ((unsigned char) arr_34 [i_2] [i_2 - 2] [i_2] [2U] [(unsigned char)17]));
                /* LoopNest 2 */
                for (short i_13 = 2; i_13 < 20; i_13 += 3) 
                {
                    for (signed char i_14 = 1; i_14 < 22; i_14 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)24203)))))));
                            arr_43 [16U] &= ((/* implicit */long long int) var_6);
                            arr_44 [i_14] [i_3] [i_13] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) var_3))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) ^ (((/* implicit */int) ((signed char) var_2)))));
                            arr_45 [i_2] [i_13] [i_3] [i_2] = ((/* implicit */short) ((int) ((((unsigned int) var_5)) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_16 = 2; i_16 < 23; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    for (int i_19 = 2; i_19 < 23; i_19 += 4) 
                    {
                        {
                            arr_59 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) var_11))))), (((min((((/* implicit */unsigned long long int) var_7)), (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_16 + 1] [i_16 + 2] [i_16 - 1])))))));
                            arr_60 [i_15] [i_15] [i_15 - 1] [i_18] [i_19] [i_19] = ((/* implicit */signed char) 8245192090317558155ULL);
                            var_32 = ((/* implicit */short) (unsigned short)2032);
                        }
                    } 
                } 
                arr_61 [(unsigned short)16] [(unsigned short)16] [i_16] [i_17] |= ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_56 [i_15] [i_15] [i_16 + 1] [i_17]))))));
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (signed char i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        {
                            var_33 -= ((/* implicit */_Bool) 536608768U);
                            var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_14)))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)16693)) ^ (((/* implicit */int) arr_49 [i_15 - 1] [i_16 - 2]))))));
            }
            var_36 = ((signed char) (+(((/* implicit */int) var_3))));
        }
        var_37 = max((((/* implicit */long long int) var_8)), (min((-8763969557519949550LL), (((/* implicit */long long int) var_8)))));
    }
    var_38 = (~(((/* implicit */int) max((var_6), (var_7)))));
}
