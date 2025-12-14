/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194092
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0])), (var_3)))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) max((((/* implicit */short) var_4)), (arr_2 [i_1])))) ? (arr_1 [9LL] [i_1]) : (max((((/* implicit */unsigned int) 1366071093)), (arr_1 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (-333995414) : (((/* implicit */int) (unsigned char)3)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_14 &= ((/* implicit */unsigned int) (~(0)));
                                arr_14 [i_4] [i_1] [3ULL] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((var_8), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (min(((~(((/* implicit */int) (short)30446)))), (((/* implicit */int) max(((short)3726), (((/* implicit */short) arr_9 [5U] [i_1] [5U] [5U]))))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                                var_15 = ((/* implicit */long long int) max(((+(((/* implicit */int) var_6)))), ((-(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))));
                            }
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) ((arr_13 [i_0] [i_0] [(signed char)4] [8ULL] [8ULL] [i_1] [(short)0]) == (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                var_17 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1] [i_1])) << (((((/* implicit */int) (unsigned short)43047)) - (43020)))))), (max((((/* implicit */unsigned long long int) (short)-21568)), (12385400413013231585ULL))))), (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)43047)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (unsigned char)19)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-6318))))) ? (0) : (((/* implicit */int) (unsigned char)253))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (max((((/* implicit */unsigned int) var_11)), (arr_15 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (var_5) : (arr_16 [(short)5]))))) : (((/* implicit */int) var_10)))))));
        var_20 = ((/* implicit */unsigned short) min((((unsigned int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (signed char)115)) : (1366071093)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (arr_16 [i_5]))))));
        arr_17 [13LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_15 [(unsigned char)9]))))));
    }
    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 4) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [6LL] [6LL])), (arr_15 [i_6])))))))));
        var_21 = ((/* implicit */short) max((((/* implicit */long long int) var_4)), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_6]))), (((/* implicit */long long int) arr_19 [i_6 + 2] [i_6 - 2]))))));
        var_22 = ((/* implicit */long long int) min((var_22), (max((((/* implicit */long long int) (unsigned char)47)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_20 [(short)12] [(unsigned short)4])) : (((/* implicit */int) arr_20 [i_6] [i_6]))))) ? (arr_16 [i_6 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    }
    for (long long int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
    {
        arr_25 [i_7] = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_22 [(unsigned short)17])) : (((/* implicit */int) var_10)))))))));
        var_23 = (short)-30446;
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+((~(((arr_23 [i_7] [i_7]) - (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_28 [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_26 [i_7] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_24 [i_8]), (arr_24 [i_7]))))) : (min((((/* implicit */long long int) (short)12)), (arr_23 [(signed char)13] [i_8])))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_7])) ? (((unsigned long long int) (short)-1250)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)1250))))));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_30 [i_8] [i_9] [8LL]), (arr_30 [i_8] [i_9] [i_9])))) ? (((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_10])) ? (arr_35 [i_9] [i_8] [i_7]) : (arr_35 [i_9] [i_7] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_22 [19]), (arr_22 [i_7])))))));
                        var_27 ^= ((/* implicit */unsigned int) arr_24 [i_8]);
                        var_28 = ((/* implicit */unsigned char) arr_30 [i_8] [i_8] [i_8]);
                        var_29 = ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
        }
        for (long long int i_11 = 2; i_11 < 19; i_11 += 3) 
        {
            arr_39 [(_Bool)1] [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_38 [i_11 + 2] [i_11] [i_11])) ? (((/* implicit */int) arr_33 [i_11 + 3] [i_11 + 3] [i_11 - 2] [i_11 + 3] [i_11])) : (((/* implicit */int) arr_33 [i_11 + 2] [i_11 + 2] [i_11 + 1] [19] [i_11])))) + (max((((/* implicit */int) max((((/* implicit */short) var_10)), ((short)12048)))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_24 [i_11])) : (((/* implicit */int) arr_32 [0LL] [i_11] [0LL] [i_11]))))))));
            var_30 *= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max(((unsigned short)28132), (((/* implicit */unsigned short) (short)12041))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_34 [i_7] [(short)18] [18ULL] [i_11])) ? (((/* implicit */int) arr_38 [2LL] [i_11] [2LL])) : (((/* implicit */int) (signed char)(-127 - 1))))))));
            var_31 = ((/* implicit */_Bool) 4661577140004353723LL);
        }
    }
    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_33 [i_12] [2U] [i_12] [i_12] [i_12]), (((/* implicit */short) arr_32 [i_12] [15LL] [i_12] [13ULL])))))));
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) max((4294967295U), (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_12] [(signed char)0] [i_12] [(signed char)0] [i_12])) != (((/* implicit */int) arr_24 [i_12]))))), (max((((/* implicit */unsigned int) 1991228899)), (4294967295U))))))))));
    }
}
