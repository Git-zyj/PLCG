/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206149
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
    var_18 = (~(((/* implicit */int) var_12)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] = (+(((var_7) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_1)))) : (((/* implicit */int) (!(var_11)))))));
                arr_6 [i_0] [10LL] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_1), (((/* implicit */signed char) arr_4 [i_0] [i_1]))))) ? ((+(((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))), ((-(((/* implicit */int) ((signed char) -2044487577)))))));
                var_19 = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)62808)) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-4))))) : ((+(((2356900531U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    var_21 = ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0])) > (((/* implicit */int) (signed char)127)))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-23)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_3))))))) : ((~(((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))));
                    arr_11 [i_0] [(signed char)12] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (signed char)23)))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~((-(11U))))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 820613904)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (signed char)87))));
                    arr_14 [16] [i_1] [16] [i_3] = arr_2 [i_0];
                    arr_15 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (((-(2848745264U))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
                    arr_16 [i_3] [i_3] [(_Bool)1] [i_0] &= ((/* implicit */signed char) ((1938066764U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
                }
                for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    arr_19 [(unsigned short)13] [i_4 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1024))))) / (((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((~(820613925))) : (((/* implicit */int) (signed char)5))))));
                    var_25 = ((/* implicit */int) arr_7 [i_1] [i_1]);
                    arr_20 [i_0] [i_1] [i_4 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((unsigned char)128), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) 1839615264U)) ? ((+(-1))) : (820613936)))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_23 [i_0] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-66))))) < (0LL)));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1])))));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (signed char i_9 = 2; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_27 &= ((/* implicit */unsigned short) ((1267334802U) <= (((/* implicit */unsigned int) -2147483644))));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_8])))))));
                                var_29 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_37 [i_0] [i_1] [i_7] [(signed char)1] = ((/* implicit */long long int) var_2);
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_30 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)94)))));
                                arr_50 [i_0] [i_1] [i_10] [i_11] [3LL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (374685744750799776LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_51 [i_0] [(signed char)19] [(signed char)19] [10LL] [i_0] [13U] = ((/* implicit */unsigned long long int) ((arr_49 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-27)) & (((/* implicit */int) (unsigned short)1040)))) - (arr_8 [i_0] [(unsigned char)12] [1])));
                    arr_52 [i_0] [i_1] [(_Bool)1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_0] [(signed char)1] [i_10])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_41 [i_0] [i_1] [(_Bool)1]))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) var_2);
    var_33 = ((/* implicit */short) max(((~(((/* implicit */int) ((((/* implicit */_Bool) 820613930)) && (((/* implicit */_Bool) (signed char)-1))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-13))))) ? (((/* implicit */int) (_Bool)1)) : ((-(-820613904)))))));
}
