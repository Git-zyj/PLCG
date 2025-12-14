/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51816
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (1178418496352889193ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) : ((-(arr_7 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 8191)) || (((/* implicit */_Bool) 21U))))))), (((arr_10 [i_0] [i_4 + 1] [i_2] [i_4] [i_3 - 1] [i_0] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)121))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8185)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (((!(arr_8 [i_5] [(unsigned short)15] [(unsigned short)15] [i_5] [i_5] [i_5]))) ? ((-(1880857954))) : (((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_8 [i_5] [i_5] [(unsigned char)12] [i_5] [i_5] [i_5]))))));
        arr_16 [i_5] [(unsigned char)8] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_0)) + (26588)))))), (arr_9 [i_5] [i_5] [i_5])));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 9; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_24 [i_6] [i_7] [i_7] [i_7 + 1])) ^ (((/* implicit */int) var_12))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 3137026270U)) || (((/* implicit */_Bool) 8185))));
                }
            } 
        } 
        var_22 -= ((/* implicit */unsigned char) ((signed char) (-(arr_22 [i_6] [i_6] [i_6]))));
    }
    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        arr_28 [i_9] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (_Bool)1))))) || ((_Bool)1))), ((!(((/* implicit */_Bool) (+(arr_27 [i_9] [i_9]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) arr_29 [i_9] [i_10] [i_10]);
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_29 [i_9] [i_9] [i_10])), (arr_27 [i_9] [i_9])))))))) + ((((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4010))) : (34359738367LL)))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_25 = ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */int) (unsigned short)13296)) >= (((/* implicit */int) (_Bool)1))))) % (arr_27 [i_11] [i_9])))));
            var_26 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4167088555624192260LL))), (34359738367LL)))), (((((/* implicit */unsigned long long int) -7625502577617985282LL)) ^ (((18446744073709551615ULL) << (((((/* implicit */int) (unsigned short)32512)) - (32449)))))))));
            arr_33 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((140737484161024LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))))) ? (((((/* implicit */_Bool) (signed char)96)) ? (146140055067047377LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22617))))) : (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) ((arr_25 [i_9]) < (((/* implicit */unsigned long long int) 2901388668U))))) : (((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_11])) ? (((/* implicit */int) arr_32 [i_9])) : (((/* implicit */int) arr_32 [i_9]))))));
            /* LoopSeq 3 */
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_26 [i_9]))));
                var_28 = ((/* implicit */long long int) var_6);
            }
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
            {
                arr_39 [i_11] &= ((/* implicit */unsigned char) (!(((var_8) >= (((/* implicit */unsigned long long int) arr_30 [i_11] [i_11]))))));
                var_29 = ((/* implicit */long long int) (!((_Bool)1)));
                var_30 &= ((/* implicit */short) (-(((((/* implicit */_Bool) 17833536024181854140ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(unsigned char)11] [i_11] [(unsigned char)13]))) : (arr_35 [i_9] [i_9] [i_9] [(signed char)9])))));
            }
            for (long long int i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */_Bool) arr_27 [i_9] [i_14]);
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_14] [i_11] [i_9])) ? (((/* implicit */unsigned long long int) 67108864)) : (arr_25 [i_9])))) ? (arr_25 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_11] [i_14]) > (arr_30 [i_11] [i_9])))))));
            }
        }
    }
    for (int i_15 = 3; i_15 < 22; i_15 += 3) 
    {
        arr_45 [(unsigned short)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7561852737991332343LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3634684563638426512LL)) ? (((/* implicit */long long int) arr_43 [i_15])) : (612747439360495564LL)))) : (min((arr_42 [i_15 - 1] [i_15]), (((/* implicit */unsigned long long int) (unsigned char)3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) / (1879048192LL)))) : ((-(arr_42 [23ULL] [i_15])))));
        arr_46 [i_15] = ((/* implicit */unsigned short) arr_44 [i_15 - 2]);
    }
    /* LoopSeq 2 */
    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_17 = 2; i_17 < 23; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 4) 
            {
                for (unsigned char i_19 = 1; i_19 < 23; i_19 += 3) 
                {
                    {
                        var_33 += ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_16]))) | (4294967293U))) % (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((125156032) - (125156017)))))))) ^ ((~(1713223749U)))));
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (-((-(min((arr_47 [i_17]), (((/* implicit */unsigned long long int) var_2)))))))))));
                    }
                } 
            } 
        } 
        arr_55 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) -8289534857051328250LL))) ? ((~(arr_47 [i_16]))) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned int i_20 = 2; i_20 < 22; i_20 += 2) 
        {
            for (long long int i_21 = 0; i_21 < 24; i_21 += 2) 
            {
                {
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((unsigned int) (_Bool)1)))));
                    var_36 ^= ((/* implicit */signed char) (_Bool)0);
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)2)))))));
                    var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_49 [i_16] [i_16])), ((~(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        var_39 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_42 [i_16] [i_16])) ? (arr_43 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_16] [i_16]))))));
    }
    for (short i_22 = 0; i_22 < 19; i_22 += 2) 
    {
        var_40 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) arr_44 [i_22]))), ((~(((/* implicit */int) var_9))))));
        var_41 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)13326))));
    }
    var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (-(var_4))))));
}
