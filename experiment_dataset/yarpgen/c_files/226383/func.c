/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226383
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) (+(982089988)));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_2 + 2] [i_0 + 1])))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
            /* LoopSeq 1 */
            for (short i_4 = 2; i_4 < 9; i_4 += 2) 
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)22849)) ? (2147483647) : (((/* implicit */int) (unsigned char)71))));
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            }
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) var_8))));
        }
        for (unsigned char i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
        {
            arr_14 [i_5] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_0 [i_0] [i_5 - 1]))))));
            var_22 |= ((var_4) != (var_4));
            var_23 |= ((var_2) < (var_12));
        }
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_8 = 1; i_8 < 12; i_8 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) / ((+(((/* implicit */int) (unsigned char)204))))));
                    var_25 = ((/* implicit */unsigned short) ((_Bool) var_2));
                    arr_23 [i_8] [i_7] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_13 [i_0]))))));
                }
                var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : ((-(2600941352275815580LL)))));
                arr_24 [i_0] [i_7] [i_7] [11LL] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) : (2600941352275815580LL))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 3; i_10 < 12; i_10 += 2) 
                {
                    for (signed char i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_27 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_6] [i_9] [i_6]))))) ? (((((/* implicit */int) var_8)) << (((7332717006823339159LL) - (7332717006823339157LL))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)102)) <= (((/* implicit */int) (unsigned char)86)))))));
                            arr_34 [i_0] [i_6 + 2] [i_9] [i_6 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) 1389725879U)))));
                            arr_35 [i_0] [i_0] [i_9] [i_10] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1]))))) - (((/* implicit */int) (short)-22846))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_28 ^= (+(((/* implicit */int) (unsigned char)188)));
                    var_29 |= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [(signed char)12] [i_0 - 1] [i_6] [i_9] [i_9] [i_12]))))) ? (((((/* implicit */_Bool) 2147481600U)) ? (262143LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23403))))) : (((/* implicit */long long int) 2147485695U)))))));
                }
            }
            var_31 *= ((/* implicit */signed char) (-(arr_38 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_6])));
            arr_39 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42132)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) (unsigned short)65523)))) : (((/* implicit */int) var_15))));
        }
        var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-103))))) : ((~(arr_5 [i_0] [i_0] [i_0] [i_0])))));
        var_33 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_0] [i_0 - 1]));
    }
    var_34 ^= ((/* implicit */short) ((max((min((((/* implicit */unsigned int) (signed char)127)), (var_14))), (((/* implicit */unsigned int) ((_Bool) var_5))))) + (((/* implicit */unsigned int) max((((/* implicit */int) min((var_8), (((/* implicit */short) var_6))))), ((~(((/* implicit */int) var_15)))))))));
    /* LoopSeq 1 */
    for (short i_13 = 2; i_13 < 9; i_13 += 4) 
    {
        var_35 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (short)24065)) ? (-9) : (((/* implicit */int) (unsigned char)178)))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 1; i_14 < 9; i_14 += 1) 
        {
            for (unsigned short i_15 = 1; i_15 < 8; i_15 += 4) 
            {
                {
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (~((((~(((/* implicit */int) var_0)))) ^ (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_4 [i_14] [i_15]))))))))))));
                    var_37 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)57))))) < (((((/* implicit */unsigned long long int) var_2)) + (arr_33 [i_13] [i_13] [i_13] [i_14] [i_15 + 2]))))) ? (((/* implicit */int) (!(((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                    var_38 *= ((/* implicit */short) (!(((((/* implicit */_Bool) (-(-3025339569667433364LL)))) || (((/* implicit */_Bool) ((arr_42 [i_13] [i_13]) - (((/* implicit */int) (signed char)38)))))))));
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned char) (-(((((_Bool) (signed char)107)) ? (((((/* implicit */_Bool) var_5)) ? (8146441926287970259LL) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))));
        var_40 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_16 [i_13] [i_13])))) ? (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */long long int) 1048572)))) : (((/* implicit */long long int) ((arr_46 [i_13 + 1] [i_13 + 1] [i_13 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_13 - 2] [i_13] [i_13]))))))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_13)))))) : ((-((~(((/* implicit */int) (signed char)-13))))))));
        var_41 |= ((((((/* implicit */int) (unsigned short)34073)) - (((/* implicit */int) (short)18947)))) << (((((((/* implicit */_Bool) ((signed char) arr_18 [i_13] [i_13] [i_13]))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) var_1)))) : (((((/* implicit */int) (signed char)82)) >> (((((/* implicit */int) (signed char)88)) - (64))))))) - (32913))));
    }
}
