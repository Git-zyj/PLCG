/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211583
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
    var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (unsigned short)61440)) : (((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */int) (unsigned short)24597)) : (((/* implicit */int) (unsigned short)40954))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = arr_1 [i_0 + 1];
        var_12 = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)104)) >= (-1224562555))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [i_0])))))) / (max((((/* implicit */unsigned long long int) (unsigned short)16320)), (12173235360937803239ULL)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [3LL] [(unsigned short)8])) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    for (long long int i_4 = 3; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)960)) == (((/* implicit */int) (unsigned char)193)))))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_4)))))));
                            var_14 += ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) var_1)), (var_10)))))));
                            arr_13 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (~(6273508712771748376ULL)));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_8 [i_0 - 3] [i_0 - 3] [i_0 - 3])) % (var_8))) > (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1]) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_7 [i_1] [i_1] [i_0])))))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((arr_14 [i_0] [i_0]) / (((/* implicit */unsigned int) 2135536907)))), (((/* implicit */unsigned int) ((int) var_4)))))) ? (max((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) (unsigned char)193))))), (var_8))) : (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) (unsigned short)3)))))));
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) 1566918855250783294LL)) ? (((/* implicit */int) (unsigned short)28209)) : (((/* implicit */int) (unsigned char)85)))) << (((((((/* implicit */int) arr_3 [(unsigned char)9] [i_5])) ^ (((/* implicit */int) (unsigned short)42257)))) - (42303)))))))));
        }
        var_17 |= ((unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [(unsigned char)8])), (var_2))))));
        /* LoopSeq 3 */
        for (int i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) (unsigned short)1);
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (unsigned int i_9 = 2; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_19 = arr_4 [(unsigned char)11] [i_0] [i_0 - 1];
                            arr_26 [i_0] [i_0] [i_7] [i_6] [i_0] [i_6] [i_0] = ((/* implicit */long long int) arr_21 [i_8] [i_8] [i_8] [i_8]);
                            arr_27 [i_0 - 1] [i_0 - 1] [i_7] [(unsigned char)17] [i_9] [i_7] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 72057594037927935LL)) ? (((/* implicit */int) (unsigned short)65514)) : (-268435456)))) & (max((arr_16 [i_0] [i_0]), (6273508712771748376ULL))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_10 = 2; i_10 < 23; i_10 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)3584)) ? (arr_24 [i_0] [i_0] [i_0 - 2] [i_10 + 2] [i_10 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61444))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)184)), (2800732781U)))))))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 1; i_11 < 23; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))))))));
                        arr_38 [i_0 - 2] [i_0 - 2] [i_10] [i_11 + 2] [i_0 - 2] [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_0 - 3] [i_0 - 1] [i_10 + 2] [i_11 - 1])) ? (((8451687481862836108ULL) & (((/* implicit */unsigned long long int) var_4)))) : ((+(18432843576348691916ULL))))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_12]))) : (((unsigned long long int) arr_8 [i_0] [i_10] [i_0]))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 267911168U))));
                        var_23 = ((/* implicit */unsigned short) -4204177815270877873LL);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_13 = 2; i_13 < 24; i_13 += 2) 
        {
            arr_41 [15LL] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_13] [i_13] [i_13 + 1] [i_13 + 1]))) & ((+(0ULL)))));
            /* LoopSeq 2 */
            for (int i_14 = 4; i_14 < 23; i_14 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) arr_9 [i_0 - 2] [i_0 - 3] [i_0] [i_0 - 3]);
                var_25 = ((18432843576348691939ULL) / (11169844249519740616ULL));
            }
            for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                var_26 -= ((/* implicit */int) (unsigned short)3463);
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_1))));
            }
            var_28 = ((/* implicit */unsigned char) 10398022928914075730ULL);
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_46 [i_0 + 1] [i_0 - 2] [i_13 - 1] [i_13 + 1]))));
            var_30 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 2089979519215065669LL)) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0 - 3] [i_13] [i_13 + 1] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_0] [(unsigned char)15] [3ULL] [i_0] [i_0] [i_0]))))));
        }
    }
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18432843576348691915ULL)))))));
        var_32 = ((/* implicit */int) var_9);
        var_33 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_0 [i_16]))))));
        /* LoopSeq 2 */
        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            arr_55 [i_16] [i_16] = ((/* implicit */int) (((~(arr_15 [i_16] [i_16]))) < (max((arr_14 [i_17] [i_16]), (((/* implicit */unsigned int) min((50331648), (((/* implicit */int) (unsigned short)26042)))))))));
            arr_56 [i_17] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)194)), (arr_0 [i_16])));
        }
        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                var_34 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)61425)) ? (3469620307U) : (3221225472U))))), (var_8)));
                var_35 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6)))) ? (arr_5 [i_19] [i_18] [i_16]) : (((/* implicit */long long int) 1570576016))))), ((~(arr_53 [i_19])))));
                arr_62 [i_16] [i_18] [10U] = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_18])) : (((/* implicit */int) var_7))))), (min((var_8), (var_5))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) -869573394)) < (5850399951045936153ULL))))));
            }
            /* LoopNest 3 */
            for (unsigned char i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                for (unsigned char i_21 = 1; i_21 < 21; i_21 += 2) 
                {
                    for (unsigned char i_22 = 1; i_22 < 20; i_22 += 2) 
                    {
                        {
                            var_36 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52651)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_16] [i_18]))))) : (((((/* implicit */_Bool) arr_57 [(unsigned short)13])) ? (var_8) : (((/* implicit */long long int) arr_14 [i_16] [i_21]))))))) | (((((/* implicit */unsigned long long int) arr_46 [i_22] [i_21] [i_21 + 1] [i_20])) & (18432843576348691916ULL)))));
                            var_37 = ((/* implicit */long long int) min((var_37), ((-((+(var_10)))))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */long long int) (~(((unsigned int) (!(((/* implicit */_Bool) arr_48 [i_16] [i_16] [i_16])))))));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) || (((/* implicit */_Bool) max((267911168U), (((/* implicit */unsigned int) arr_48 [i_16] [i_16] [i_18])))))));
        }
    }
}
