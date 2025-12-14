/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38841
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
    var_18 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (unsigned short)25389))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_4 [(short)4] [(short)4]))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)142))))) ? (((((/* implicit */_Bool) 2243320375U)) ? (arr_2 [i_0]) : (((/* implicit */long long int) -5305861)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
            arr_5 [(short)0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20971)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -5305861)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58786))) : (2136228073U)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-83597301594257465LL)))))) ? ((~(-9223372036854775801LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)25830)))));
            arr_6 [(unsigned char)2] = ((/* implicit */unsigned int) arr_3 [7U] [i_1] [i_0]);
            arr_7 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)56)))) : (((((/* implicit */_Bool) (short)18171)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (short)-25835)))))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [0U] [i_0])) : (((/* implicit */int) var_2)))) - (116)))));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((short)645), (((/* implicit */short) var_7))))) * (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)-6071)) : (((/* implicit */int) (short)27530))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) (unsigned short)58786))))) ? (((((/* implicit */_Bool) (unsigned short)26)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_4 [i_0] [i_2])))) : (((/* implicit */int) (unsigned short)57743)))))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_12 [10U] = ((/* implicit */long long int) arr_3 [i_0] [i_2] [i_3]);
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned short)65535))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) (unsigned short)50677)))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2886467806U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)0] [(short)1]))) : (((long long int) ((unsigned short) var_2)))));
            }
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            arr_15 [(short)3] [i_0] = (-(((((/* implicit */_Bool) -3990979272252242814LL)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned short)72)))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) var_6)) ? (4178734296U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_6] [i_0] [i_4] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(signed char)10] [i_4] [i_5])) ? (arr_21 [(signed char)2] [7LL] [i_5] [i_6] [i_5 - 1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [3U] [i_5 - 1])))));
                            var_26 += ((/* implicit */unsigned char) arr_2 [i_0]);
                            arr_24 [i_6] [i_6] [i_5 - 1] [i_4] [i_6] = ((/* implicit */long long int) var_0);
                            var_27 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_19 [i_7] [i_4] [i_5] [i_4] [i_7] [i_4])) ^ (((/* implicit */int) arr_17 [i_0] [i_4] [(unsigned char)5] [i_6])))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) 3748801867U))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) (unsigned short)65485);
            }
            for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((((/* implicit */_Bool) arr_25 [i_0] [9LL])) || (((/* implicit */_Bool) arr_26 [i_0] [i_4] [i_0])))) ? (((((/* implicit */_Bool) arr_26 [i_0] [i_4] [i_0])) ? (arr_18 [3U] [10LL] [(unsigned short)4] [6LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) -1510885029)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_21 [i_4] [i_4] [i_8] [i_4] [i_0] [i_8]))))))));
                var_31 = ((/* implicit */unsigned short) (short)536);
            }
            var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [5U] [i_0] [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_21 [(unsigned char)4] [i_0] [(signed char)0] [(unsigned short)0] [i_4] [8LL])) ? (((/* implicit */unsigned int) 1510885027)) : (var_10)))));
        }
        var_33 = ((/* implicit */long long int) min((min((4294967279U), (2806000555U))), (((((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))) : (arr_18 [(short)8] [9LL] [i_0] [i_0]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-182)))))))));
    }
    var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) ? (((1932381581U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) << (((((/* implicit */int) ((short) (unsigned short)19680))) - (19660)))));
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        for (unsigned int i_10 = 4; i_10 < 9; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    arr_36 [i_9] [i_11] [i_11] [(signed char)7] = ((/* implicit */unsigned char) (((!(((((/* implicit */int) var_13)) > (((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1048512U)));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            {
                                var_35 &= max((((((/* implicit */_Bool) ((long long int) var_13))) ? (((((/* implicit */_Bool) (short)-6073)) ? (arr_21 [2LL] [i_10 - 2] [(unsigned short)2] [i_11] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9] [i_10] [(unsigned char)4]))))), (((/* implicit */unsigned int) ((int) (unsigned char)255))));
                                var_36 = ((/* implicit */long long int) -280021914);
                            }
                        } 
                    } 
                    arr_43 [(signed char)2] [6LL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_10] [i_10 + 1])) ? (((/* implicit */int) arr_25 [(unsigned short)6] [i_10 + 1])) : (((/* implicit */int) arr_25 [(unsigned char)9] [i_10 + 1]))))) ? (((/* implicit */int) arr_25 [i_10] [i_10 + 1])) : (((((/* implicit */_Bool) arr_25 [i_10] [i_10 + 1])) ? (((/* implicit */int) arr_25 [i_10] [i_10 + 1])) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
}
