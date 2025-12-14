/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195919
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
    var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)201))))) ? (((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)55)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)187)))) ? (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) (-(((unsigned int) (unsigned char)201)))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((int) ((arr_3 [i_0]) ? (arr_4 [i_0] [(unsigned short)4] [i_1]) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))));
            arr_7 [i_0] = ((/* implicit */long long int) (unsigned char)201);
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((max((arr_4 [i_1] [i_0] [i_0]), (arr_4 [i_1] [i_1] [i_0]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)98)) : (arr_4 [i_0] [i_0] [i_0])))));
            var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_1])) : (arr_4 [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47454))) : (var_3))) > (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))))), (min((((/* implicit */int) (unsigned char)30)), (arr_10 [i_2] [i_0])))));
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)47454)), (3903796999U)));
            var_16 = ((/* implicit */unsigned int) var_2);
        }
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((min((((long long int) (unsigned char)55)), (((/* implicit */long long int) ((unsigned char) var_0))))) * (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_5])))))));
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)55))));
                    }
                } 
            } 
            arr_20 [i_0] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0] [i_3])))))) | (((/* implicit */int) var_5))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1545739121U)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)65))))) != (arr_1 [i_0])));
            var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((int) var_13)) : (((/* implicit */int) max(((unsigned char)54), (((/* implicit */unsigned char) arr_16 [i_0] [8LL] [i_0]))))))) % (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) arr_9 [8ULL])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47454))) >= (9253304656631816635ULL))))))));
        }
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [17LL])) ? (((/* implicit */unsigned int) 1024726216)) : (var_3)))) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0])) : (((arr_3 [i_0]) ? (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))) : (arr_1 [i_0]))) : ((((_Bool)1) ? (18446744073709551604ULL) : (18446744073709551615ULL)))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    {
                        arr_27 [i_7] [i_6] [i_7] [i_8] [19LL] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)190))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_12)))))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_8)))))));
                        var_23 = ((/* implicit */signed char) min((((unsigned long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (13984590872159778033ULL)))), (((/* implicit */unsigned long long int) var_13))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 18; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 19; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            {
                                arr_42 [i_12 - 1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned char)54))));
                                var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_17 [i_9] [i_9])));
                                var_25 += ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_41 [i_10] [i_11] [i_13])) ? (max((-7351593713068522540LL), (((/* implicit */long long int) (unsigned short)18076)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) (((+(1024726215))) != (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (4007664206139813690ULL))))), (12162186189612323262ULL))))));
        var_28 = ((/* implicit */unsigned long long int) var_12);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            var_29 = ((/* implicit */unsigned char) (~(((unsigned int) (unsigned char)0))));
            arr_45 [i_9] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2141842090778845400LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (_Bool)1)))));
        }
        for (int i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            arr_48 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_36 [i_9] [i_9]))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) (unsigned char)161)))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (arr_32 [i_9] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1))))))));
            var_30 = (unsigned char)255;
            arr_49 [i_9] [i_9] = ((/* implicit */unsigned long long int) var_5);
        }
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 12; i_16 += 3) 
    {
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_11)) % (((/* implicit */int) (signed char)-26))))));
        var_32 = var_6;
        var_33 = ((/* implicit */long long int) (signed char)15);
        var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) ^ (6284557884097228355ULL)));
    }
    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) ((_Bool) 3288376525284503600LL))))))))));
    var_36 *= ((/* implicit */unsigned int) ((_Bool) var_2));
}
