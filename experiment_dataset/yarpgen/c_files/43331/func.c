/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43331
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
    var_13 = ((/* implicit */unsigned short) (_Bool)0);
    var_14 = ((/* implicit */long long int) var_5);
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0 - 1]);
        arr_3 [i_0 - 2] = ((/* implicit */long long int) var_1);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-63)));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((_Bool) 946564845))) | (((/* implicit */int) var_12)))) < (((/* implicit */int) arr_5 [i_1] [i_1]))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_2 - 1]);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_2 - 1])) == (((int) (_Bool)1))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_18 *= ((/* implicit */unsigned short) var_3);
            var_19 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)63))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))))));
            var_20 = ((/* implicit */long long int) ((unsigned int) var_5));
            var_21 = ((/* implicit */signed char) ((arr_13 [i_2] [i_2] [i_3]) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_3] [i_2] [i_2])), (arr_11 [i_2 - 1] [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (signed char)-63))))) : (arr_12 [i_2 - 1] [i_3] [i_2]))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-13621)) ? (((/* implicit */int) (unsigned short)44879)) : (((/* implicit */int) (unsigned short)64913)))) << (((/* implicit */int) ((arr_12 [i_2] [i_2] [i_2 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42)))))))))));
            var_22 = ((/* implicit */unsigned int) arr_13 [i_2] [i_3] [i_3]);
        }
        var_23 &= ((/* implicit */unsigned char) (-(((arr_10 [i_2 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((var_5) ? (((/* implicit */unsigned int) arr_11 [i_2 + 1] [i_2 + 1])) : (var_9)))))));
        arr_14 [i_2] = ((/* implicit */long long int) ((((arr_10 [i_2 + 1]) ? (var_7) : (((/* implicit */long long int) arr_11 [i_2 - 1] [i_2 + 1])))) > (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max(((signed char)32), ((signed char)-24))))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (signed char)24))));
        var_26 = ((/* implicit */unsigned short) arr_10 [i_4]);
    }
    for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            var_27 &= ((/* implicit */unsigned short) var_2);
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (~(((arr_22 [i_5 + 3] [i_6 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_22 [i_5 - 1] [i_6 + 3])))))))));
            arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) arr_22 [i_5 + 3] [i_6 + 3])) : (((/* implicit */int) (signed char)-43)))), (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_6])) >= (((/* implicit */int) var_4)))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [10ULL])) ? (var_7) : (arr_25 [i_5 + 2] [i_5 + 1] [i_5 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [(signed char)14])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) arr_24 [(signed char)6])) ? (arr_25 [i_5 + 2] [i_5 - 1] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                var_30 = ((/* implicit */unsigned short) ((arr_22 [i_5] [i_5 + 3]) ? (((/* implicit */int) arr_22 [i_5 + 1] [i_5 + 2])) : (((/* implicit */int) (signed char)62))));
                var_31 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) (signed char)-40)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (arr_17 [i_5 + 3] [i_5])));
            }
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                var_32 = ((((/* implicit */_Bool) max((arr_21 [i_5 - 1]), (arr_21 [i_5 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)84)) < (((/* implicit */int) (signed char)84)))))) : (max((arr_21 [i_5 + 1]), (arr_21 [i_7]))));
                arr_32 [i_5] [i_5] [i_5] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 14982043941924662303ULL)) && (((/* implicit */_Bool) -7977644006288661798LL))));
            }
            var_33 += ((/* implicit */unsigned long long int) var_8);
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            arr_35 [i_5] = ((/* implicit */unsigned char) arr_33 [i_5] [i_10]);
            arr_36 [i_10] [i_5] [i_5 + 1] = ((/* implicit */signed char) arr_15 [i_5]);
        }
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            var_34 = ((/* implicit */unsigned long long int) arr_9 [i_11]);
            /* LoopSeq 3 */
            for (signed char i_12 = 3; i_12 < 15; i_12 += 1) 
            {
                arr_41 [i_5] [i_5] [i_12] = ((((/* implicit */_Bool) (signed char)-42)) ? (3850310979U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))));
                var_35 = arr_10 [i_11];
                /* LoopSeq 1 */
                for (short i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    arr_45 [i_5] [i_11] = ((/* implicit */unsigned int) arr_15 [i_12]);
                    arr_46 [i_13] [i_11] [i_11] [i_13] [i_12] [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((arr_10 [i_5 + 1]) ? (var_7) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((unsigned short) var_1)))))) ? (((((((/* implicit */_Bool) arr_44 [i_5] [i_11] [i_11] [i_12 - 2] [i_12] [i_11])) && (((/* implicit */_Bool) (signed char)-43)))) ? (var_2) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2454215057U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)30473)) ^ (((/* implicit */int) (signed char)-56)))))));
                }
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_50 [i_11] [i_11] [i_11] [i_14 - 1] |= ((/* implicit */unsigned int) ((((var_11) ? (min((arr_17 [i_5] [i_11]), (((/* implicit */unsigned long long int) arr_37 [i_11])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_38 [i_5 + 3] [i_11] [i_14]), (((/* implicit */short) (signed char)-42)))))))) % (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)55064)), (((((/* implicit */_Bool) (unsigned short)63144)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (unsigned short)55064)))))))));
                arr_51 [i_5] [i_11] [i_5] = ((/* implicit */unsigned short) var_10);
                var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_14 - 1] [i_14])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_5 + 2] [i_11] [i_11] [i_14]))))) >= (((/* implicit */unsigned long long int) arr_11 [i_5 + 2] [i_14 - 1]))))), (arr_16 [i_5 - 1])));
            }
            for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                arr_56 [i_5] [i_11] [i_15] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) (unsigned short)20631)) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) arr_31 [i_5] [i_11] [i_11] [i_15])))))))));
                /* LoopSeq 1 */
                for (unsigned char i_16 = 1; i_16 < 15; i_16 += 3) 
                {
                    arr_60 [i_5] [i_11] [i_5] [i_16] = ((/* implicit */unsigned char) (signed char)-46);
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        var_37 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_5 - 1] [i_5 + 2] [i_5] [i_11])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (1014632984U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 + 1]))))))));
                        var_38 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned int) max((arr_34 [i_16] [i_11]), (((/* implicit */unsigned short) arr_13 [i_11] [i_16] [i_17]))))), (max((((/* implicit */unsigned int) arr_34 [i_5] [i_17])), (var_2))))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned short) max((arr_11 [i_5 + 1] [i_11]), (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) arr_24 [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_5])) && (((/* implicit */_Bool) (signed char)28)))))))));
                        var_40 = ((/* implicit */unsigned int) var_10);
                        arr_67 [i_5] [i_5] [i_15] [i_16] [i_18] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) var_4)) != (((((/* implicit */_Bool) arr_25 [i_11] [i_15] [i_18])) ? (((/* implicit */int) (short)12232)) : (((/* implicit */int) var_0))))))), ((-(arr_44 [i_16 + 1] [i_16] [i_16] [i_16 - 1] [i_16] [i_5])))));
                    }
                }
                arr_68 [i_5] = ((/* implicit */int) arr_28 [i_5] [i_5] [i_15] [i_15]);
            }
            var_41 = ((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_5] [i_5 + 3] [i_11]))) ^ (arr_18 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44904)))))) : (arr_44 [i_5] [i_5] [i_11] [i_11] [i_11] [i_5])));
        }
        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 1) 
        {
            var_42 = ((/* implicit */unsigned long long int) var_0);
            var_43 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_5] [(unsigned short)10] [i_19])) ? (max((((/* implicit */unsigned long long int) ((signed char) arr_17 [i_5] [4]))), (14160974737750494370ULL))) : (((/* implicit */unsigned long long int) var_9))));
            arr_72 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (signed char)84)) > (((/* implicit */int) (signed char)-17))))), (var_3)))) ? (((/* implicit */int) (unsigned short)5863)) : (((/* implicit */int) (unsigned short)53970))));
            var_44 = ((/* implicit */unsigned short) var_6);
        }
        arr_73 [i_5] [i_5] = ((/* implicit */_Bool) ((max((14160974737750494370ULL), (((/* implicit */unsigned long long int) var_7)))) << (((((/* implicit */int) arr_9 [i_5])) - (116)))));
    }
}
