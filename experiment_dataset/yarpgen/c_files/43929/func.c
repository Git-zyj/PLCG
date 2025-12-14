/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43929
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
    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_3)) - (117)))))) : ((((_Bool)1) ? (-21LL) : (((/* implicit */long long int) 0U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (~(-20LL)))) ? (((8050756125610923953ULL) | (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16828013669907763399ULL)) ? (min((((/* implicit */unsigned int) arr_3 [i_1] [i_0 + 1] [i_0])), (arr_1 [i_0] [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (10395987948098627662ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0])) >= (((/* implicit */int) var_17))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) -17LL)) ? (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_1] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [0ULL] [(unsigned char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_1 [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_2] [(unsigned char)0] [6ULL] [8ULL] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 1]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_5)) - (((int) 2383294994U)))));
                        arr_11 [i_2] [i_2 + 1] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_9);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2 + 1] [(short)5]))) <= (-20LL)))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 31LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1618730403801788214ULL)))) : (-21LL)));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2]))) ^ (arr_9 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2])))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_3] [0ULL])) ? (arr_6 [9U] [i_1] [i_2] [i_4]) : (arr_6 [i_1] [i_2] [i_1] [10LL]))) : (((/* implicit */long long int) 1259070268U))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [9ULL] [5U] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) arr_10 [i_0] [i_1] [5LL] [i_0] [(_Bool)1])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (5266718163174903877ULL))))))) : (((((((/* implicit */_Bool) 4222124650659840ULL)) ? (18446744073709551610ULL) : (1618730403801788227ULL))) / (min((17832658256246612744ULL), (arr_13 [i_2] [i_2] [(_Bool)1] [i_2] [i_4])))))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (((var_11) - (((/* implicit */unsigned long long int) arr_6 [(signed char)9] [i_1] [i_2 - 1] [i_4]))))))) ? (((var_11) / (((/* implicit */unsigned long long int) 609335360U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))))))));
                            var_26 = ((/* implicit */unsigned char) 13898521514450397440ULL);
                        }
                    }
                    var_27 = ((/* implicit */short) ((max((arr_4 [5U] [i_0] [i_0 - 1]), (arr_4 [(short)10] [i_2] [i_0 - 1]))) << (((max((((/* implicit */unsigned long long int) var_17)), (arr_4 [i_1] [5ULL] [i_0 + 2]))) - (18446744073709538097ULL)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) arr_16 [i_1]);
                        var_29 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5266718163174903886ULL)) ? (((/* implicit */int) (_Bool)0)) : (arr_12 [8LL] [(signed char)2] [i_2 + 2] [i_2])))) ? (((unsigned long long int) 13180025910534647734ULL)) : (((/* implicit */unsigned long long int) 3146142207U)))) > (18446744073709551601ULL)));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 2; i_7 < 10; i_7 += 2) 
                        {
                            arr_22 [(_Bool)1] [(unsigned char)8] [i_2] [i_1 + 1] [7ULL] = ((/* implicit */short) (-(var_0)));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((7936353736322635834LL) == (-20LL))))) | (-3LL)))), (arr_7 [i_0 + 1] [i_0 + 1] [i_2] [(short)8]))))));
                            var_31 = ((/* implicit */unsigned char) ((arr_13 [i_2] [i_1] [i_2] [i_6] [i_2]) | (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_6] [i_0])) ? (((/* implicit */long long int) arr_17 [i_1 - 1] [(short)0] [i_1 + 1] [i_1] [i_2])) : (arr_6 [i_0 + 1] [i_0 + 1] [(unsigned char)5] [i_0]))))))));
                        }
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((((/* implicit */int) var_8)) * (((/* implicit */int) var_12)))) | (((/* implicit */int) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) ((arr_2 [i_0] [(unsigned char)0]) == (var_1))))))))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 3) 
                    {
                        var_33 = ((/* implicit */_Bool) min(((unsigned char)100), (((/* implicit */unsigned char) ((arr_5 [i_8 + 2] [i_8 - 1] [i_8] [i_8 + 1]) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_34 -= ((((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) <= (arr_26 [i_2] [(short)7] [(unsigned char)6] [i_8] [7ULL] [i_2] [i_8 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_8])) || (((/* implicit */_Bool) arr_5 [(_Bool)1] [i_2] [i_8] [i_9])))))) : (((unsigned long long int) arr_18 [i_1] [i_1] [i_2] [i_9])));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) ((-21LL) % (24LL)))) ? (((/* implicit */unsigned long long int) arr_1 [i_2 - 1] [i_1])) : (((((/* implicit */_Bool) var_1)) ? (5286355439622896150ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                            var_36 = ((/* implicit */signed char) ((arr_21 [(_Bool)1] [i_2] [i_9]) ? (arr_4 [i_2 + 2] [i_8 + 1] [i_9]) : (((unsigned long long int) var_2))));
                            var_37 -= ((/* implicit */_Bool) var_10);
                        }
                    }
                }
                for (unsigned char i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    var_38 -= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_31 [i_0] [6U] [i_10] [i_10])) ? (3148837831569868018ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) arr_0 [11LL]))))) ? (((((arr_20 [6ULL]) && (((/* implicit */_Bool) 1148825083U)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))))) : (arr_17 [2ULL] [i_1 - 1] [i_0 + 1] [i_0] [2ULL]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 1) 
                    {
                        for (int i_12 = 4; i_12 < 10; i_12 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_10] [i_1 + 1] [i_12 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_12] [i_10] [i_1]))) : (var_7)))) ? (((/* implicit */int) min((arr_30 [i_0] [i_1] [i_10]), (arr_10 [i_0] [i_1 + 1] [8] [i_11] [(_Bool)0])))) : (((/* implicit */int) arr_10 [(unsigned char)9] [i_0 - 1] [i_0 - 1] [i_0] [i_10 + 2])))), (((((/* implicit */int) (short)32754)) | (((((/* implicit */int) (short)28672)) | (arr_16 [(_Bool)1])))))));
                                var_40 = ((/* implicit */short) ((arr_13 [i_10] [i_11 - 2] [i_11] [i_11] [i_11 - 3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_10] [i_11 - 2] [7ULL] [i_11] [i_11 - 3]))))))));
                                var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10] [(unsigned char)3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (arr_23 [i_10] [i_10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)255)), (8445691154343653962LL))))))) : (((/* implicit */int) arr_0 [i_12]))));
                            }
                        } 
                    } 
                    arr_38 [i_10] [i_1] [i_10] = ((/* implicit */_Bool) var_11);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 17537333158928056587ULL)))))));
        var_43 = ((/* implicit */unsigned char) var_16);
        arr_42 [17] = ((/* implicit */short) ((max((8445691154343653978LL), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_44 = ((/* implicit */int) (((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))))) / (var_13)));
    var_45 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3116475250U)))));
}
