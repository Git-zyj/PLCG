/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224819
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_10 += ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) var_5)) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (4598446390070132655LL) : (4598446390070132655LL)))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                        {
                            var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17362667975309518734ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-40))));
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [13U] [i_1] [i_3] [i_4]))) : (var_0)))))) ? ((-(((var_9) << (((((/* implicit */int) arr_9 [i_0] [i_3] [14ULL])) - (51359))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] [7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) arr_2 [i_0] [i_3]))), (var_0)))) ? (((/* implicit */long long int) max((((/* implicit */int) ((short) (unsigned char)128))), ((+(((/* implicit */int) var_4))))))) : (((max((((/* implicit */long long int) (signed char)-53)), (1927000862836887303LL))) << (((arr_6 [(_Bool)1] [(_Bool)1] [i_2 - 1] [(_Bool)1]) - (3222157571U)))))));
                            var_13 = ((/* implicit */_Bool) (((((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) arr_10 [(unsigned char)11] [i_1] [19ULL] [i_1] [i_1]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */long long int) var_1)) == ((+(arr_4 [i_1]))))))));
                            arr_15 [i_0] [i_1] [i_2 + 1] [(_Bool)1] [(signed char)18] [i_3] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_4 [10U])) ? (var_1) : (((/* implicit */int) arr_11 [(unsigned short)19] [(unsigned short)19] [(unsigned char)18] [i_3] [i_5] [i_3]))))))), (((max((var_0), (((/* implicit */long long int) var_4)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_1))))))));
                            var_14 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_3)))) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 1] [(_Bool)1])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_3)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_12 [i_0] [i_0] [i_1] [i_2] [i_0] [(unsigned char)3] [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1084076098400032864ULL)))))));
                            arr_16 [i_1] [1LL] [i_2] [i_3] [i_1] [8ULL] [2LL] = (((((+(((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_2)))))) + (2147483647))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3))))) : (((((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_3])) + (var_1))))));
                        }
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned int) var_7))) ? (max((var_0), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_3]))))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) arr_19 [i_7] [i_6])) - (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (1084076098400032881ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) : (max((((/* implicit */long long int) arr_9 [i_6] [i_6] [(short)13])), (var_3))))))));
                arr_22 [i_6] = ((/* implicit */unsigned short) var_0);
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    arr_25 [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                    arr_26 [i_6] [9LL] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_6))))) | (((/* implicit */int) max((var_6), (((/* implicit */short) var_8)))))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_8] [i_6])) : (((/* implicit */int) var_2)))) == (((/* implicit */int) var_7)))))));
                }
                /* vectorizable */
                for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    var_17 = (+(((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) arr_21 [i_6] [3LL])) + (27581))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_4))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_6] [i_9 + 1] [i_9 - 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    arr_31 [i_6] [(unsigned char)9] [(unsigned char)0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3864584233241139945LL)) || (((/* implicit */_Bool) (+(5ULL))))));
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((1973822410U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3))))))) != (min((((((/* implicit */_Bool) var_3)) ? (var_0) : (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_10] [i_10] [i_10] [i_7] [i_7] [i_6])) : (((/* implicit */int) arr_17 [4] [i_6])))))))));
                    var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_6] [(_Bool)1] [i_10] [(short)8] [i_7] [i_6]))))) : (((((/* implicit */_Bool) arr_5 [(signed char)3] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_30 [(signed char)8] [(signed char)8])))))));
                }
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    arr_36 [i_6] [i_6] [i_11] [i_11] &= var_8;
                    var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_7] [i_7] [i_7] [i_11]))) : (var_9)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_7]))) : (arr_24 [i_11])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) arr_34 [i_6] [(_Bool)1] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1))))) : (((((/* implicit */_Bool) 8163975016497320815ULL)) ? (((/* implicit */unsigned long long int) -1152921504606846976LL)) : (17362667975309518746ULL)))))));
                    var_23 |= ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_6] [8U]))))) == (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_0))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(-1009641840033837833LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) var_1)))))))))));
                }
                arr_37 [i_6] [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((max((var_2), (((/* implicit */unsigned short) var_8)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))))))));
                var_24 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_35 [i_7])))) / (((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) - (130))))) - (((((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_5))))) - (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_5))))))));
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (((var_8) ? (((/* implicit */unsigned int) var_1)) : (var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((((/* implicit */int) var_2)) == (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))))))));
    /* LoopSeq 1 */
    for (int i_12 = 0; i_12 < 24; i_12 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 1; i_13 < 22; i_13 += 2) 
        {
            arr_42 [i_12] [i_13] = ((/* implicit */long long int) var_4);
            arr_43 [i_13] = ((/* implicit */unsigned char) var_1);
            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_13]))))) ? ((+(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) var_5))))))) ? (min((((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [4ULL] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_41 [i_12] [i_12] [i_12])))))) : (((((((/* implicit */_Bool) arr_38 [i_12])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_13 - 1]))))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        }
        /* LoopSeq 3 */
        for (int i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * ((~(((((/* implicit */_Bool) 5249855659360830350ULL)) ? (((/* implicit */unsigned long long int) -4598446390070132627LL)) : (2702129167665567928ULL)))))));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_4))));
            arr_46 [i_12] = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 13196888414348721293ULL)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (unsigned char)117)))) / (((((/* implicit */int) var_5)) + (var_1)))))) == (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) != (-3116158246399163868LL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1214241084)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) : (3515934634U)))) : (8116394817625358894LL)))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_14])) ? (arr_44 [i_14]) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) var_7))))) : (((((/* implicit */_Bool) arr_44 [i_12])) ? (arr_44 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        }
        for (unsigned long long int i_15 = 2; i_15 < 21; i_15 += 3) 
        {
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)2225))))), (((((/* implicit */_Bool) 13196888414348721245ULL)) ? (13196888414348721265ULL) : (((/* implicit */unsigned long long int) 2696081740U))))))) ? (((var_8) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (arr_38 [8U]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_38 [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3))) != (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))))));
            arr_50 [i_15 - 1] [(_Bool)1] = ((long long int) max(((+(var_0))), (min((var_3), (((/* implicit */long long int) var_9))))));
        }
        for (short i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (int i_17 = 4; i_17 < 22; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_12])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) : (min((arr_45 [i_18] [i_18]), (((/* implicit */unsigned long long int) var_8))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) max((arr_54 [i_16]), (((/* implicit */long long int) var_4))))) : ((-(arr_51 [i_16] [i_16]))))) : (((/* implicit */unsigned long long int) var_9))));
                        arr_57 [i_12] [i_12] [i_16] [i_16] [i_17 - 4] [i_18] = ((/* implicit */long long int) ((_Bool) max((var_6), (((/* implicit */short) ((var_0) > (((/* implicit */long long int) var_1))))))));
                    }
                } 
            } 
            arr_58 [i_16] [i_16] = ((/* implicit */long long int) max((5249855659360830346ULL), (((/* implicit */unsigned long long int) (unsigned char)117))));
        }
        var_33 = ((/* implicit */unsigned char) var_9);
        arr_59 [i_12] = ((/* implicit */signed char) ((((/* implicit */int) max((var_6), (((/* implicit */short) arr_53 [i_12] [i_12] [i_12] [i_12]))))) & (((/* implicit */int) var_8))));
    }
}
