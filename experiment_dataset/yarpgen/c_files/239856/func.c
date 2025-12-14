/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239856
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (4261412864ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16398))))) - (1268220314015832753ULL)));
        var_15 = ((((var_9) != (((/* implicit */unsigned long long int) 1)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
        var_16 = ((/* implicit */unsigned int) (-(arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)193))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) > (17178523759693718867ULL)));
    }
    for (int i_1 = 3; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4003661792642308630ULL)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            arr_8 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (14443082281067242992ULL)))))))) | (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_2])) - (((/* implicit */int) var_8))))), (min((var_9), (((/* implicit */unsigned long long int) var_4))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] = ((/* implicit */short) (((~(min((((/* implicit */unsigned long long int) (short)-14704)), (var_0))))) / (max((min((arr_0 [i_2 - 1] [i_4 + 1]), (((/* implicit */unsigned long long int) arr_9 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-25850)) + (((/* implicit */int) var_3)))))))));
                        arr_15 [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2])) ? (var_10) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1 - 2]))));
                        var_19 = ((/* implicit */short) (((((~(arr_0 [i_1] [i_1]))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)2789))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), (arr_9 [i_1])))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (short)2768)))) : ((~(((/* implicit */int) arr_9 [i_1])))))))));
                        var_20 = ((/* implicit */unsigned short) min(((((~(((/* implicit */int) (unsigned char)1)))) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)29)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_21 = max((((/* implicit */short) var_7)), (var_8));
                        var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) min((min(((unsigned short)49151), (((/* implicit */unsigned short) var_4)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))))), ((~(((/* implicit */int) arr_16 [i_1] [i_5] [i_5] [i_1]))))));
                        arr_23 [i_1] [i_5] [8ULL] = ((/* implicit */short) ((min(((~(((/* implicit */int) (short)-16384)))), (((/* implicit */int) (_Bool)1)))) + ((+(((/* implicit */int) arr_16 [i_1 - 3] [i_2] [i_5] [i_6]))))));
                        var_23 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_17 [i_5] [i_5] [4ULL]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_27 [i_6] [i_7] |= ((/* implicit */int) arr_9 [i_1 - 2]);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? ((~(1784099019))) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) (unsigned char)215)) ^ (((/* implicit */int) (signed char)(-127 - 1))))) : ((((!(((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_5])))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)192)))) : (((/* implicit */int) min((arr_16 [i_2 - 1] [i_2 - 1] [i_5] [i_2 - 1]), (var_13))))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) & (max((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-16385)), (1046528)))), (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_2 + 1] [i_1])))))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)226)) ? (1268220314015832747ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8833))))) + (((1268220314015832767ULL) * (((/* implicit */unsigned long long int) 1150498727U))))));
            arr_28 [i_1] [5ULL] [i_1] = ((/* implicit */unsigned char) (signed char)-119);
        }
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (~(((((/* implicit */_Bool) min(((unsigned short)49164), (((/* implicit */unsigned short) (signed char)123))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (7860357724548035915ULL))) : (min((((/* implicit */unsigned long long int) (signed char)69)), (11592154247104524063ULL))))))))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_20 [(short)2] [6] [i_8] [(short)2]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_1))))) ? ((~(((/* implicit */int) (unsigned char)168)))) : (min(((-(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)16388)) : (((/* implicit */int) var_13)))))))))));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_9])), (627183524753165562LL)))) ? (((arr_0 [i_1] [9U]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_1 - 2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)2] [i_9])) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) var_11))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)151)) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_1] [i_8] [i_9])) : (((/* implicit */int) arr_7 [0] [(_Bool)1] [(unsigned short)10]))))))))))));
            }
            for (short i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */int) min((((/* implicit */unsigned long long int) -983960290)), (5515641201759902997ULL)));
                var_31 ^= ((/* implicit */unsigned char) min(((~(((((/* implicit */int) var_13)) | (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)14702)) : (((/* implicit */int) arr_22 [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 - 2]))))));
            }
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                arr_39 [i_11] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_7))))))))) & (min((arr_0 [i_1 - 1] [i_1 - 3]), (arr_0 [i_1 - 1] [i_1 - 3])))));
                var_32 += ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 3])), (arr_9 [i_1 - 3])))) / (((/* implicit */int) ((max((var_9), (((/* implicit */unsigned long long int) arr_19 [i_1])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_1] [i_1 - 2] [i_1 - 3] [i_8] [i_1] [i_8] [i_11]), (((/* implicit */short) (unsigned char)131)))))))))));
            }
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) ((801061452U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)8836)))))))));
                    var_34 *= ((/* implicit */signed char) min((((/* implicit */int) (short)-1)), (-983960294)));
                    var_35 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (751127617485986335ULL)));
                    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) 7727875179945944920ULL)))))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(8U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)72)) % (((/* implicit */int) (short)-28320)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_9))))))) : (((/* implicit */int) min((((/* implicit */short) arr_41 [i_1])), (arr_17 [i_13] [i_13] [i_1 - 3]))))));
                }
                var_38 = ((/* implicit */unsigned short) var_10);
            }
            var_39 = ((/* implicit */int) var_4);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_14 = 1; i_14 < 9; i_14 += 4) 
            {
                arr_48 [i_1 - 1] [i_1] [i_1] [i_14 + 3] = (short)1155;
                arr_49 [i_1] [i_1] [i_14] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (unsigned char)63)) != (((/* implicit */int) (_Bool)1)))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_40 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)57931)), (16232589976778238480ULL)));
                arr_52 [i_1] [i_8] [i_15] = ((/* implicit */unsigned int) var_3);
            }
        }
    }
    for (int i_16 = 3; i_16 < 11; i_16 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_17 = 2; i_17 < 10; i_17 += 4) 
        {
            for (short i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                {
                    arr_59 [(unsigned char)2] [i_16] [i_18] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-27812)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_42 [i_16] [i_17]))))) : ((-(436335524U))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_16 - 3] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_17]))) : (4294967284U)))))));
                    arr_60 [i_18] [i_18] [i_18] [i_16] = (~(((((/* implicit */unsigned long long int) 21U)) & (arr_38 [i_17 - 1] [i_17 - 1] [i_17 + 1]))));
                    var_41 = ((/* implicit */int) (unsigned short)3);
                }
            } 
        } 
        arr_61 [i_16] [i_16] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) (unsigned char)16)) ? (arr_43 [(unsigned char)9] [i_16] [i_16 - 2] [i_16] [(unsigned char)9] [i_16]) : (((/* implicit */int) var_7))))))));
        var_42 ^= ((/* implicit */unsigned long long int) min((max(((-(((/* implicit */int) (signed char)-127)))), ((+(((/* implicit */int) arr_25 [i_16 - 3] [i_16 - 3] [i_16] [8ULL] [(unsigned char)0])))))), ((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)168))))))));
    }
    var_43 = ((/* implicit */unsigned char) max((2038653524U), (((/* implicit */unsigned int) (short)-32748))));
}
