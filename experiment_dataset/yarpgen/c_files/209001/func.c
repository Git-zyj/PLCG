/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209001
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (var_0)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1682583992)));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-56746025) : (var_7)))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */long long int) (((_Bool)1) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))))) ? (982385753) : (((/* implicit */int) var_1))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_0]))))))) >> (((((((/* implicit */_Bool) (+(-982385745)))) ? (((((/* implicit */_Bool) 992673671U)) ? (770007190708267402ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))) : (((/* implicit */unsigned long long int) var_7)))) - (770007190708267380ULL)))));
            var_18 = ((/* implicit */short) arr_4 [i_0] [i_0] [i_1]);
            var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((unsigned long long int) 982385744)) != (min((var_8), (((/* implicit */unsigned long long int) arr_5 [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_5 [i_1])) : (var_5)))) ? (min((var_5), (arr_2 [i_0] [i_1]))) : (((/* implicit */long long int) ((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (unsigned short)4095)), (arr_6 [i_4 - 2] [i_4])))));
                        arr_14 [i_0] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_4 + 1] [i_3]))))) | (max((((/* implicit */unsigned long long int) arr_11 [i_4 - 2] [i_3] [i_0])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 992673679U)) : (var_9)))))));
                        var_21 = ((((/* implicit */_Bool) ((arr_6 [i_3] [i_3]) - (arr_6 [i_2] [i_3])))) ? (min((((/* implicit */int) var_10)), (var_4))) : (((((/* implicit */int) ((signed char) var_11))) - (982385758))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_0] [i_2] [i_0] [i_0])))) == (((6917529027641081856ULL) * (((/* implicit */unsigned long long int) arr_8 [i_0] [(unsigned char)8])))))))));
            var_23 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_5 [i_2])))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 4) 
        {
            arr_18 [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (var_0))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 3740852875U)))))))) : ((((_Bool)1) ? (var_0) : (((unsigned int) var_5))))));
            var_24 = ((/* implicit */signed char) min((min((arr_8 [i_5 + 2] [i_0]), (arr_8 [i_5 + 1] [(unsigned char)8]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32639)))))));
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_21 [i_6] [i_0] = ((unsigned short) min((((int) arr_5 [i_0])), (arr_6 [i_0] [i_0])));
            var_25 = ((/* implicit */unsigned char) min(((unsigned short)61414), (((/* implicit */unsigned short) ((var_7) < (arr_6 [i_0] [i_6]))))));
            var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) 3302293622U))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -982385751)))) : (var_5))) != (((/* implicit */long long int) (((!((_Bool)1))) ? (399150773U) : (arr_0 [i_6]))))));
        }
    }
    for (short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            var_27 = ((/* implicit */long long int) (unsigned char)216);
            var_28 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (1143914305352105984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) ? (((5059497932293897183ULL) | (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)237), (((/* implicit */unsigned char) var_11)))))))));
            var_29 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_22 [i_7] [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_7] [i_8] [i_7])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7]))) : (var_2)))))));
            arr_27 [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4111))))) | (((/* implicit */int) (unsigned char)19))))) ? (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13886)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7]))) : (3302293624U)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)42)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_6))))))));
        }
        var_30 = ((/* implicit */unsigned long long int) arr_5 [i_7]);
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
    {
        arr_30 [i_9] |= ((/* implicit */unsigned char) (short)-3937);
        var_31 ^= ((/* implicit */long long int) ((arr_8 [i_9] [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_9])))));
        var_32 *= ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) | (18446744073709551615ULL)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_10 = 2; i_10 < 21; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            {
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10 + 1]))) : (((((/* implicit */_Bool) 3628766542U)) ? (((/* implicit */unsigned long long int) 982385756)) : (2475465705711826007ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28237)) ? (-982385755) : (((/* implicit */int) (short)18126))))) ? (982385744) : (((/* implicit */int) (unsigned short)13886)))) : (((/* implicit */int) min(((unsigned char)231), (((/* implicit */unsigned char) (signed char)113)))))));
                arr_35 [i_10 + 1] [i_10 + 1] [i_10 + 1] |= ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) >> (((/* implicit */int) (!(((/* implicit */_Bool) -8898664864488634547LL)))))))) ? (var_8) : (((/* implicit */unsigned long long int) 4294967294U)));
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (arr_31 [i_10 + 3])));
                arr_36 [i_10] = ((/* implicit */unsigned long long int) var_13);
            }
        } 
    } 
    var_35 &= ((/* implicit */unsigned int) (-(var_6)));
    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)51636)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) 8U)) : (((((/* implicit */_Bool) 14U)) ? (15540846118984716213ULL) : (((/* implicit */unsigned long long int) var_6)))))))))));
}
