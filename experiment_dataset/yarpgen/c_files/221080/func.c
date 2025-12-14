/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221080
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0 + 1] [i_1])) | (var_5))) + (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_7)) | (1ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) == ((-9223372036854775807LL - 1LL)))))))))));
            arr_4 [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (13299392094838922835ULL));
            var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((long long int) 13299392094838922837ULL)) - (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])) >> (((((/* implicit */int) (signed char)-26)) + (36)))))) : ((~(arr_1 [i_0 + 1])))));
            var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((signed char) var_3))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)11)))))))) ? (((/* implicit */unsigned long long int) (-(-9223372036854775806LL)))) : (max((((/* implicit */unsigned long long int) (signed char)-34)), (0ULL)))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((13299392094838922854ULL) < (((/* implicit */unsigned long long int) arr_1 [i_0 - 3]))))) != ((-(((/* implicit */int) (signed char)19))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((unsigned long long int) 5147351978870628769ULL));
        arr_8 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_4))))) & (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_7 [i_2]) : (13299392094838922846ULL)))));
        var_14 *= ((/* implicit */int) (((((_Bool)1) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))))) << (((-957234989932810746LL) + (957234989932810803LL)))));
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 5139305328792658761ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (var_8))));
        var_16 += ((/* implicit */unsigned long long int) (-(((7204339807622297210LL) / (((/* implicit */long long int) var_5))))));
    }
    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned long long int) ((((long long int) (signed char)-80)) <= (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (arr_0 [i_4])))), (3322503824U))))));
        arr_17 [i_4] = (((((((((_Bool)1) ? (-7204339807622297210LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (13534552692901716672ULL) : (((/* implicit */unsigned long long int) arr_1 [i_4])))) - (13534552692901716643ULL))));
    }
    var_17 = ((/* implicit */int) min((max((max((((/* implicit */long long int) var_4)), (var_7))), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((((/* implicit */int) ((1729382256910270464ULL) != (((/* implicit */unsigned long long int) 1152921504606846974LL))))) != (max((var_5), (((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    arr_24 [i_6] [i_6] [1U] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_19 [i_6 - 1])) + (15631252835778876057ULL))) * ((-(11568308916891500213ULL)))));
                    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (13534552692901716674ULL)))) || (((((/* implicit */_Bool) (unsigned char)167)) && (((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6])))))), (((((/* implicit */_Bool) min((35184338534400ULL), (((/* implicit */unsigned long long int) arr_23 [i_6] [i_6] [i_7]))))) || (((/* implicit */_Bool) min((-7204339807622297210LL), (((/* implicit */long long int) 1514998765U)))))))));
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (short)2159)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)79)) && (((/* implicit */_Bool) (short)(-32767 - 1))))))))) : ((-((-(4ULL)))))));
                        var_20 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_10 [i_6] [i_6 + 1]))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_30 [i_5] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5147351978870628761ULL)) ? (((/* implicit */unsigned long long int) -1838176136)) : (18446744073709551615ULL)));
                        var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)35756)))))));
                    }
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((var_6) ? (arr_26 [i_6 - 1] [i_6 + 1] [i_6 - 1] [8ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (268435455LL)))))))));
                    arr_31 [i_5] [i_5] [i_7] [i_7] |= min((((/* implicit */long long int) (!(((/* implicit */_Bool) 4ULL))))), (((long long int) var_0)));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
    {
        arr_36 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_33 [i_10] [i_10])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0)))))))) - ((~(((((/* implicit */_Bool) 13299392094838922869ULL)) ? (13299392094838922834ULL) : (3163528334785365034ULL)))))));
        var_23 |= ((/* implicit */long long int) ((max((((arr_35 [16ULL]) >> (((arr_33 [i_10] [i_10]) - (6748799179831371691ULL))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [(_Bool)1] [i_10])) && (((/* implicit */_Bool) arr_32 [(signed char)2] [i_10]))))))) > (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_35 [8ULL]))) / (((/* implicit */int) min((var_2), (var_3)))))))));
    }
    for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                {
                    arr_46 [i_12] = ((/* implicit */unsigned int) min((((arr_32 [i_12] [i_13]) << (((min((((/* implicit */int) var_1)), (var_5))) + (831175099))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                    var_24 = (((+(8845470221076184290ULL))) >> (((min((arr_35 [i_12]), (((/* implicit */unsigned int) (unsigned char)248)))) - (193U))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_14 = 1; i_14 < 15; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                {
                    var_25 += (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12252))) * (5147351978870628747ULL))));
                    arr_51 [i_11] [i_11] [i_14] [i_11] = ((/* implicit */unsigned char) (((!(var_6))) ? (((min((((/* implicit */long long int) (unsigned char)52)), (9223372036854775786LL))) + (((-7204339807622297223LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) -9223372036854775788LL)) ? (arr_35 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18776))))))))));
                    arr_52 [i_11] [i_14 - 1] [i_14] [i_15] = ((/* implicit */int) (+(7204339807622297210LL)));
                }
            } 
        } 
        arr_53 [i_11] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((arr_38 [i_11]) << (((var_8) - (14993055494096040582ULL)))))))), (((((min((((/* implicit */long long int) var_2)), (arr_50 [i_11] [i_11] [i_11] [(signed char)8]))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 9223372036854775786LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) - (97)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
        {
            for (unsigned char i_17 = 2; i_17 < 15; i_17 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((5147351978870628747ULL) & (((/* implicit */unsigned long long int) 16646144U)))))) ? (max((min((((/* implicit */unsigned long long int) (signed char)56)), (arr_33 [i_17] [17LL]))), (((((/* implicit */unsigned long long int) -2868192914078253254LL)) & (15283215738924186590ULL))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_11])) ? (((/* implicit */long long int) arr_49 [i_11] [2U])) : (72057594037927920LL)))) & (min((arr_32 [(_Bool)1] [i_16]), (((/* implicit */unsigned long long int) 7204339807622297231LL))))))));
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_11])) ? (((/* implicit */int) var_1)) : (var_5)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-9223372036854775807LL - 1LL)) : (arr_50 [i_11] [i_16] [i_17] [(_Bool)1])))))))))))));
                    var_28 = ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + (-9223372036854775801LL)))) ? (((unsigned long long int) 11095157303355034751ULL)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))) - ((((-(11095157303355034743ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_11])) ^ (-1591770065)))))));
                }
            } 
        } 
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        arr_62 [i_18 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (196740348)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (-9223372036854775790LL)))), (((unsigned long long int) 9223372036854775790LL))))));
        var_29 = ((/* implicit */signed char) (+((-(((/* implicit */int) max(((signed char)44), (var_3))))))));
    }
}
