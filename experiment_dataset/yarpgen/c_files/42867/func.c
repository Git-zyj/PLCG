/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42867
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_0]))))))));
                arr_6 [(signed char)21] [(signed char)21] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    for (int i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_15 [i_2] [i_2] [16U] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (653519022U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) | (min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_2 + 1])), (var_6)))), (min((31LL), (((/* implicit */long long int) (unsigned short)16128))))))));
                            var_18 = (((!(((_Bool) arr_7 [i_4])))) ? ((+(((((/* implicit */_Bool) 7814906391372464035ULL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_2] [i_4 + 2] [i_4 - 3] [i_4 + 1]), (arr_12 [i_2] [i_4 - 3] [i_4 - 1] [i_4 - 3]))))));
                            /* LoopSeq 4 */
                            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                            {
                                var_19 = ((/* implicit */int) min((((((/* implicit */long long int) max((1031559457), (((/* implicit */int) (signed char)-2))))) / (var_12))), (((/* implicit */long long int) (+(((/* implicit */int) max(((signed char)123), (((/* implicit */signed char) (_Bool)1))))))))));
                                arr_18 [4U] [i_2] = ((/* implicit */int) (_Bool)1);
                            }
                            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                var_20 |= ((/* implicit */long long int) max((var_5), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                                var_21 = ((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2]);
                                var_22 = ((/* implicit */_Bool) arr_4 [i_2 + 3] [i_4]);
                                var_23 -= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7] [i_2])))))))));
                                arr_22 [i_3] [i_2] = ((/* implicit */signed char) var_13);
                            }
                            /* vectorizable */
                            for (unsigned int i_8 = 2; i_8 < 21; i_8 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_7 [i_2]))));
                                var_25 = ((/* implicit */int) min((var_25), ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_13))) << (((var_13) + (1668651487)))))));
                            }
                            /* vectorizable */
                            for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                            {
                                var_26 = ((/* implicit */int) (~(2023234270U)));
                                var_27 = ((/* implicit */int) ((short) ((arr_5 [i_3] [i_9]) - (((/* implicit */int) arr_13 [i_2])))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) max((min((max((((/* implicit */long long int) var_16)), (arr_1 [i_2] [i_3]))), (min((var_15), (((/* implicit */long long int) 840042668U)))))), (((max((var_11), (2613767567231160544LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2 + 1] [i_3] [i_10] [i_2 + 4] [(signed char)11]))))))))));
                    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (signed char)-82)))))));
                    var_30 = ((/* implicit */signed char) arr_21 [i_3] [(_Bool)1] [i_10] [i_3] [i_10]);
                    /* LoopSeq 4 */
                    for (long long int i_11 = 2; i_11 < 20; i_11 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) (!((!(arr_9 [i_2])))));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_19 [i_2] [i_3] [i_3] [i_3]))))))) ? ((((_Bool)1) ? (-1484611383212304790LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */long long int) (+(arr_4 [i_2] [3]))))));
                        arr_35 [(unsigned char)4] [i_10] [i_10] [i_2] = ((/* implicit */signed char) ((min(((~(var_4))), (((/* implicit */unsigned long long int) min((arr_24 [(_Bool)1] [i_10] [(_Bool)1]), (((/* implicit */unsigned char) arr_19 [i_2] [(signed char)15] [16ULL] [i_11]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_2] [i_3] [(unsigned char)14] [i_10] [i_11 - 1])))));
                        var_33 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [0U] [i_10])) ? (((/* implicit */int) arr_33 [12LL] [i_3])) : (((/* implicit */int) var_0))))) ? (var_12) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))));
                        var_34 -= ((/* implicit */long long int) arr_20 [i_2] [i_3]);
                    }
                    for (long long int i_12 = 2; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        var_35 = max(((_Bool)1), ((_Bool)1));
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) min((max((((/* implicit */long long int) (((_Bool)1) ? (arr_32 [i_10]) : (var_5)))), (var_12))), (min((((/* implicit */long long int) arr_30 [i_2 - 1] [i_12 - 2] [i_10])), (((long long int) var_8)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) (+(1766222061)));
                        arr_41 [i_2] [i_3] [11LL] [i_13] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 2775878452U)))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
                        {
                            arr_47 [i_10] [i_2] [i_10] [i_10] [i_15] = ((/* implicit */int) var_8);
                            arr_48 [i_2] [(signed char)6] [i_10] [i_14] [i_10] &= ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) var_6))), (arr_33 [i_2] [i_2 + 4])))), (((((/* implicit */_Bool) 1682705676U)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (unsigned char)255))))));
                        }
                        for (long long int i_16 = 4; i_16 < 19; i_16 += 2) 
                        {
                            var_38 -= ((/* implicit */unsigned short) arr_8 [i_2] [i_16]);
                            arr_52 [i_2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_2)))) ^ (((((/* implicit */_Bool) 1701257423579209772LL)) ? (1206849826466617066LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) (signed char)-8)) + (2147483647))) << (((((/* implicit */int) arr_51 [i_2] [i_3] [i_2 + 4] [i_14] [i_3])) - (75)))))));
                        }
                        var_39 = ((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)87)));
                        var_40 += ((/* implicit */unsigned char) -1451031085309790693LL);
                    }
                }
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) var_15))));
    var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_9)) + (((/* implicit */int) var_1)))), (((/* implicit */int) var_3)))))));
}
