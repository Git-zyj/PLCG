/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246644
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
    var_13 = (~(((/* implicit */int) var_4)));
    var_14 += ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)86)) <= (((/* implicit */int) (short)8))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2109971971U)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) || ((_Bool)1))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_2 - 1]) % (arr_0 [i_0] [i_2 - 2])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)173)) << (((((/* implicit */int) var_12)) - (10853))))) * (((/* implicit */int) arr_7 [i_0] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11]))))) : (((unsigned long long int) arr_4 [i_2 - 3] [i_2 - 2] [i_2 + 2]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2815570250U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_1] [i_3] [i_3] [i_1] [i_2])) == (((/* implicit */int) arr_10 [i_4] [i_1] [i_4] [i_3] [i_1] [i_1]))))))));
                                var_18 += ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_3]);
                                arr_13 [i_4] [i_3] [i_4] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */int) (short)-8)), (arr_0 [i_0] [i_0]))), (((((/* implicit */int) (unsigned char)76)) * (((/* implicit */int) (unsigned short)28672))))))) ? (((/* implicit */int) (unsigned char)12)) : (((((/* implicit */int) (unsigned short)13822)) & (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_19 = ((/* implicit */unsigned long long int) 141863388262170624LL);
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) var_10);
        arr_18 [i_5] [i_5] = ((((/* implicit */int) ((arr_3 [i_5]) > (arr_3 [i_5])))) ^ (max((arr_3 [i_5]), (arr_3 [i_5]))));
        var_21 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_0 [i_5] [(unsigned short)11])) && (((/* implicit */_Bool) arr_17 [i_5] [i_5])))), (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_3 [i_5])) : (var_7))))) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5]))));
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))) == (var_7))))));
                    arr_26 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */unsigned char) arr_9 [i_6] [i_6] [i_6] [i_6 + 1]);
                    arr_27 [i_6] [i_7] [i_6] = ((/* implicit */short) ((unsigned char) (-(var_5))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((short) arr_4 [i_6 + 1] [i_6 + 1] [i_6])))));
        var_24 = ((/* implicit */unsigned char) var_11);
        arr_28 [i_6] = ((/* implicit */_Bool) (-(arr_5 [i_6 - 1])));
    }
    /* vectorizable */
    for (long long int i_9 = 1; i_9 < 10; i_9 += 2) /* same iter space */
    {
        arr_32 [i_9] = ((/* implicit */short) ((((((/* implicit */int) var_4)) << (((/* implicit */int) arr_29 [i_9 - 1] [i_9])))) >> (((747016263550594145LL) - (747016263550594136LL)))));
        var_25 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) var_8)) : (((0ULL) >> (((var_9) - (5310673821360124155LL))))));
    }
    var_26 *= ((((/* implicit */_Bool) ((min((((/* implicit */long long int) 260046848)), (-7987426416875519430LL))) * (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11)))));
    /* LoopSeq 4 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (unsigned short)25681))));
        var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)36867)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)28668)))))))) ? (var_0) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)51695)) : (((/* implicit */int) (short)2215)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13817))) > (arr_15 [i_10])))))))));
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 8; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                for (short i_13 = 1; i_13 < 10; i_13 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < ((-(arr_19 [(short)6] [(short)6])))))), (((((/* implicit */_Bool) arr_2 [i_13] [i_11 - 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10581))))))))));
                        arr_47 [i_10] [i_13] [i_12] = ((/* implicit */_Bool) min(((-(var_9))), (5141567678979648004LL)));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967271U)) || (((/* implicit */_Bool) -3119167120957168248LL))));
                    }
                } 
            } 
        } 
        arr_48 [i_10] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) arr_34 [i_10])), (arr_21 [i_10])))));
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (-(var_2))))));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            var_32 ^= ((/* implicit */short) (-(arr_51 [i_15])));
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                arr_56 [i_14] [i_15] [i_15] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_14] [i_14] [i_15] [i_16])) ? (((/* implicit */int) arr_6 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) (short)-7991))));
                var_33 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (unsigned short)3100)) : (((/* implicit */int) (short)-5919))))) ? (((/* implicit */unsigned long long int) arr_0 [i_14] [(_Bool)1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_14] [i_15] [i_15] [(unsigned short)0]))) | (var_0)))));
                arr_57 [i_14] [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_14] [i_14] [19U] [i_15] [i_15])) | (arr_3 [(short)19])))) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) arr_49 [i_14] [i_15]))));
                arr_58 [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) (-(arr_52 [i_14] [i_15] [i_16])));
            }
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_63 [i_17] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) > (var_8)))) & (((/* implicit */int) arr_16 [i_17]))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_14] [i_17] [i_14] [i_17])) ? (((/* implicit */int) arr_6 [15ULL] [i_17] [i_14] [i_17])) : (((/* implicit */int) arr_6 [i_14] [i_14] [i_14] [i_14]))));
            var_35 = ((/* implicit */_Bool) (unsigned short)65408);
            arr_64 [i_17] [i_17] = ((/* implicit */short) ((unsigned short) arr_1 [i_14]));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 1; i_18 < 16; i_18 += 2) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 2) 
            {
                {
                    arr_70 [i_14] [i_18] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [18]))) : (arr_1 [i_14])));
                    var_36 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                }
            } 
        } 
        var_37 -= ((/* implicit */unsigned short) ((5141567678979648004LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_71 [i_14] = ((/* implicit */short) ((((/* implicit */long long int) arr_67 [i_14] [i_14] [i_14])) >= (((long long int) var_5))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)156)) << (((((/* implicit */int) (unsigned char)96)) - (96)))));
        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (-(((/* implicit */int) ((var_6) || (((/* implicit */_Bool) var_1))))))))));
        /* LoopNest 2 */
        for (unsigned int i_21 = 3; i_21 < 17; i_21 += 4) 
        {
            for (long long int i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                {
                    arr_81 [i_20] [i_21 - 2] [i_21] [i_22] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_20] [i_21]))) : (((unsigned long long int) (unsigned char)167)))) & (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)1)))))))));
                    var_40 = ((/* implicit */int) ((((/* implicit */long long int) arr_72 [i_21])) % (((((/* implicit */_Bool) (short)2544)) ? (3853017620534580000LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                    var_41 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_62 [i_20]), (((/* implicit */short) var_3)))))));
                }
            } 
        } 
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        arr_85 [i_23] [i_23] = ((/* implicit */unsigned short) ((arr_51 [i_23]) & (((/* implicit */long long int) ((/* implicit */int) ((arr_75 [i_23] [i_23]) || (((/* implicit */_Bool) 3853017620534580009LL))))))));
        var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_65 [i_23]))));
        var_43 = ((/* implicit */unsigned short) var_9);
    }
}
