/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48943
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_10))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-80))))), ((-(3249905861U))))))));
                                var_18 = ((/* implicit */_Bool) (-((-((-(((/* implicit */int) var_0))))))));
                                arr_15 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_1 + 3] [i_1] [i_2] [i_5] [i_1 + 3] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120)))))));
                                var_19 = 2179568253852776313LL;
                                var_20 ^= ((/* implicit */_Bool) ((long long int) var_2));
                                var_21 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) ((-2179568253852776293LL) / (((/* implicit */long long int) 1045061433U)))))), ((+(var_2)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */signed char) ((long long int) (((_Bool)1) ? (-1299388576045997462LL) : (5607286828147721565LL))));
                                var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6239948524830426501LL))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (-(6684818256258872810ULL)))) ? (arr_8 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (short)-11734)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) / (((/* implicit */int) (signed char)23))))) ? (((/* implicit */int) var_3)) : (arr_16 [i_7] [i_2] [(unsigned char)12] [(unsigned char)12]))))));
                                var_24 = ((/* implicit */long long int) (~(((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2]))))) % (((/* implicit */int) max((((/* implicit */short) var_13)), (var_15))))))));
                                var_25 |= ((long long int) ((min((((/* implicit */long long int) 1147218480U)), (5865584205676207827LL))) <= (min((var_2), (((/* implicit */long long int) arr_20 [(_Bool)0] [i_2]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1 + 1]))))) ? (((/* implicit */int) arr_21 [i_2] [i_1] [3ULL] [i_0] [(unsigned short)6] [i_0] [i_0])) : (((/* implicit */int) var_13))));
                    arr_28 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_1] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) : (17358371045345836679ULL)))) ? (((((/* implicit */_Bool) arr_17 [12U] [i_1] [i_1] [i_0] [i_0] [(unsigned short)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_16 [i_0] [12LL] [i_2] [12LL]))))))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_10))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (var_6)))))) : (((/* implicit */long long int) max((max((4147004685U), (((/* implicit */unsigned int) (unsigned char)217)))), (((/* implicit */unsigned int) ((int) var_1))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1045061415U)), (5607286828147721565LL)))) ? (((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24740))) - (3771460796U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [(signed char)3] [i_0]))))))))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1561878895141771723LL)))) ? ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((_Bool) 3068773374993041567LL))) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_4 [i_0] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)116))) < (4189581472746285913LL))))));
    }
    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 23; i_10 += 3) 
        {
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                {
                    arr_38 [i_9] [i_10] [(unsigned short)23] [i_9] = ((/* implicit */unsigned int) (~((~(((((((/* implicit */int) var_3)) + (2147483647))) << (((1510705191U) - (1510705191U)))))))));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) + (((/* implicit */int) ((arr_34 [i_9]) <= ((+(arr_34 [i_11]))))))));
                    var_30 = ((/* implicit */unsigned short) (~(arr_33 [i_10] [(unsigned char)2])));
                }
            } 
        } 
        arr_39 [i_9] = ((/* implicit */short) ((unsigned short) max((((/* implicit */long long int) 1134566613U)), (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_33 [0LL] [0LL]))))));
        var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4147004664U)) ? (-1299388576045997462LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54495)))))))) == (max((((/* implicit */unsigned long long int) var_9)), (arr_29 [i_9])))));
    }
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        var_32 = ((/* implicit */unsigned long long int) ((var_6) * (var_8)));
        var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (arr_37 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    }
    for (unsigned short i_13 = 4; i_13 < 18; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * ((-(((/* implicit */int) ((signed char) var_1)))))));
                    /* LoopSeq 4 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 3160400680U)), (2179568253852776293LL))))))))))));
                        arr_53 [(_Bool)1] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) min(((+(-4234436173611886102LL))), (((((/* implicit */_Bool) max((-1346670123550507163LL), (((/* implicit */long long int) (unsigned char)72))))) ? (var_10) : (max((((/* implicit */long long int) var_6)), (var_14)))))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) -6030642795981898785LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))) : (-7412897642794133145LL)));
                    }
                    for (long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        var_37 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63395)) / (((/* implicit */int) (_Bool)1))))), (max((var_6), (((/* implicit */unsigned int) min(((unsigned short)18529), (((/* implicit */unsigned short) arr_51 [(unsigned short)6] [(unsigned short)11] [i_15] [i_17])))))))));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2379542946722613896ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_13] [i_14] [i_17] [i_17] [i_17]))) : (-4133166074346403979LL)))), ((~(15186806321006095221ULL)))))) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (unsigned char)81)), (arr_34 [i_14]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) var_1))))) < (((unsigned long long int) (signed char)75)))))));
                    }
                    for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        var_39 -= ((/* implicit */unsigned short) var_12);
                        arr_61 [i_18] [i_14] [i_14] [i_14] [10LL] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)38956)), (-8245677532662906661LL)));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)199))));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)29)) / (((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) (unsigned char)255)))) : ((+(((/* implicit */int) arr_51 [i_13] [i_13] [i_15] [i_19]))))))));
                        arr_65 [i_14] [i_14] = ((/* implicit */short) var_0);
                    }
                    arr_66 [i_14] [i_15] [i_15] = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (signed char)23)))));
                    var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) var_11))));
                }
            } 
        } 
        var_43 -= ((/* implicit */long long int) ((((unsigned int) (signed char)-121)) & (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_35 [i_13])))))))));
        arr_67 [14U] [i_13] = ((((((/* implicit */_Bool) (unsigned char)192)) ? (var_7) : (((/* implicit */unsigned long long int) var_2)))) == (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (var_2) : (7155636281490145300LL)))))));
    }
}
