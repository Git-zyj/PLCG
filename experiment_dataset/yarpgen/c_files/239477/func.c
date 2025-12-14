/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239477
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 1716596868001383301LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-16337))))))) : ((((-(1186464482481820656ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (1716596868001383301LL) : (var_16))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (short)16327)) : (((((/* implicit */int) arr_1 [11LL])) >> (((/* implicit */int) arr_0 [(short)4] [(short)4])))))) <= ((+(((/* implicit */int) arr_0 [8U] [i_0 + 3])))))))));
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [0ULL] [i_0]) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (9ULL)))) : (((/* implicit */int) ((((/* implicit */_Bool) -1325039425)) && (((/* implicit */_Bool) 1022790755817203983ULL)))))))) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [(signed char)16] [i_0])) : (((/* implicit */int) arr_0 [(short)10] [i_0])))), (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) min((((/* implicit */short) var_3)), ((short)32767))))));
        var_20 &= ((((/* implicit */int) ((((/* implicit */int) (short)-2048)) != (((/* implicit */int) ((unsigned short) 10989911060619771915ULL)))))) ^ (((/* implicit */int) arr_1 [i_0 + 2])));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_21 -= ((/* implicit */long long int) max((-1325039425), (((/* implicit */int) (signed char)1))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_8 [i_1] [i_3] [i_3] = ((/* implicit */signed char) (short)2046);
                    arr_9 [4ULL] &= ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) | (((((/* implicit */unsigned long long int) 1325039431)) & (12726558506628753083ULL)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_4 = 4; i_4 < 11; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_6 = 2; i_6 < 9; i_6 += 3) 
                {
                    arr_17 [i_1] = ((/* implicit */unsigned int) var_15);
                    arr_18 [i_1] [i_4] [i_5 + 2] [i_5 + 2] = var_0;
                    var_22 -= ((/* implicit */signed char) (((+(((/* implicit */int) var_13)))) <= (((/* implicit */int) arr_15 [(_Bool)1] [i_5 + 2] [0LL]))));
                    var_23 ^= ((/* implicit */_Bool) arr_11 [i_1] [i_1]);
                }
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((17423953317892347632ULL) - (((/* implicit */unsigned long long int) -3602674517252587213LL)))) << ((((+(((/* implicit */int) arr_13 [i_1] [i_1] [i_4 + 1] [i_4 + 1])))) - (118)))))));
            }
            for (short i_7 = 3; i_7 < 11; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_9 = 4; i_9 < 9; i_9 += 4) 
                    {
                        var_25 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_4] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (8797177810760711444LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1])))));
                        arr_25 [i_1] [i_1] [i_1] [i_8] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) -8797177810760711435LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30262))) : (((arr_16 [3U] [3U] [0LL] [3U]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [5U] [i_4] [i_7] [i_8]))) : (1186464482481820676ULL)))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((_Bool) (((_Bool)1) ? (arr_6 [i_1] [(signed char)9] [i_8] [i_9 + 3]) : (((/* implicit */unsigned int) -1008621202))))))));
                    }
                    for (short i_10 = 2; i_10 < 11; i_10 += 4) 
                    {
                        var_27 -= ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)125)))) % (((/* implicit */int) ((short) -8797177810760711445LL)))));
                        var_28 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_10 + 1] [i_4 - 3] [i_7 - 3])) > (((/* implicit */int) arr_10 [i_7 + 1] [i_7 - 1] [i_4 - 4]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 4; i_11 < 9; i_11 += 4) 
                    {
                        arr_31 [i_1] [i_4] [1U] [1U] [i_11] = ((/* implicit */unsigned long long int) -1325039409);
                        arr_32 [i_4 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (short)17685)) : (((/* implicit */int) arr_15 [i_4 - 4] [i_4] [i_1]))));
                        arr_33 [i_1] [i_1] [i_7] [i_8] [i_11 - 3] = ((/* implicit */signed char) (short)-19391);
                        arr_34 [i_1] [i_8] &= ((/* implicit */unsigned int) (~((~(18446744073709551615ULL)))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((((/* implicit */_Bool) -1823176043)) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned char)0))) : (2116011156823967816ULL)))));
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (((+(-5600813628411345540LL))) >= (((8797177810760711452LL) + (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) <= (-1716596868001383313LL))))));
                }
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) 1ULL))));
                var_33 -= ((((/* implicit */_Bool) var_2)) ? (arr_29 [i_7 - 1] [i_7] [i_7 - 2] [i_7 + 1] [i_7 - 3] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((-8903309580856607105LL) + (var_16)))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)201)) / (((/* implicit */int) arr_10 [i_4] [i_7 - 1] [i_12]))));
                            arr_40 [i_1] [i_1] [i_1] [(unsigned char)2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((/* implicit */int) (short)32762))));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (short)(-32767 - 1)))));
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
        {
            arr_43 [9U] [i_14] = (((((~(((/* implicit */int) (short)32767)))) > (((((((/* implicit */int) (short)-22315)) + (2147483647))) << (((((/* implicit */int) (unsigned short)65535)) - (65535))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19735))) / (((((/* implicit */unsigned long long int) var_1)) & (1186464482481820625ULL))))) : (9223372036852678656ULL));
            var_36 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_14 - 1] [(short)4] [i_1] [i_1])) % (((/* implicit */int) arr_30 [i_14 - 1] [10U] [i_14] [i_1]))))) || (((((((/* implicit */int) (short)-19735)) & (((/* implicit */int) var_2)))) < (((/* implicit */int) (signed char)-1))))));
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
        {
            arr_46 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((signed char)32), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)19)) && (((/* implicit */_Bool) arr_6 [i_15] [i_15] [i_1] [i_1])))))))), (((((/* implicit */_Bool) arr_11 [i_15] [i_15 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_15 - 1]))) : (4608830265850492333ULL)))));
            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) 17611349461858323018ULL))));
        }
        var_38 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_15 [i_1] [i_1] [i_1])))) >> ((((~(((/* implicit */int) arr_0 [(_Bool)1] [i_1])))) + (23)))));
        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) | (-1008621202)))) ? (((((/* implicit */_Bool) arr_44 [(unsigned short)9])) ? (((/* implicit */long long int) arr_45 [i_1])) : (arr_2 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41217)))));
    }
    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
    {
        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */int) (short)19734)) << ((((((~(((/* implicit */int) ((((/* implicit */int) (signed char)-115)) <= (((/* implicit */int) arr_0 [i_16] [i_16]))))))) + (26))) - (15))))))));
        var_41 *= ((/* implicit */short) min((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) arr_1 [i_16]))))))), ((-((+(-5321533423821788528LL)))))));
        var_42 &= ((/* implicit */unsigned short) arr_47 [(unsigned char)4] [(_Bool)1]);
        arr_49 [i_16] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_16])) <= (((/* implicit */int) arr_1 [i_16]))))) | ((~(((/* implicit */int) arr_1 [i_16]))))));
    }
    for (unsigned long long int i_17 = 1; i_17 < 21; i_17 += 2) 
    {
        var_43 = ((/* implicit */unsigned char) 9223372036856872967ULL);
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (8388607LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))) + (((((2276840609922853504ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
        var_45 ^= ((/* implicit */short) ((((/* implicit */_Bool) 16169903463786698112ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_17]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) + (var_14)))));
        var_46 -= min((((10145804781989372360ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63418))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_17 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-115))))) ? (((((/* implicit */_Bool) (signed char)15)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [4ULL]))))) : (((((/* implicit */unsigned long long int) 3706892813022650228LL)) % (15246649132145833387ULL))))));
    }
}
