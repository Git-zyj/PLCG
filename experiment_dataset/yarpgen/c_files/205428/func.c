/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205428
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
    var_17 |= ((/* implicit */unsigned int) var_16);
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_1))) + ((+(((/* implicit */int) var_5))))))) & (var_2)));
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_2] = ((/* implicit */long long int) ((((arr_3 [i_0]) & (arr_3 [i_1]))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_3)))))));
                    var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (var_13)))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (signed char)43)))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) arr_8 [(unsigned char)1]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 7; i_4 += 2) 
            {
                {
                    var_21 += ((/* implicit */signed char) (+(min((((var_15) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) max(((unsigned short)23402), (((/* implicit */unsigned short) var_3)))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_22 *= ((/* implicit */unsigned char) min(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_5))));
                        arr_18 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)242)) - (231))))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        arr_22 [i_4] [i_3] = ((/* implicit */unsigned char) var_15);
                        arr_23 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_17 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_3] [i_4] [i_6] [i_7 - 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -8587044721356911332LL)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (short)-32760)))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4095))) > (arr_19 [i_0] [i_0] [i_0] [7LL] [i_7]))))));
                            var_23 = ((/* implicit */long long int) ((int) var_5));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+((-(arr_12 [i_0]))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                        {
                            arr_30 [i_0] = ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) arr_25 [i_3] [i_3] [i_3 - 1] [i_0] [2] [i_3] [i_4 + 4])) - (17993))));
                            arr_31 [i_8] [i_6] [i_3 + 1] [i_3 + 1] [(unsigned char)2] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_12)))) >> (((((/* implicit */int) arr_8 [i_3 + 1])) - (95)))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((arr_6 [i_3 + 1] [i_4 - 1] [i_4 + 3]) + (((/* implicit */int) (signed char)0)))))));
                            arr_34 [7] [i_3 + 1] [i_4 + 1] [(short)3] [i_9] [i_9] [0LL] = ((/* implicit */unsigned int) var_0);
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [(unsigned char)3] [i_4] [i_3] = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-11))))));
                        arr_38 [i_0] [i_3 - 1] [i_4] [i_4] [i_10] = ((/* implicit */signed char) ((_Bool) min((((((/* implicit */int) var_14)) >> (((((/* implicit */int) (signed char)33)) - (10))))), ((+(((/* implicit */int) var_11)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 2; i_12 < 8; i_12 += 2) 
                        {
                            {
                                arr_45 [i_0] [i_0] [10] [i_4] [(unsigned char)5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_4] [i_11] [i_12 + 3] [(signed char)7])) ? (438447844U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                                arr_46 [(signed char)0] [i_12] [(signed char)0] [i_11] [9U] |= ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32442))))))))));
                    var_27 *= ((/* implicit */unsigned long long int) ((_Bool) var_16));
                }
            } 
        } 
        arr_55 [i_13] = ((/* implicit */long long int) max((min((max((2807570582U), (438447844U))), (((/* implicit */unsigned int) (_Bool)0)))), (var_4)));
    }
}
