/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210827
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_15 += ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(arr_1 [i_0 + 1]))))));
        arr_2 [i_0] [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [1LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)77)))) : (arr_1 [i_0 - 2])));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-((-(3734026729U))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */long long int) max((2400185370U), ((-(2400185370U)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2400185379U)) ? (((/* implicit */unsigned int) var_8)) : (((unsigned int) arr_7 [i_1] [i_1]))))));
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_7 [i_1] [i_2]), (arr_4 [i_1])))), ((~(1894781933U)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [7LL] [7LL])) | (((/* implicit */int) arr_3 [i_1] [i_1])))) << (((var_12) - (2821203217U)))))) : (1894781926U)));
            arr_10 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 2139095040U)) ? (2155872243U) : (2155872256U))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) <= (15U)))))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2] [i_1]))))), (arr_8 [i_1] [i_1] [i_2]))))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)15)))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 3; i_4 < 18; i_4 += 3) 
            {
                var_22 += ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)15)) & (((/* implicit */int) (short)-25590))))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_3])))))));
            }
            var_24 ^= ((/* implicit */int) (unsigned short)65528);
            var_25 = ((/* implicit */_Bool) arr_15 [(short)19]);
            var_26 += ((/* implicit */int) 4294967295U);
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */short) (-(((((/* implicit */int) arr_15 [i_5])) * (((/* implicit */int) arr_12 [i_5] [i_5]))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (short i_9 = 1; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */int) (-(1894781926U)));
                            var_29 = 535801252U;
                            var_30 = ((/* implicit */unsigned int) min((var_30), (3759166044U)));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (((~((+(2139095040U))))) == (((/* implicit */unsigned int) arr_24 [i_5] [i_7] [i_7])))))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (-(max((1051673902), (((/* implicit */int) (unsigned short)56565)))))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */short) ((((unsigned int) 18446744073709551597ULL)) > (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-80)) + (2147483647))) >> (((((/* implicit */int) (short)32624)) - (32610))))))));
            }
            /* LoopSeq 4 */
            for (int i_10 = 4; i_10 < 17; i_10 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) (short)-32648)))) ? ((((-(var_10))) ^ (((/* implicit */int) ((((/* implicit */int) arr_32 [i_5] [i_6])) >= (((/* implicit */int) var_0))))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_6])) || (((/* implicit */_Bool) var_13)))))))));
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_13))))) < (((/* implicit */int) arr_15 [i_5])))))) & (((long long int) 14337007526890592055ULL)))))));
            }
            /* vectorizable */
            for (int i_11 = 4; i_11 < 17; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 1; i_12 < 18; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_5] [5U] [12ULL] [i_5] [i_6] [3U] [i_13])) < (arr_26 [i_6] [i_6] [i_6] [i_6])));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-64)) - (-1)));
                            var_38 ^= ((/* implicit */int) ((((/* implicit */int) (signed char)-12)) >= (((arr_26 [(signed char)14] [i_11 - 3] [i_12] [i_13]) >> (((((/* implicit */int) (unsigned short)2016)) - (2001)))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_11 + 2] [i_6])) & (((/* implicit */int) arr_38 [i_6]))));
            }
            for (int i_14 = 4; i_14 < 17; i_14 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */int) ((13U) & (4294967295U)));
                            var_41 += ((/* implicit */int) ((long long int) (-(14U))));
                        }
                    } 
                } 
                var_42 &= ((/* implicit */unsigned int) (-(-1413056248)));
                var_43 = ((/* implicit */unsigned long long int) min((var_43), (var_7)));
            }
            for (int i_17 = 4; i_17 < 17; i_17 += 3) /* same iter space */
            {
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) max((min((arr_13 [i_17 - 3] [(short)5]), (arr_13 [i_17 + 1] [i_17 + 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_17 - 1] [i_17 + 3]))))))))));
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 20; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 19; i_19 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((712720481161403748LL) + (-9090497000886096034LL)))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-80)) - (((/* implicit */int) ((((/* implicit */_Bool) (short)713)) && (((/* implicit */_Bool) var_13))))))))));
                            var_46 = ((/* implicit */_Bool) ((max(((-(5826232935971907384LL))), (((/* implicit */long long int) (+(arr_30 [i_19] [15LL] [i_18] [i_5] [i_5] [i_5] [i_5])))))) - (((/* implicit */long long int) 0U))));
                        }
                    } 
                } 
                arr_59 [i_6] [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_39 [i_17] [i_17 - 2] [i_17] [i_17] [i_6] [i_17 - 2] [3]), (arr_39 [i_17] [i_17 + 2] [i_17 + 2] [i_17] [i_6] [i_17] [i_17])))) ? (((/* implicit */long long int) max((arr_39 [i_17] [i_17 - 1] [i_17] [i_17] [i_6] [i_17] [9U]), (arr_39 [i_17 + 1] [i_17 + 3] [i_17] [i_17 + 3] [i_6] [i_17] [6ULL])))) : (((((/* implicit */long long int) arr_39 [i_17] [i_17 - 2] [i_17] [i_17] [i_6] [i_17] [i_17 + 1])) + (var_14)))));
            }
        }
        var_47 = var_0;
    }
    var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) -1LL))));
}
