/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38423
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_3))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((var_10) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)6] [i_0])))))) || (((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)57215)) >> (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))), ((~(((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29817)))))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)6))))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) < (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = (!(((/* implicit */_Bool) var_6)));
        arr_3 [i_0] = ((/* implicit */short) (unsigned short)29822);
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                {
                    var_16 = min((((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_3 + 1])) > (arr_5 [i_1])))), (arr_5 [i_1]));
                    arr_12 [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1569568586U)) ? (((/* implicit */int) ((unsigned char) 1334613707U))) : (((/* implicit */int) (signed char)96))));
                }
            } 
        } 
        var_17 = ((/* implicit */int) (unsigned short)20);
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min(((unsigned short)35709), ((unsigned short)35719)));
        arr_17 [i_4] = ((/* implicit */int) arr_9 [i_4]);
        arr_18 [i_4] = ((/* implicit */signed char) arr_11 [i_4] [(unsigned short)6] [0U]);
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_4]), (((/* implicit */unsigned short) var_8)))))) != (((unsigned long long int) arr_7 [i_4])))) ? (((((/* implicit */int) arr_7 [i_4])) * (((/* implicit */int) max((arr_9 [i_4]), (((/* implicit */unsigned char) var_9))))))) : (((/* implicit */int) arr_8 [(unsigned char)8] [i_4] [8U]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */unsigned int) ((short) arr_21 [i_5] [i_5 + 1]));
        var_20 = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)50060)) + (((/* implicit */int) var_6))))));
        var_21 = ((/* implicit */unsigned char) var_9);
    }
    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 12351696817487610167ULL)) && (var_4))), (((((/* implicit */_Bool) var_1)) && (arr_23 [i_6 + 1])))));
        arr_27 [i_6] = ((/* implicit */unsigned short) ((long long int) arr_23 [i_6 - 1]));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                arr_34 [17U] [i_7] [i_7] [i_7] = (i_7 % 2 == 0) ? (((/* implicit */long long int) ((((int) arr_30 [i_7] [i_6 - 1])) << (((((((/* implicit */int) arr_30 [i_7] [i_6 + 1])) << (((/* implicit */int) arr_23 [i_6 - 1])))) - (4012)))))) : (((/* implicit */long long int) ((((int) arr_30 [i_7] [i_6 - 1])) << (((((((((/* implicit */int) arr_30 [i_7] [i_6 + 1])) << (((/* implicit */int) arr_23 [i_6 - 1])))) - (4012))) - (2938))))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    arr_38 [i_7] [0LL] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_31 [i_6 - 1] [i_6 - 1] [i_9 + 1])) | (arr_29 [i_6 - 1] [i_9 - 1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1268212370)) * (arr_31 [i_6 - 1] [i_6 - 1] [i_9 + 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_41 [i_6 - 1] [i_7] [i_8] [i_9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) ((1633640181U) >= (((/* implicit */unsigned int) 1073876442))))) < (((/* implicit */int) (_Bool)1))));
                        arr_42 [i_6] [i_6 - 1] [i_6] [i_7] [i_6 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_39 [i_9] [i_9] [(short)8] [i_9] [i_9 + 1]));
                    }
                }
                arr_43 [i_7] = var_9;
                var_23 = ((/* implicit */long long int) ((unsigned int) arr_23 [i_6 - 1]));
            }
            for (int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                arr_48 [(unsigned char)6] [0] [0] [i_6] |= ((/* implicit */long long int) ((unsigned int) 3249259267U));
                arr_49 [i_6] [i_7] [(_Bool)1] |= ((/* implicit */_Bool) max((arr_25 [i_7]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) arr_35 [i_6 + 1] [i_6 + 1])) : ((+(((/* implicit */int) arr_39 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_11])))))))));
                arr_50 [i_7] [i_6] [i_7] [20ULL] = ((/* implicit */int) ((unsigned long long int) ((_Bool) arr_39 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6])));
                arr_51 [i_6] [i_7] = ((/* implicit */unsigned long long int) (signed char)40);
            }
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_6] [i_6 + 1] [12ULL] [i_6] [i_6]))) : (16889488731354292253ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_6])) ? (arr_24 [i_6 - 1]) : (((/* implicit */int) (_Bool)1)))))))) ? (arr_25 [i_6 + 1]) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (1633640181U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9)))))))));
        }
        /* vectorizable */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                arr_58 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_6 - 1] [i_6 + 1] [i_12 - 1] [i_13] [i_12])) / (((/* implicit */int) arr_36 [i_6 - 1] [i_6 - 1] [i_12 - 1] [i_12 - 1] [i_12]))));
                arr_59 [(unsigned short)11] [i_12] [i_6 + 1] = ((/* implicit */unsigned int) arr_19 [i_12]);
                var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_11)));
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [2] [i_6 - 1] [i_6]))) / (arr_47 [i_6 + 1] [i_6 - 1]))))));
                arr_60 [i_12] = ((/* implicit */long long int) ((signed char) ((long long int) 979210009U)));
            }
            var_28 = ((/* implicit */short) ((arr_56 [i_6 - 1] [i_12] [i_6 - 1] [i_6 + 1]) / (arr_56 [(short)8] [i_12] [i_6 + 1] [(unsigned short)19])));
            var_29 &= ((/* implicit */unsigned char) 16889488731354292262ULL);
            var_30 = ((/* implicit */_Bool) arr_21 [(short)4] [i_6]);
        }
        /* LoopNest 3 */
        for (unsigned char i_14 = 1; i_14 < 20; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                for (int i_16 = 1; i_16 < 20; i_16 += 1) 
                {
                    {
                        arr_70 [i_6 - 1] [i_6 - 1] [i_14] [i_15] [i_15] [i_15] = ((/* implicit */short) arr_62 [i_6] [i_6]);
                        var_31 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_61 [i_14 - 1]))))));
                    }
                } 
            } 
        } 
        arr_71 [i_6 + 1] [i_6] = arr_19 [(_Bool)1];
    }
    for (unsigned short i_17 = 1; i_17 < 20; i_17 += 1) /* same iter space */
    {
        arr_76 [i_17] [i_17] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_24 [i_17 + 1])) ? (((/* implicit */int) var_0)) : (arr_24 [i_17 + 1]))) ^ (((((/* implicit */int) var_3)) & (((((/* implicit */_Bool) 16889488731354292250ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_17] [i_17 + 1] [i_17])))))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_17])) ? (((/* implicit */int) arr_66 [2ULL] [2ULL])) : (((/* implicit */int) arr_33 [(short)16] [i_17 + 1] [i_17 + 1] [(short)16]))))))))));
        arr_77 [i_17] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [18LL] [18LL])) : (((/* implicit */int) arr_66 [12LL] [12LL])))))) % ((+(1557255342355259360ULL)))));
        var_33 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [16U] [i_17] [i_17 + 1]))) > (2661327103U)));
        arr_78 [i_17] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_30 [16U] [i_17])), (arr_57 [i_17] [i_17] [i_17]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_73 [(unsigned short)6])))))))) + (arr_68 [i_17] [i_17 - 1] [i_17] [i_17] [i_17 - 1] [i_17])));
    }
}
