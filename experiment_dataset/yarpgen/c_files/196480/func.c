/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196480
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
    var_19 = min((((/* implicit */unsigned short) var_10)), (max((min((var_7), (((/* implicit */unsigned short) var_18)))), (((/* implicit */unsigned short) var_18)))));
    var_20 = min((var_11), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) var_14)), (var_3))), (min((var_9), (((/* implicit */unsigned short) var_14))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((384378372), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))), (min((6008243472225320921LL), (((/* implicit */long long int) var_18))))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((max((-6008243472225320911LL), (((/* implicit */long long int) arr_4 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1])))), (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned short) (short)29073))))))))));
                    arr_6 [i_1] = ((/* implicit */_Bool) min((max((-6008243472225320911LL), (((/* implicit */long long int) arr_4 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1])))), (((/* implicit */long long int) max((arr_4 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]), (arr_4 [i_2] [i_2] [i_2 - 1] [i_2 + 1]))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((/* implicit */short) arr_0 [i_0] [i_0])), (max((((/* implicit */short) arr_4 [i_0] [i_0] [i_0] [i_0])), (var_6)))))), (min((max((((/* implicit */unsigned int) var_10)), (arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) max(((unsigned short)43511), (((/* implicit */unsigned short) (short)-29073)))))))));
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)29073))))), (min((max((((/* implicit */unsigned long long int) arr_3 [i_3] [i_3] [i_4])), (arr_9 [6] [i_4]))), (((/* implicit */unsigned long long int) min(((unsigned short)43511), (var_8))))))));
            /* LoopSeq 3 */
            for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
            {
                arr_16 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) var_1)), (6008243472225320910LL))), (max((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned short) (short)29073))))), (6008243472225320910LL)))));
                /* LoopSeq 4 */
                for (short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)5)), ((unsigned short)41808)))), (max((arr_12 [i_5 + 3]), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)85)), (arr_5 [i_3] [i_3] [19LL]))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) (unsigned char)193);
                        var_26 = ((/* implicit */int) -6008243472225320901LL);
                        arr_22 [i_3] = ((/* implicit */unsigned short) -6008243472225320922LL);
                        arr_23 [i_5] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) (short)30662);
                        var_27 = ((/* implicit */unsigned short) -6008243472225320901LL);
                    }
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        arr_26 [i_8] = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_8] [i_5] [i_5] [i_5 - 2] [i_4] [(short)10])), (var_9)))), (max((var_4), (var_4)))));
                        var_28 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (short)-29078)), (var_16))), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)16376)))), (min((arr_3 [i_5] [i_4] [i_3]), (((/* implicit */unsigned int) (signed char)40)))))))));
                        var_29 *= ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned char) var_13)), (arr_4 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1])))), (min((5901812722408757052LL), (((/* implicit */long long int) (short)29045))))));
                        var_30 ^= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_5)), (arr_9 [i_4] [i_5 - 2]))), (max((((/* implicit */unsigned long long int) (signed char)116)), (arr_9 [i_3] [i_3])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_31 |= ((/* implicit */unsigned short) 32600878U);
                        arr_29 [i_5] [i_5] [i_5] [i_6] [i_9] [i_4] = ((/* implicit */short) 5901812722408757060LL);
                        arr_30 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */short) (unsigned char)25);
                        arr_31 [i_3] [(unsigned short)6] [i_3] = ((/* implicit */unsigned short) 6008243472225320909LL);
                        var_32 = ((/* implicit */short) 6008243472225320910LL);
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_35 [i_3] [i_4] [i_5 + 2] [(short)12] [i_10] = (unsigned short)33850;
                        var_33 = ((/* implicit */long long int) (unsigned short)35756);
                        var_34 |= (signed char)(-127 - 1);
                    }
                }
                for (short i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_19 [i_5] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5] [i_5 + 2]), (arr_19 [i_5] [i_5] [i_5 + 1] [(signed char)3] [i_5] [i_5 - 2])))), (min((((/* implicit */long long int) (unsigned char)35)), (arr_2 [i_11] [i_5 + 1])))));
                    var_36 = ((/* implicit */int) max((((/* implicit */unsigned int) max(((unsigned char)252), (((/* implicit */unsigned char) arr_0 [i_11] [i_3]))))), (max((max((4262366418U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)85)), ((short)30106))))))));
                    arr_39 [i_3] [i_11] = ((/* implicit */long long int) max((max((((/* implicit */unsigned short) arr_11 [i_4])), ((unsigned short)49160))), (min((max(((unsigned short)22032), (((/* implicit */unsigned short) (unsigned char)153)))), (((/* implicit */unsigned short) max((((/* implicit */short) var_1)), ((short)18857))))))));
                }
                for (short i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned short) max((min((-5769334372941315283LL), (((/* implicit */long long int) max(((signed char)-127), (var_18)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (var_11))))));
                    var_38 ^= ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (unsigned char)133)), (7LL))), (((/* implicit */long long int) min(((short)18857), (((/* implicit */short) (signed char)(-127 - 1))))))));
                }
                for (short i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned char) min((min((1128610233U), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_14 [i_3] [18ULL] [i_5] [i_13])), (var_10)))))), (((/* implicit */unsigned int) min((arr_37 [i_5] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5] [i_5]), (max(((signed char)-127), ((signed char)126))))))));
                    var_40 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((arr_40 [i_5] [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 1] [i_5]), (((/* implicit */unsigned char) var_12))))), (max((((/* implicit */long long int) arr_40 [(signed char)2] [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 3])), (8421795898077325418LL)))));
                }
                var_41 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_9)), (6008243472225320914LL))), (((/* implicit */long long int) max((arr_10 [i_5 + 1]), (((/* implicit */short) var_13)))))));
            }
            for (unsigned int i_14 = 2; i_14 < 17; i_14 += 3) /* same iter space */
            {
                arr_49 [i_3] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_18), (var_13)))), (min((((/* implicit */unsigned int) arr_21 [i_3] [i_14 + 1] [i_14 + 3] [i_14] [i_14])), (var_11)))));
                var_42 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((short)18304), (((/* implicit */short) var_18))))), (max((20LL), (((/* implicit */long long int) (signed char)-64))))));
                var_43 = max((min((3U), (((/* implicit */unsigned int) arr_17 [i_3] [i_3] [i_4] [i_14 + 3])))), (max((4294967289U), (((/* implicit */unsigned int) var_12)))));
            }
            for (unsigned int i_15 = 2; i_15 < 17; i_15 += 3) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned char) var_14)), (arr_11 [i_15 - 1]))), (min((var_10), (arr_11 [i_15 - 2]))))))));
                var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) min((max((arr_13 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_15 + 1]), (((/* implicit */unsigned short) (signed char)64)))), (min((arr_13 [i_15 + 2] [i_15 - 2] [i_15 + 2] [i_15 - 2]), (arr_13 [i_15 + 3] [i_15 - 1] [i_15 + 3] [i_15 + 2]))))))));
                arr_53 [i_15] [i_15] [i_15] [i_3] = ((/* implicit */unsigned char) min((min((32600878U), (((/* implicit */unsigned int) (unsigned short)65124)))), (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) arr_20 [i_15 + 3] [i_15] [i_15] [i_15 - 2] [i_15 + 3] [i_15 - 1])))))));
                var_46 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((min((-1816285045), (((/* implicit */int) arr_46 [i_15])))), (((/* implicit */int) (unsigned short)65535))))), (min((min((var_16), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-20852)), (4262366421U))))))));
                var_47 = ((/* implicit */unsigned short) min((min((6008243472225320906LL), (arr_52 [i_15 - 1] [i_15 - 1] [17LL] [i_15 - 2]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_11))))));
            }
        }
        arr_54 [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) arr_50 [i_3]))))), (min((arr_42 [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) (unsigned char)62))))));
        var_48 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) max((var_5), (1040473818)))), (min((((/* implicit */long long int) var_0)), (arr_1 [i_3] [i_3])))));
    }
    for (int i_16 = 0; i_16 < 20; i_16 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_17 = 1; i_17 < 18; i_17 += 4) 
        {
            var_49 *= max((max((15777622990287381061ULL), (((/* implicit */unsigned long long int) (unsigned short)8)))), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) var_9))))));
            var_50 = ((/* implicit */short) max((min((((/* implicit */int) arr_43 [i_17] [i_17 + 2] [i_17] [i_17 + 1])), (var_5))), (((/* implicit */int) min((arr_43 [i_16] [i_17] [i_17] [i_17 + 2]), (((/* implicit */short) var_15)))))));
        }
        for (short i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            arr_63 [(unsigned char)9] [i_18] [i_16] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned short) arr_33 [i_18] [i_18] [i_16] [i_16] [i_16] [i_18] [i_16]))))), (max((((/* implicit */long long int) arr_3 [i_16] [i_16] [i_18])), (var_16)))));
            var_51 = min((((/* implicit */unsigned int) max((arr_0 [i_16] [i_16]), ((signed char)22)))), (min((1U), (((/* implicit */unsigned int) var_5)))));
        }
        var_52 = ((/* implicit */long long int) max((((/* implicit */short) min((var_1), (arr_4 [i_16] [i_16] [(signed char)3] [i_16])))), (min(((short)-20852), (((/* implicit */short) (signed char)94))))));
        var_53 = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_14 [i_16] [i_16] [i_16] [i_16]), (var_13)))), (max((((/* implicit */int) var_0)), (var_2)))));
        var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) min((max((((/* implicit */long long int) arr_13 [i_16] [i_16] [i_16] [i_16])), (arr_55 [i_16]))), (max((((/* implicit */long long int) 1816285044)), (arr_55 [i_16]))))))));
    }
    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_20 = 2; i_20 < 19; i_20 += 3) 
        {
            for (unsigned short i_21 = 0; i_21 < 22; i_21 += 1) 
            {
                {
                    arr_70 [i_21] [i_21] [i_21] = ((/* implicit */short) max((max((arr_68 [i_20 + 3] [i_20 + 2] [i_20 - 1]), (((/* implicit */unsigned short) (short)20865)))), (max((arr_68 [i_20 + 3] [i_20 + 2] [i_20 - 1]), (arr_68 [i_20 + 3] [i_20 + 2] [i_20 - 1])))));
                    var_55 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_17)), (4262366418U)))), (max((7446318311736142468ULL), (((/* implicit */unsigned long long int) arr_64 [i_20 + 3]))))));
                }
            } 
        } 
        var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) min((max(((unsigned short)1897), ((unsigned short)14443))), (max(((unsigned short)0), (((/* implicit */unsigned short) arr_64 [i_19])))))))));
        arr_71 [i_19] [i_19] = ((/* implicit */int) min((((/* implicit */unsigned int) max(((short)20863), (((/* implicit */short) var_0))))), (min((0U), (((/* implicit */unsigned int) arr_69 [0U] [i_19] [i_19] [(short)0]))))));
    }
}
