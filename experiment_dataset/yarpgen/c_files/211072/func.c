/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211072
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(-192353098)))))))));
                var_18 = ((/* implicit */short) var_9);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)64)), (arr_1 [i_2]))))))) * (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((-192353108) <= (((/* implicit */int) (signed char)68))))) : (((/* implicit */int) (unsigned char)127))))));
        var_19 = (short)-5295;
        arr_8 [i_2] [i_2] &= ((/* implicit */unsigned char) (_Bool)1);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] [i_3] [i_4 + 2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) (_Bool)1))))) ? (max((var_2), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) max((-192353098), (((/* implicit */int) (unsigned char)160)))))))));
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (signed char)-17)) : (arr_11 [11] [i_4 - 1] [i_4]))))));
                    arr_15 [i_2] [i_3] = ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_21 += ((/* implicit */signed char) (unsigned char)129);
            var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */unsigned int) arr_12 [i_2] [i_2])) + (2474122528U)))));
            /* LoopSeq 2 */
            for (int i_6 = 1; i_6 < 13; i_6 += 4) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 608005294U)) ? (((/* implicit */int) (signed char)-62)) : (((((/* implicit */_Bool) 192353097)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (3686962000U)))) ? (((((/* implicit */_Bool) 1407251399)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    var_24 = ((/* implicit */long long int) var_15);
                    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_7 - 1])) ? (1701472400) : (((((/* implicit */_Bool) (signed char)61)) ? (arr_11 [i_2] [i_5] [i_6]) : (((/* implicit */int) var_14))))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) -1407251425))));
                    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_5] [i_6])) && (((/* implicit */_Bool) arr_16 [i_7] [i_6] [i_2])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 3967449299U)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) 1407251430))));
                }
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 13; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 4; i_9 < 11; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        var_28 = ((((/* implicit */int) var_14)) / (((/* implicit */int) arr_24 [i_10 + 3] [i_9 + 2] [i_10 + 3] [i_8 - 1])));
                        var_29 = ((/* implicit */_Bool) ((var_4) * (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        var_30 = ((/* implicit */long long int) (-(arr_1 [i_2])));
                    }
                    arr_34 [i_2] [i_2] [i_5] [13] [i_5] [i_9] = ((/* implicit */unsigned char) ((var_4) / (((/* implicit */int) arr_6 [i_8 - 1]))));
                }
                arr_35 [i_5] [(_Bool)1] [i_8] [i_5] = ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_8 - 1])));
            }
            arr_36 [2] [i_5] [i_5] |= ((((/* implicit */_Bool) (unsigned char)255)) ? (1151104872) : (-27));
        }
        for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                var_31 = min((((((/* implicit */_Bool) arr_18 [i_12 - 1] [i_11] [i_12 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [9U] [9U] [i_12] [i_12] [i_2] [i_12])) ? (972406284) : (arr_37 [i_2] [i_2])))) ? (1151104872) : (1165225874)))));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) 1407251430)) || (((/* implicit */_Bool) (signed char)-62)))))));
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((min((min((((/* implicit */long long int) var_8)), (var_2))), (((/* implicit */long long int) (signed char)24)))) / (var_12))))));
                    arr_43 [i_2] [i_2] [i_11] [i_12] [i_12 - 1] [i_13] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_2] [i_11] [i_11] [i_12 + 1] [i_13]))))), (max((arr_18 [i_13] [i_11] [i_2]), (((arr_18 [i_12] [i_13] [i_13]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))))))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)254)) >> (((var_4) - (1037587627)))))) | (((var_11) << (((arr_18 [i_2] [i_13] [i_12 - 1]) - (2617773326U)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_2] [(signed char)0] [i_12] [i_2]))))))))) : (((/* implicit */int) (signed char)17))));
                }
                arr_44 [13LL] = max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_12])) : (((/* implicit */int) (_Bool)1)))))))), (((arr_39 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12]) << (((((-1012053734) + (1012053745))) - (9))))));
            }
            var_35 = (~(((/* implicit */int) (!(var_14)))));
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_36 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_2] [i_11] [i_14] [i_15] [4U] [i_16])))))) ? (arr_31 [i_2] [i_11] [i_15] [i_15] [i_11]) : (((/* implicit */unsigned int) ((-954402113) | (-893512534))))))) ? (min((max((893512562), (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)251)) : (var_1))))) : (max((1407251430), (((/* implicit */int) (signed char)-22))))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) max((max((arr_23 [i_2] [(unsigned char)10] [i_14] [i_15] [2]), (((/* implicit */unsigned int) (signed char)-17)))), (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) (signed char)-70))))))))));
                            var_38 = ((/* implicit */int) 608005275U);
                        }
                    } 
                } 
            } 
        }
    }
}
