/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37814
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
    var_14 |= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    var_15 = ((/* implicit */unsigned char) (signed char)112);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_6);
        arr_4 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((939524096U) <= (((/* implicit */unsigned int) 1866603379)))))) - ((+(((/* implicit */int) arr_2 [i_0 + 1]))))));
        arr_5 [i_0 + 3] = ((unsigned short) ((arr_1 [i_0 + 3]) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) arr_2 [i_0 + 3]))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3355443183U)));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_17 [4ULL] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned char) arr_2 [i_4]))) ? (((/* implicit */long long int) ((unsigned int) arr_16 [i_4] [i_1] [i_1]))) : (arr_15 [i_1] [i_2] [i_1] [i_1])))));
                        arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_16 [i_4] [3U] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3]))) : (arr_11 [i_1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (2733708062U)));
                        arr_19 [i_1] [5U] [i_1] [(unsigned short)8] [5U] [i_2] = ((/* implicit */signed char) (+(min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20306))) : (-8237128107166344646LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))));
                        arr_20 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            arr_23 [(signed char)2] [i_3] [i_3] [i_3] [i_4] [(signed char)2] = ((/* implicit */unsigned char) arr_2 [i_1]);
                            arr_24 [i_2] = ((/* implicit */unsigned char) min((arr_12 [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_1]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            arr_28 [i_3] [i_2] [i_3] [i_4] [(unsigned char)2] |= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                            arr_29 [i_3] [i_2] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) < (((((/* implicit */_Bool) 575424829U)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) ((short) -1862649374)))))));
                            arr_30 [6LL] [i_1] [6LL] [i_1] [i_1] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (signed char)125)), (3214078308U)))));
                            arr_31 [i_1] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) ((unsigned int) (+(arr_9 [i_1] [i_4]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            arr_34 [i_1] [i_1] [(_Bool)1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_2] [(short)4])) ? (((/* implicit */int) (unsigned short)63767)) : (((/* implicit */int) arr_27 [i_1] [i_2]))))) / (((((/* implicit */_Bool) 0U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2)))))));
                            arr_35 [i_3] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)46751))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            arr_40 [i_1] [(unsigned short)8] [(unsigned short)8] [i_3] [i_8] &= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            arr_41 [i_1] [i_1] [i_1] [6U] [i_1] [i_1] [i_1] = ((/* implicit */int) (+(var_11)));
                            arr_42 [i_3] [i_4] [i_3] [i_3] [2] [i_1] [i_3] = ((/* implicit */unsigned long long int) 1001514655);
                            arr_43 [i_1] [i_8] [i_3] = max((((/* implicit */unsigned long long int) (+(arr_11 [i_1] [i_1] [i_8] [i_4])))), (((((/* implicit */_Bool) arr_26 [i_1] [i_2] [i_3] [i_3] [i_1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) : (arr_38 [i_1] [i_3] [i_3] [i_4] [i_8]))));
                            arr_44 [i_8] [i_2] [i_3] [i_1] [i_2] = ((/* implicit */unsigned short) arr_39 [i_1] [i_1]);
                        }
                    }
                } 
            } 
        } 
        arr_45 [i_1] = arr_10 [(unsigned char)0] [i_1];
    }
    for (short i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        arr_48 [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)9))));
        arr_49 [(_Bool)1] [(unsigned char)0] = (unsigned short)45464;
        arr_50 [i_9] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (unsigned short)47406)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)50)))) == (((/* implicit */int) arr_2 [i_9])))), ((_Bool)1)));
    }
    /* LoopSeq 2 */
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_11 = 2; i_11 < 15; i_11 += 4) /* same iter space */
        {
            arr_55 [(unsigned short)5] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_53 [i_11 + 1] [i_11] [i_11 + 1])) ? (((/* implicit */int) arr_51 [i_11 - 1] [i_11])) : (((/* implicit */int) arr_51 [i_11 - 1] [2ULL])))), ((+(((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))));
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                for (signed char i_13 = 2; i_13 < 14; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            arr_64 [i_10] [i_10] [13U] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_51 [(unsigned short)13] [i_14]), (((/* implicit */signed char) arr_1 [i_13])))))) ^ (((((/* implicit */_Bool) var_8)) ? (4168774008U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_10] [i_11 - 1]))))))));
                            arr_65 [i_12] [(unsigned char)12] [i_12] [0ULL] [i_14] [(unsigned char)3] [i_10] = ((/* implicit */signed char) arr_58 [i_13 - 1] [i_13 - 1] [i_13] [i_13 + 1] [i_13 - 2]);
                        }
                    } 
                } 
            } 
            arr_66 [i_11 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_53 [i_11] [i_11 - 1] [i_11 - 1]))) ? ((+(((/* implicit */int) arr_53 [i_11] [i_11 - 2] [i_11 - 1])))) : (((/* implicit */int) (signed char)64))));
            arr_67 [(unsigned char)0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_10] [i_10]))) + (9U)))) ? (((((/* implicit */int) (unsigned char)225)) + (((/* implicit */int) (short)-1312)))) : (((/* implicit */int) (unsigned char)155))))), (max((((var_0) - (arr_54 [i_11]))), (((/* implicit */unsigned int) (_Bool)1)))));
        }
        for (signed char i_15 = 2; i_15 < 15; i_15 += 4) /* same iter space */
        {
            arr_71 [i_15] [i_15] = ((/* implicit */short) ((unsigned char) min((arr_56 [i_15] [i_15 + 1] [i_10] [i_10]), (((/* implicit */int) (_Bool)1)))));
            arr_72 [i_10] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((short) var_11))) || (((/* implicit */_Bool) var_3)))), (((((/* implicit */_Bool) arr_57 [i_10] [i_15 - 1] [i_10] [i_15])) || (((/* implicit */_Bool) arr_57 [i_15] [i_15 + 1] [i_15] [i_15]))))));
        }
        for (signed char i_16 = 2; i_16 < 15; i_16 += 4) /* same iter space */
        {
            arr_77 [i_10] [i_10] = ((/* implicit */short) (unsigned char)24);
            arr_78 [i_16] [i_16] [i_10] = ((/* implicit */signed char) (+((((~(var_11))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))))));
        }
        arr_79 [i_10] [i_10] = (+(((((/* implicit */_Bool) (short)21822)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (short)-1307)))));
    }
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
    {
        arr_84 [18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_17 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-15269)) + (arr_81 [i_17 - 1])))) : ((+(arr_83 [i_17])))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) 0U)))) + ((+(1729587155741760866LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (+(-6883205452886219464LL))))))));
        arr_85 [i_17 - 1] = ((/* implicit */unsigned char) ((148843221327421104LL) >= (((/* implicit */long long int) var_2))));
    }
}
