/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191951
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_13 *= ((/* implicit */unsigned long long int) ((((arr_1 [i_0 - 2]) == (arr_0 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (arr_0 [i_0 - 2] [i_0 - 1]))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned char)241))))));
        var_14 = min((((/* implicit */int) var_6)), (min((min((var_9), (var_9))), (((/* implicit */int) min(((signed char)111), ((signed char)-111)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */int) var_3)) % (((/* implicit */int) (signed char)110)))))) <= ((-(((/* implicit */int) var_10))))));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)21175)))) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_6)))))))) && (((/* implicit */_Bool) var_7)));
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_2 [i_1]))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-106)))))));
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)-98)))), (((/* implicit */int) ((signed char) min((var_3), (var_8)))))));
    }
    for (unsigned char i_2 = 3; i_2 < 17; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((arr_3 [(short)12]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (4141564994U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)110), (((/* implicit */signed char) arr_3 [i_2]))))))))) == (((((/* implicit */_Bool) arr_2 [15ULL])) ? (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_2]))))))))))));
        var_19 &= ((/* implicit */unsigned long long int) min((((unsigned char) (short)8191)), (var_8)));
    }
    for (int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) (signed char)-91))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)1)))) <= ((~(((/* implicit */int) (signed char)(-127 - 1)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (((((/* implicit */_Bool) 260046848U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_4))))))));
            var_21 ^= ((min((arr_8 [i_4] [i_3 + 1]), (arr_8 [i_3 - 1] [i_3 - 1]))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            arr_14 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3 - 1])) ? (arr_8 [7U] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15360)))))) ? (((var_5) * (((/* implicit */unsigned long long int) arr_8 [(short)11] [i_3 + 1])))) : (((/* implicit */unsigned long long int) (+(arr_8 [i_3] [i_3 + 1]))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_13 [i_3]))));
        }
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9515055687883620586ULL)) ? (arr_8 [i_3 + 1] [i_3 + 1]) : (arr_8 [i_3 + 1] [i_3 + 1]))))));
        /* LoopNest 3 */
        for (long long int i_5 = 2; i_5 < 23; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                        {
                            var_24 = ((((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-107)), (var_10)))) == ((-(((/* implicit */int) (signed char)-110)))))) ? (min(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (0))), (((/* implicit */int) arr_18 [i_5 - 2] [i_3 + 1] [i_6 + 1])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_23 [i_8] [i_3]))))) : (((/* implicit */int) ((_Bool) (_Bool)1))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (unsigned char)4)))))));
                            arr_25 [i_7] [i_5] [(unsigned char)8] [i_7] [i_8] = ((/* implicit */_Bool) 59353379U);
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                        {
                            arr_28 [(_Bool)1] [i_5] [i_6] [i_9] [i_9] [i_5] [i_9] |= var_11;
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_3 + 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_18 [i_3 + 1] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1] [i_3 - 1]))));
                        }
                        for (short i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_26 [i_10] [i_5] [i_5] [(signed char)12] [i_7] [0ULL]))));
                            var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1701816509U)) ? (min((max((arr_11 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_8 [i_7] [i_3 + 1])))), (((/* implicit */unsigned long long int) arr_26 [i_10] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])))) : (((/* implicit */unsigned long long int) arr_16 [i_3] [i_3 + 1] [i_3]))));
                            var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-110)), (var_10)))), ((~(2593150770U)))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) arr_21 [(short)1] [(short)1] [i_6] [i_6] [i_7] [i_7])), (arr_24 [i_6]))))))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_27 [i_3] [i_3] [i_5] [i_6 + 1] [i_6] [i_6]), (var_10)))) ? (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_6 + 1])) : (min((arr_15 [i_3 - 1] [i_5 - 1]), (arr_15 [i_3 - 1] [i_5 - 2])))));
                        }
                        for (short i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                        {
                            var_32 -= ((/* implicit */unsigned long long int) ((arr_30 [(signed char)21] [i_5] [i_6] [i_7] [i_11] [i_3]) % (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_29 [i_3] [i_11] [i_3] [(unsigned short)10] [i_3 - 1] [i_3] [i_3 - 1]))) != (arr_30 [i_5] [i_5] [(_Bool)1] [i_5 - 2] [i_5] [i_6 + 1]))))));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((min((((/* implicit */int) (signed char)-91)), (arr_16 [i_6 + 1] [i_5 + 1] [i_3 - 1]))) + (2147483647))) << (((((min((arr_15 [i_3] [i_3]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)13659))) != (arr_8 [i_7] [i_6])))))) + (1031087205))) - (3))))))));
                        }
                        arr_34 [i_3 + 1] [i_7] = ((/* implicit */unsigned short) arr_15 [i_6] [i_3]);
                    }
                } 
            } 
        } 
    }
    var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)1023)), (var_0)))) << (((((var_12) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) - (237)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (signed char)87)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
}
