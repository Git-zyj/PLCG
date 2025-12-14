/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202946
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
    var_13 = ((/* implicit */_Bool) var_11);
    var_14 = (!(((/* implicit */_Bool) var_9)));
    var_15 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)5770)) > (((/* implicit */int) var_5)))))) - (var_1)))) ? (((/* implicit */unsigned long long int) max((-1), (((/* implicit */int) var_7))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (0) : (((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = (signed char)-59;
        var_16 = ((/* implicit */unsigned long long int) (short)14939);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) (short)14939)))))));
        arr_4 [i_0] [i_0] = (_Bool)0;
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_1])), (arr_1 [i_1])))) || (((/* implicit */_Bool) var_3))));
        arr_9 [i_1] = (((_Bool)0) && (((/* implicit */_Bool) (signed char)48)));
        /* LoopSeq 3 */
        for (int i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            var_19 = ((/* implicit */long long int) max(((_Bool)1), (arr_10 [i_2 - 1] [i_2 - 2])));
            var_20 = ((/* implicit */short) (_Bool)1);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_21 = ((/* implicit */short) var_5);
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_22 = ((/* implicit */signed char) (short)24572);
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1]))), (((unsigned long long int) (((_Bool)1) ? (arr_5 [i_4]) : (arr_8 [i_1])))))))));
            }
            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    arr_25 [i_1] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)11])) ? (((((/* implicit */_Bool) (short)19809)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5761))) : (arr_1 [i_6]))) : (11473823862053254695ULL)))) && ((!(((var_11) < (((/* implicit */unsigned long long int) arr_5 [i_5 - 1]))))))));
                    arr_26 [i_1] [i_5] [i_5 + 1] [i_6 + 3] = ((/* implicit */short) ((1148417904979476480ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21144)))));
                    arr_27 [i_1] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */short) ((long long int) max((max((((/* implicit */unsigned long long int) -27)), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (arr_19 [i_1] [(signed char)0] [i_1] [i_6])))))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    var_24 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) 1596612923)) <= (arr_23 [i_1])));
                    var_25 -= ((/* implicit */int) ((_Bool) (signed char)48));
                }
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    arr_32 [i_1] [i_5] [i_5] [i_5 - 1] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7136))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18427433029895515843ULL)));
                    arr_33 [i_5] [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)21147))));
                }
                arr_34 [i_5] [i_5] [i_5] = max((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)127)))) && (((/* implicit */_Bool) var_6))))), (((((/* implicit */int) var_3)) / ((~(-268435456))))));
                arr_35 [i_5] = ((/* implicit */_Bool) (-(max((var_10), (((/* implicit */unsigned long long int) arr_17 [i_3] [i_3] [i_3] [i_5 + 1]))))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_5]))) >= (((long long int) 14044705003262791397ULL)))), ((!(((/* implicit */_Bool) arr_31 [i_1] [i_5 - 1])))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (+(var_10))))));
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((4506682399732476323LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))))))));
                    var_29 += ((/* implicit */long long int) arr_14 [5]);
                    arr_41 [i_10] [i_9] [i_3] [i_1] = ((/* implicit */short) arr_10 [i_3] [i_3]);
                    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_9 - 1] [i_9 - 1] [i_9 + 1]))));
                }
            }
            for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */int) var_8);
                var_32 = var_9;
                arr_46 [i_1] [i_11] [i_11] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((short)-32745), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (var_8)))), (min((6972920211656296894ULL), (17298326168730075153ULL)))))));
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 5745716218677214240LL)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (arr_7 [i_1])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        arr_52 [i_11 - 1] [i_3] [i_11 - 1] [i_11] [i_11] [i_11 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 1]))))) ? (((/* implicit */int) min((arr_17 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1]), (var_2)))) : (((((/* implicit */int) (signed char)-127)) % (((/* implicit */int) (unsigned short)9180))))));
                        arr_53 [i_12] [i_11] [i_12] |= max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-18)))))))), (var_1));
                    }
                    var_34 = ((((/* implicit */_Bool) max((arr_48 [i_11 - 1] [i_11 - 1] [i_12] [i_12]), (var_0)))) ? (((arr_48 [i_11 - 1] [i_11 - 1] [i_12] [i_12]) / (-669623291))) : (((/* implicit */int) ((_Bool) arr_48 [i_11 - 1] [i_11 - 1] [i_11] [i_12]))));
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        var_35 = ((((/* implicit */_Bool) ((int) var_4))) ? (1148417904979476485ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_11 + 1])), (1152921470247108608ULL)))) && (((/* implicit */_Bool) min((((/* implicit */short) var_7)), ((short)-1)))))))));
                        arr_57 [i_11] [i_3] [i_11] [i_3] [6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) <= (arr_24 [i_1] [i_1] [i_12] [i_14])))), (max((arr_43 [i_1] [i_1] [i_12] [i_1]), (((/* implicit */unsigned long long int) arr_49 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 + 1]))))));
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (((-(min((((/* implicit */unsigned long long int) var_8)), (7ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                    }
                    for (unsigned long long int i_15 = 3; i_15 < 19; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((((/* implicit */_Bool) arr_37 [i_1] [i_3] [i_11 + 1])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_31 [i_1] [i_11])), (var_1)))) ? (((/* implicit */unsigned long long int) max((8070450532247928832LL), (((/* implicit */long long int) (signed char)-72))))) : (1148417904979476462ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) max(((_Bool)0), ((_Bool)1)))), ((unsigned short)26482)))))))));
                        arr_60 [i_1] [i_3] [i_11] [i_11] [i_15] [i_1] [i_15 - 2] = ((/* implicit */_Bool) (~(((int) ((((/* implicit */int) arr_20 [i_11])) % (arr_44 [i_11] [i_12] [i_11]))))));
                    }
                }
                /* vectorizable */
                for (int i_16 = 1; i_16 < 20; i_16 += 2) 
                {
                    var_38 = ((/* implicit */unsigned long long int) arr_48 [i_11 + 1] [i_16] [i_16 + 1] [i_16]);
                    var_39 = ((/* implicit */signed char) ((short) arr_58 [i_3] [i_16] [i_16 - 1] [i_16 - 1] [i_16 + 1] [i_16 - 1] [i_16 + 1]));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 1; i_17 < 20; i_17 += 3) 
                    {
                        var_40 = ((/* implicit */int) arr_56 [i_16 + 1]);
                        var_41 = ((/* implicit */unsigned short) (~(arr_19 [i_1] [i_11 - 1] [i_16 - 1] [i_17 + 1])));
                        arr_66 [i_17 - 1] [i_11] [i_16 - 1] [i_3] [i_3] [i_11] [i_1] = ((/* implicit */int) (short)27232);
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)1)))) / (((/* implicit */int) arr_20 [i_11]))));
                        arr_67 [i_1] [i_1] [i_11 + 1] [i_1] [i_16] [i_11] = ((/* implicit */signed char) ((short) (((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)31810)))));
                    }
                }
            }
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
            {
                arr_73 [i_19] [i_18] [18LL] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_15 [i_19] [i_18] [i_1]))));
                arr_74 [i_18] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)2044))))))) << (((/* implicit */int) (signed char)14))));
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 18; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1599))))) ? (((((/* implicit */int) var_6)) & ((-2147483647 - 1)))) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_45 [i_21] [i_21])) : (min((((((/* implicit */_Bool) 1148417904979476462ULL)) ? (((/* implicit */int) (short)27216)) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) arr_20 [i_1])))))))));
                            var_44 = ((/* implicit */int) (unsigned short)32478);
                            var_45 = ((/* implicit */int) 68719476735ULL);
                            var_46 = ((/* implicit */_Bool) min((var_46), (((((/* implicit */int) (unsigned short)1599)) > ((-((~(((/* implicit */int) (short)22800))))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_22 = 0; i_22 < 21; i_22 += 4) /* same iter space */
            {
                var_47 = ((/* implicit */int) (signed char)-89);
                var_48 = ((((/* implicit */_Bool) (~(arr_13 [i_22] [i_18] [i_22])))) ? (max((arr_37 [i_1] [i_1] [i_1]), ((~(((/* implicit */int) var_2)))))) : (16383));
            }
            /* vectorizable */
            for (unsigned short i_23 = 0; i_23 < 21; i_23 += 4) /* same iter space */
            {
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_78 [i_1] [i_1] [i_18] [i_18] [i_23])) ? (((((/* implicit */_Bool) arr_54 [i_18] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (18446744073709551607ULL)));
                arr_86 [i_1] [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) var_3)))) ? (arr_42 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)15)) / (((/* implicit */int) var_3)))))));
                var_50 = ((/* implicit */int) ((var_11) == (arr_1 [i_23])));
            }
            arr_87 [i_18] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4486007441326080ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((var_9) == (((/* implicit */int) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -6221217005699631150LL)))))))));
        }
    }
}
