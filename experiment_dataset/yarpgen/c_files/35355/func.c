/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35355
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
    var_18 = ((/* implicit */int) var_15);
    var_19 = (+(var_13));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (short)0)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [i_0] [i_1 - 1]) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [9ULL] [i_1 + 1] [9ULL])) : (((/* implicit */int) (signed char)-76))))) ? (((/* implicit */int) ((var_0) == (var_0)))) : (((/* implicit */int) max(((unsigned short)65526), (var_14)))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_9))) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)22)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) min((arr_2 [i_0]), (((/* implicit */int) ((unsigned char) ((arr_6 [i_0] [i_1] [i_2] [i_0]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_3] [i_0] = ((/* implicit */unsigned short) var_12);
                                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -5078072997134742191LL)) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)9))) : (((((/* implicit */_Bool) -1699186743579071700LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_2))))) != (((/* implicit */unsigned long long int) -1699186743579071700LL))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_5])) + (((520634446U) - (2713506144U)))));
                    var_23 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) min(((unsigned short)65533), ((unsigned short)65524)))) != (((/* implicit */int) (signed char)-80)))));
                }
                arr_18 [i_1 + 1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */signed char) (_Bool)1)))))) != (min((-1699186743579071693LL), (((/* implicit */long long int) (unsigned short)9)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_6 [i_1] [i_1] [i_1 - 2] [i_0]), ((_Bool)1))))))) : (min((((/* implicit */unsigned int) arr_4 [i_1 + 2] [i_1 - 1] [i_1 - 1])), (var_7)))));
                arr_19 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) == ((~(2520131142U))))), (((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1]))) : (var_10))) != (((/* implicit */long long int) var_6))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_6 = 2; i_6 < 8; i_6 += 4) 
                {
                    arr_22 [i_0] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)21014))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 2] [i_6 - 1])));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_6]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3))));
                    arr_23 [i_0] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) (unsigned char)0);
                    var_25 = ((((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65508))) : (var_2))) == (((/* implicit */unsigned long long int) (+(arr_3 [i_0] [i_0] [i_0])))));
                }
                for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) max((min((14U), (((/* implicit */unsigned int) arr_5 [i_7 + 1] [i_1 - 2])))), ((~(2520131142U)))));
                                arr_31 [i_0] [i_7 + 1] [i_8] = ((/* implicit */unsigned char) ((_Bool) arr_9 [i_8] [i_1] [i_0]));
                                arr_32 [(unsigned char)8] [i_1] [i_1] [i_0] [i_1] [i_1 + 1] = ((/* implicit */short) arr_5 [i_1] [i_1]);
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned short) arr_11 [i_0])), (var_14))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_1 + 2] [i_7]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_7 + 1] [i_7] [i_7 - 1]))) : (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */long long int) arr_30 [i_0] [i_1 - 1] [i_7] [i_8] [(unsigned short)3])) : (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)221)) != (((/* implicit */int) ((short) (_Bool)0)))))))));
                            }
                        } 
                    } 
                    var_28 = ((long long int) max((min((((/* implicit */unsigned long long int) (unsigned char)15)), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (unsigned char)24)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_10 = 1; i_10 < 9; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) ((((var_6) != (((/* implicit */int) (unsigned char)179)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) (signed char)-51)))))) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (var_0)))));
                        arr_35 [i_0] = ((/* implicit */signed char) ((long long int) var_13));
                        arr_36 [i_0] [i_1] [i_0] [i_10 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_5 [i_7] [7LL]))));
                        var_30 = ((((/* implicit */int) (signed char)51)) != (((/* implicit */int) (short)-28994)));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7 - 3] [(unsigned char)8] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 - 3] [i_1]))) : (var_0)))) ? (((((/* implicit */_Bool) var_10)) ? (var_16) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65532))))))));
                    }
                    arr_37 [(unsigned char)5] [i_0] [(unsigned char)5] [i_7 - 1] = ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        for (short i_12 = 1; i_12 < 8; i_12 += 4) 
                        {
                            {
                                arr_42 [i_0] [i_0] [i_0] [i_11] [i_12] [i_1 + 1] = ((/* implicit */int) ((short) arr_33 [(unsigned short)1] [i_1] [i_0] [(unsigned short)1]));
                                arr_43 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_12] [i_12 + 1] [i_12] [i_1 + 1])))))), (min((var_8), (min((((/* implicit */int) (unsigned char)235)), (var_6)))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_54 [i_0] [i_1] [i_0] [(unsigned short)7] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_21 [i_1 - 2] [i_1 + 1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1 - 1] [i_1])))))));
                                arr_55 [i_0] [i_1] [i_0] [i_15] = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            {
                                arr_60 [i_16] [i_0] [i_13] [i_13] [i_17] [i_1 + 1] = arr_57 [i_17];
                                arr_61 [i_0] [i_1] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0] [i_17])) ? (((/* implicit */unsigned long long int) var_10)) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_13])))))) : (((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_16)))))) ? (((((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (var_11))))) : (max((-2018395534357650100LL), (((/* implicit */long long int) var_5)))))) : (((/* implicit */long long int) min((((/* implicit */int) (short)0)), (max((arr_20 [i_0] [i_1]), (((/* implicit */int) var_5)))))))));
                                var_32 = ((/* implicit */short) min((((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */int) ((var_13) != (var_7)))) : (((/* implicit */int) ((unsigned short) (signed char)-51))))), (((/* implicit */int) arr_57 [8ULL]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
