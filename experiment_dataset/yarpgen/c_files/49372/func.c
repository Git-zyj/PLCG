/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49372
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
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_18 += ((/* implicit */unsigned int) arr_1 [i_0 - 2]);
                            var_19 |= ((/* implicit */unsigned short) arr_2 [i_1] [i_1] [0ULL]);
                        }
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((arr_7 [i_0] [i_2] [i_3]) > (arr_7 [i_0] [i_2] [10]))))));
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            arr_12 [i_0 - 1] [i_0 - 1] [i_2] [i_0] [(short)18] = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_2]) > (arr_6 [9ULL] [i_0 + 2] [i_2] [i_3])));
                            arr_13 [i_0] [i_1] [i_2] [i_0] [12U] [8U] [(unsigned short)13] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-17273))) + (arr_3 [i_0] [i_1] [i_2]));
                            var_21 ^= ((/* implicit */unsigned int) ((144115187538984960LL) >= (144115187538984960LL)));
                            arr_14 [17ULL] [8U] [8U] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) -144115187538984960LL);
                            var_22 = ((/* implicit */int) (~(arr_7 [i_0 + 2] [i_0] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_2] [(unsigned char)13] [i_6]))));
                            arr_18 [i_0] [i_1] [i_2] [i_3 + 2] [i_6] [i_0] = ((/* implicit */long long int) ((arr_10 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]) != (((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 + 2]))));
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [i_2] [i_2] [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_2] [i_3 + 2] [i_7]))));
                            var_24 += ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2] [i_3] [i_0]);
                            var_25 = ((/* implicit */unsigned long long int) ((9001981694422207847ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18037)))));
                            var_26 &= ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_3] [i_7] [i_0 + 1]);
                        }
                        for (int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) arr_22 [i_3 + 1] [i_3 + 1] [i_0]);
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (unsigned char)189))));
                        }
                        arr_29 [8LL] [i_0] [8LL] = ((/* implicit */long long int) ((((/* implicit */int) ((1181545840) >= (((/* implicit */int) (short)(-32767 - 1)))))) > (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [11]))));
                        arr_30 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [(short)6] [i_2] [(unsigned short)4] [i_0])) > (arr_8 [(unsigned char)13] [i_0] [i_1] [i_3 - 1] [3ULL])));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                arr_33 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) 14984690417025429179ULL);
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 3) 
                {
                    var_28 = ((/* implicit */int) max((var_28), (((((1288731833) ^ (-204050957))) - ((+(arr_35 [i_0 - 1] [i_0] [i_1] [2ULL] [2ULL] [i_10])))))));
                    var_29 &= ((/* implicit */unsigned short) (~(((((-83987728) + (2147483647))) >> (((((/* implicit */int) (short)18549)) - (18549)))))));
                    var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) 3500361820U)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18549))))) >> ((((((-2147483647 - 1)) - (-2147483639))) + (23)))));
                }
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)18030)))) <= (((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1] [0])))))));
                    arr_39 [i_0] [i_1] [i_1] [i_11] = ((/* implicit */unsigned char) 17ULL);
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18040)) ? (-5791586887147363818LL) : (((/* implicit */long long int) 0))));
                }
                var_33 = ((/* implicit */unsigned short) (~(9444762379287343769ULL)));
            }
            for (unsigned char i_12 = 2; i_12 < 19; i_12 += 3) 
            {
                var_34 = ((/* implicit */short) ((arr_35 [i_12] [i_12] [i_12] [i_0 + 2] [(unsigned char)7] [i_0]) > (((/* implicit */int) (unsigned char)0))));
                arr_43 [i_1] [i_0] = ((/* implicit */long long int) ((((arr_35 [17] [i_12] [i_12] [2LL] [i_12 + 1] [7U]) + (2147483647))) >> (((arr_35 [i_12] [13ULL] [i_12 + 1] [i_12] [i_12 - 2] [i_12]) + (1599425082)))));
                /* LoopSeq 2 */
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    arr_48 [17] [i_0] [10LL] [17] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_13] [i_13] [i_12 + 1] [i_1] [i_1] [(short)11]))));
                    var_35 = ((/* implicit */int) (unsigned char)255);
                    arr_49 [(unsigned short)12] [i_1] [i_12 + 1] [i_12] [(unsigned char)14] &= ((/* implicit */int) ((arr_46 [14LL] [14LL] [(short)5] [18ULL] [i_13] [14LL]) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1] [0]))) ^ (258048U))))));
                }
                for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 2) 
                {
                    arr_52 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)32767);
                    var_36 = 1593389519U;
                    var_37 += ((/* implicit */long long int) arr_0 [i_1] [i_1]);
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1207601510718364013LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? ((-(9531788134002006126ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_0] [i_0 - 2] [i_0])) <= (((/* implicit */int) arr_32 [i_0 + 2] [i_1] [i_12 - 1] [i_14]))))))));
                    var_39 = ((/* implicit */unsigned long long int) 4294709246U);
                }
            }
            for (short i_15 = 3; i_15 < 19; i_15 += 4) 
            {
                arr_56 [i_0] [i_15] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_35 [12LL] [i_0 - 1] [i_0 - 2] [i_1] [i_1] [i_15 - 2]) + (2147483647)))) ? (((((/* implicit */_Bool) 9444762379287343769ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (9444762379287343770ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) 0))))))));
                var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)0))));
                /* LoopSeq 3 */
                for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 4) 
                {
                    arr_59 [i_16] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((arr_57 [i_16 - 1] [i_16 + 1] [i_16] [i_16] [i_16]) - (arr_57 [i_16 - 1] [i_16] [i_16] [14LL] [i_16 + 1])));
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5135122634364985642ULL)) ? (5LL) : ((~(arr_50 [16U] [16U] [i_15] [i_16])))));
                }
                for (int i_17 = 3; i_17 < 17; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_18 = 2; i_18 < 19; i_18 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (unsigned char)94))));
                        var_43 = ((/* implicit */int) arr_63 [i_0] [i_1] [6U] [i_17] [i_18 - 1]);
                    }
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        var_44 = ((((/* implicit */_Bool) ((arr_7 [i_0 + 1] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [14LL] [i_17] [i_19] [i_19])))))) ? (((/* implicit */int) ((arr_44 [i_0] [i_0] [i_0] [i_19]) > (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_19] [10U] [i_0] [i_15 + 1] [i_0] [i_1] [i_0 - 2])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) >= (18446744073709551608ULL)))));
                        var_45 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1443025150894836616LL)) - (((4179901543435829875ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_1] [i_15 - 1] [i_1])))))));
                    }
                    var_46 = ((/* implicit */unsigned int) arr_61 [i_17 + 2] [i_1] [i_0 + 1] [i_17] [i_0] [i_15 - 3]);
                }
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    var_47 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0 - 1] [i_0]);
                    arr_70 [i_0 + 1] [i_0] [i_1] [i_1] [i_0] [i_20] = ((/* implicit */unsigned short) ((1207601510718363995LL) != (((/* implicit */long long int) 10))));
                }
                /* LoopNest 2 */
                for (short i_21 = 2; i_21 < 19; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 20; i_22 += 2) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned int) (-(arr_35 [i_0] [i_1] [i_1] [7U] [i_21 + 1] [i_1])));
                            arr_76 [i_0] [i_0] [i_0 - 2] [6LL] [i_0] = ((/* implicit */unsigned int) (short)28475);
                        }
                    } 
                } 
            }
        }
        var_49 &= ((/* implicit */long long int) (~(((/* implicit */int) arr_41 [i_0] [i_0 + 1] [8LL]))));
    }
}
