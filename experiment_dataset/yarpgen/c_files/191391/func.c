/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191391
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [(signed char)5] [i_1] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_3)))) - (((/* implicit */int) ((unsigned char) arr_1 [i_2]))))))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((var_3) ? (((/* implicit */int) (signed char)109)) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_1])))))) <= (((/* implicit */int) (!(var_3))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) var_5);
                                var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned int) -1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)25661)) % (((/* implicit */int) (unsigned char)116))))) && (((/* implicit */_Bool) 11369528732631945253ULL))))) : (var_6)));
                                arr_23 [i_5] = ((/* implicit */unsigned long long int) (unsigned char)128);
                            }
                        } 
                    } 
                    arr_24 [i_4] [7ULL] [i_0] = ((/* implicit */unsigned char) (~(((var_2) % (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [16] [i_3] [i_3])))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_30 [i_8] [i_7] [i_8] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) + (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (+((((~(-1697442332))) << (((min((var_8), (((/* implicit */long long int) (_Bool)1)))) - (1LL))))))))));
                                var_13 = ((/* implicit */signed char) ((10047273937482413507ULL) != (13165913767271912658ULL)));
                                arr_31 [i_0] [i_3] [i_8] [12ULL] [i_4] [i_0] = ((/* implicit */short) max((1750367117U), (((/* implicit */unsigned int) ((int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [4]))))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [(unsigned char)0] [i_0] [i_0]))) : (var_8))) : (arr_25 [i_0] [i_0])))))));
    }
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_33 [(unsigned char)1])), (var_9))), (((/* implicit */unsigned int) ((int) arr_27 [i_9] [i_9] [i_9])))))) || (((/* implicit */_Bool) var_2))));
        var_16 = (~((~(1697442332))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 16; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            {
                                arr_42 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_39 [i_12] [i_12 + 2] [i_10] [i_12])) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) (-(arr_19 [(short)4] [i_12 - 1] [i_12] [i_12 - 2])))) : (max((arr_39 [i_12] [i_12 + 1] [i_10] [i_12]), (arr_39 [i_12] [i_12 - 1] [i_10] [i_12 - 1])))));
                                arr_43 [i_13] [i_13] [i_10] [i_11] [i_10] [11U] [i_9] = ((/* implicit */int) arr_35 [i_11] [i_12] [i_12]);
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_12 - 1] [i_12 - 1] [i_12] [i_12 + 3])) ? ((~(((/* implicit */int) (_Bool)0)))) : (min((((/* implicit */int) var_5)), (-17)))))) ? (min((arr_26 [i_12 + 2] [i_10] [i_11] [i_12]), (((/* implicit */unsigned long long int) (-(var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_12 + 1] [i_12 - 1] [i_12 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) 5819869134181239615LL)) && (((/* implicit */_Bool) (signed char)-22)))) ? ((~(arr_6 [i_15]))) : (arr_27 [i_9] [i_10] [(unsigned char)3]))), (1059142152U)));
                                arr_50 [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8410117112594155465LL)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)144))))) : (2285288366482032233LL)));
                                var_19 &= ((/* implicit */signed char) arr_29 [i_9] [i_10] [13U] [i_14] [(unsigned short)0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_51 [(short)14] = ((/* implicit */unsigned int) (+(var_6)));
    }
    for (int i_16 = 1; i_16 < 9; i_16 += 3) 
    {
        arr_56 [i_16] = ((/* implicit */unsigned int) ((max((((/* implicit */int) max((var_5), (arr_33 [i_16])))), (arr_2 [i_16 + 2]))) & (((/* implicit */int) var_5))));
        var_20 = (~(((/* implicit */int) ((unsigned short) arr_14 [i_16] [i_16 + 1] [i_16 + 2] [i_16]))));
        arr_57 [i_16] = ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_49 [i_16] [i_16] [i_16 + 2] [i_16])))))) == (((/* implicit */int) arr_18 [i_16] [i_16 - 1] [i_16] [i_16 + 2])));
        var_21 *= ((/* implicit */unsigned long long int) min((arr_36 [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_16 + 1]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) < (((((/* implicit */_Bool) arr_22 [i_16] [i_16 + 2] [i_16] [i_16] [i_16 + 2] [i_16])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    }
    var_22 = ((/* implicit */unsigned short) var_9);
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) != (var_6))))) : (max((((/* implicit */unsigned long long int) var_1)), (var_4)))))) ? (var_4) : (((/* implicit */unsigned long long int) var_8)))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) ? (13165913767271912637ULL) : (((/* implicit */unsigned long long int) var_8))));
    var_25 = ((/* implicit */int) var_7);
}
