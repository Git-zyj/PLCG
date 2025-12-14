/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39603
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? (((((/* implicit */_Bool) (short)-31892)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-195739098)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 195739093)) ? ((-(arr_5 [i_0] [i_1] [i_1]))) : (var_6))))));
            arr_6 [7ULL] = ((/* implicit */long long int) var_1);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_12 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) ((arr_5 [i_1] [i_2] [i_3]) <= (((/* implicit */unsigned long long int) 1802948122344952182LL))))) == (((/* implicit */int) arr_3 [i_0] [i_0]))))), ((~(-296253272)))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))) * (arr_5 [i_0] [11] [i_2])))) ? (((((/* implicit */_Bool) -195739103)) ? ((+(296253249))) : (((/* implicit */int) arr_4 [i_2] [i_3])))) : (296253277)));
                }
                /* vectorizable */
                for (unsigned char i_4 = 3; i_4 < 11; i_4 += 4) 
                {
                    var_14 = ((/* implicit */int) ((((var_7) - (((/* implicit */unsigned int) var_5)))) == (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0] [12ULL] [i_1]) == (((/* implicit */unsigned long long int) 1268678515))))))));
                    arr_16 [i_2] [i_1] [(unsigned char)0] = (+(((/* implicit */int) arr_12 [i_2] [i_1] [i_4 - 3] [i_1])));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_2 [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [2U] [2U])) ? (var_2) : (var_2)))) : (arr_17 [i_0] [i_5 + 3] [i_5] [i_5] [i_5] [i_5 + 3] [i_5 + 2])));
                        arr_19 [i_0] [i_1] [i_2] [i_4 - 1] [i_0] = -1593638489;
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -4575925155922608603LL)) : (arr_2 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_1] [i_2] [i_4] [i_5]))) : (var_8)));
                    }
                }
                for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    arr_22 [i_2] [i_1] [i_1] [9] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-4066979960606326279LL) <= (((/* implicit */long long int) min((195739085), (((/* implicit */int) (unsigned char)185))))))))) <= (((((((/* implicit */_Bool) 501085980)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (14160550895544735300ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [1LL])))))));
                    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [6LL] [i_6])) ? (((((/* implicit */long long int) 1593638505)) / (var_8))) : (((/* implicit */long long int) ((-163225070) / (((/* implicit */int) (signed char)101)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2] [i_6])) ? (var_2) : (2047LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(unsigned char)3] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)7936)) : (var_5)))) : (((var_1) * (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [(unsigned char)10] [i_1] [i_2] [(short)0] [i_2] [(unsigned short)5])) ? (arr_1 [i_2]) : (arr_10 [(unsigned short)6] [i_1] [i_2] [i_6])))) ? (((/* implicit */int) min(((unsigned short)0), ((unsigned short)61655)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)3)), (arr_3 [7LL] [i_6])))))))));
                    var_18 = ((/* implicit */_Bool) (((~((+((-9223372036854775807LL - 1LL)))))) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((var_6) == (((/* implicit */unsigned long long int) 1086012842))))), ((unsigned short)32543)))))));
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) arr_4 [i_7] [11LL]);
                    var_20 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)33004))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_0] [i_2] [i_2] [i_7]))))) : (-1LL)));
                }
                var_22 *= ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (max(((-9223372036854775807LL - 1LL)), (var_2))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [5] [i_1] [i_1]))) == (-4637650774923806531LL)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)7943)) <= (((/* implicit */int) var_9))))));
            }
        }
        for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57599))))) - (((/* implicit */unsigned int) (+(var_5))))))) ? (((/* implicit */long long int) (((!((_Bool)1))) ? (((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32543)))))) : (((/* implicit */int) ((signed char) var_1)))))) : (var_8)));
            var_24 = ((/* implicit */int) var_3);
            var_25 = ((/* implicit */unsigned char) (((-(((arr_15 [i_8] [i_0] [i_0] [i_0] [i_0]) - (arr_15 [i_0] [i_0] [i_0] [i_8] [i_8]))))) <= (((((/* implicit */_Bool) ((((/* implicit */long long int) 3481848763U)) / (-4575925155922608598LL)))) ? (((/* implicit */unsigned int) ((int) arr_11 [i_0] [i_8] [(short)10]))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_8])) ? (arr_14 [i_8] [i_8] [7]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        }
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((((/* implicit */_Bool) 7470497893614744015LL)) ? (max((0ULL), (((/* implicit */unsigned long long int) -971607449)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10410))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (_Bool)1)))))))))));
        var_27 = ((/* implicit */short) ((max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (arr_27 [(unsigned char)12] [i_0] [i_0])))), (min((((/* implicit */long long int) 57167617)), (17592186044416LL))))) - (((/* implicit */long long int) max((max((195739098), (((/* implicit */int) (unsigned char)52)))), (((((/* implicit */_Bool) (unsigned short)32994)) ? (-2147483646) : (((/* implicit */int) (unsigned short)42988)))))))));
    }
    for (long long int i_9 = 1; i_9 < 11; i_9 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_4 [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_8)))) : ((-(arr_5 [(unsigned short)3] [i_9] [2]))))))));
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_9 - 1] [i_9 - 1] [(signed char)6])) <= (var_6))))) + (((var_1) - (((/* implicit */unsigned long long int) var_3)))))))));
        arr_30 [i_9 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (var_1)));
        var_30 = ((/* implicit */unsigned char) var_1);
    }
    for (unsigned int i_10 = 3; i_10 < 8; i_10 += 3) 
    {
        var_31 = ((/* implicit */signed char) (unsigned short)10579);
        arr_34 [i_10] = ((/* implicit */signed char) var_8);
    }
    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */int) (signed char)36)) <= ((-(((((/* implicit */_Bool) var_5)) ? (var_5) : (195739088))))))))));
}
