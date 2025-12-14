/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241308
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
    var_16 &= ((/* implicit */unsigned char) ((min((max((var_14), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) min(((short)13482), (((/* implicit */short) var_12))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
                {
                    arr_11 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */short) arr_3 [i_1])), ((short)0)))))) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2287672271U)) ? (arr_0 [13]) : (((/* implicit */int) (unsigned char)66))))) : (((((/* implicit */_Bool) (short)-11817)) ? (arr_10 [i_1] [(short)0] [i_0 - 1]) : (arr_10 [i_2] [i_1] [i_0])))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) var_0)), (arr_9 [i_0 - 2] [i_0 + 1]))), (((/* implicit */long long int) ((arr_0 [(short)0]) + (((/* implicit */int) (unsigned short)37020)))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_0 [i_0 - 2]))));
                    var_18 = ((/* implicit */long long int) (unsigned char)0);
                    var_19 |= ((/* implicit */unsigned char) arr_10 [i_0] [i_0 + 1] [i_0 + 1]);
                    var_20 |= var_2;
                }
                for (int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                {
                    var_21 = max((((((/* implicit */_Bool) ((int) 2287672243U))) ? (arr_9 [i_0 - 2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))), (((/* implicit */long long int) max(((~(var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_0)) : (var_13))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        for (int i_6 = 3; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_24 [(unsigned short)12] [i_1] [(short)12] [i_1] [i_0] = ((/* implicit */short) (((~(var_14))) & (((/* implicit */long long int) min((arr_0 [i_6 + 1]), (((/* implicit */int) arr_7 [i_0] [i_0] [i_4] [i_6 + 1])))))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_4])) ? (arr_6 [i_6]) : (((/* implicit */unsigned int) arr_0 [(unsigned short)4])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((0) <= (((/* implicit */int) var_7))))))))))))));
                                var_23 = ((/* implicit */int) max((var_23), ((-(((/* implicit */int) ((short) var_0)))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_6 [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [(short)6])) && (((/* implicit */_Bool) (short)-11797))))) : (((/* implicit */int) arr_3 [(short)11]))))) ? (((/* implicit */int) min((arr_3 [13]), (arr_3 [i_0])))) : (((/* implicit */int) var_0))));
                                var_25 = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_11)))), ((~((-2147483647 - 1))))))), (arr_10 [i_1] [i_4] [i_4])));
                            }
                        } 
                    } 
                    arr_25 [i_1] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_4] [i_0] [i_0 - 1])))))) ? ((+(arr_14 [i_0 + 1] [i_1]))) : (((/* implicit */int) (short)-11853))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_4)))));
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_8 = 2; i_8 < 22; i_8 += 2) 
                        {
                            var_26 = ((((/* implicit */int) arr_28 [i_0 - 1] [i_0 - 1] [i_7 - 1] [(short)11] [i_1])) + (((/* implicit */int) var_0)));
                            arr_31 [(short)12] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [(short)10] [(short)10] [i_7 + 1] [i_8 - 1])) << (((((/* implicit */int) arr_7 [(unsigned char)8] [i_1] [i_7 - 1] [17])) - (30)))));
                        }
                        arr_32 [i_0 + 1] [i_1] [i_4] [i_7] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [14U] [i_1] [(short)22] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))))), (((((/* implicit */_Bool) min((var_3), (arr_7 [i_7 + 1] [i_4] [i_1] [i_0 - 1])))) ? (((/* implicit */int) ((arr_2 [i_7]) == (-1889485526)))) : (((((/* implicit */_Bool) 2287672260U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))))));
                        var_27 = ((/* implicit */int) arr_30 [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_1] [i_1] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 3; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) min((max((arr_0 [i_0 - 2]), (arr_14 [i_1] [i_1]))), (((((/* implicit */int) ((1889485518) <= (-1889485500)))) & (((/* implicit */int) arr_19 [i_0 + 1] [(short)21] [i_4] [i_10]))))));
                                var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) var_10)), ((+(((/* implicit */int) var_11))))))), (var_15)));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        {
                            arr_42 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) max((arr_6 [i_11]), (2287672271U)))))));
                            var_30 = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
                var_31 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_27 [i_0 - 2] [i_1] [i_0])))) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [(short)6] [i_0])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_0 - 2]))));
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 21; i_15 += 4) 
                        {
                            {
                                arr_52 [(unsigned short)0] [i_1] [i_13] [i_14] [i_1] [i_1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_15 + 2] [i_1] [i_0 - 2])) ? (max((((/* implicit */long long int) arr_27 [i_1] [i_13] [i_1])), (arr_9 [i_14] [(short)12]))) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0 + 1] [i_1] [(short)5] [i_14] [i_1])))))) ? (((/* implicit */unsigned int) min((arr_17 [i_15 - 1] [i_1] [i_15 + 2]), (((/* implicit */int) var_3))))) : (arr_46 [i_15] [i_1] [i_0] [i_13] [i_1] [i_0])));
                                var_32 = ((/* implicit */unsigned short) ((arr_18 [i_15 + 2] [i_15 + 1] [i_0 - 2] [i_0 - 2]) != (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54246)) << (((2560243691U) - (2560243690U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_15 - 1] [i_15] [i_15 + 2] [i_15]))) : (arr_6 [i_0])))));
                                arr_53 [i_1] [i_1] [i_1] [i_1] [i_15] = var_2;
                                var_33 += max((((((/* implicit */int) ((((/* implicit */int) arr_35 [i_0 - 1] [i_0] [i_1] [i_1] [i_13] [(unsigned short)19] [i_1])) == (((/* implicit */int) (short)-11877))))) & (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_5 [i_14] [i_14])))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) arr_48 [i_0] [i_0] [i_0 - 2] [i_0 - 1] [6U] [i_0])))))))));
                                var_34 += ((/* implicit */unsigned int) min((var_6), ((unsigned char)228)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
                        {
                            {
                                arr_59 [12] [i_0] [i_0] [10U] |= ((((/* implicit */_Bool) arr_26 [i_17] [i_0])) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_9 [i_0 - 1] [i_1]))))) : (arr_2 [i_16]));
                                var_35 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_33 [18LL] [16] [i_0] [i_13] [i_16] [i_17])) ? (var_15) : (max((2007295037U), (((/* implicit */unsigned int) var_3)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0])))))));
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_8 [i_0 + 1] [i_0 - 1] [(unsigned char)19])))) ? (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 2] [(unsigned char)18])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (arr_8 [i_0 - 1] [i_0 + 1] [i_16]))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                                var_37 |= ((/* implicit */unsigned short) ((short) max((max(((short)-3110), (((/* implicit */short) (unsigned char)84)))), (var_10))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_7))));
    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((var_4), (4227858432U)))))));
}
