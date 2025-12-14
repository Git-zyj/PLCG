/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3701
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_2] [9U] [i_2] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (14365978072599695663ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */int) max(((unsigned short)14140), ((unsigned short)55661)));
                            arr_14 [i_0] [i_0] [i_0] [1U] [3ULL] [3] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_4 [i_0] [i_0 + 3]))))));
                            var_14 = ((/* implicit */_Bool) ((signed char) (signed char)95));
                        }
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [3ULL] [(unsigned short)6] [i_2] [i_3])) : ((+(((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0] [i_0] [12U] [i_1] [i_0 + 3] [(signed char)12])))))));
                            arr_17 [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2] [i_3] [i_5])), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_3])) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_3] [i_1]))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1718775302051871745LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_17 += ((/* implicit */unsigned short) 1048575LL);
                            arr_22 [i_0] [i_0 - 1] [i_0] [i_2] [i_0] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))));
                            arr_23 [(signed char)7] [i_3] [i_3] [i_3] [i_3] [i_0] = ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_4 [i_0 - 1] [i_1])))) ? (arr_12 [(unsigned short)4] [(unsigned short)4] [i_0 - 1] [(unsigned char)2] [i_6]) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [0LL] [0LL] [i_6])) ? (1718775302051871743LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) -1718775302051871745LL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_7])) : (-1)))))) + ((~(((((/* implicit */_Bool) var_5)) ? (arr_12 [i_0] [i_0] [(signed char)1] [i_0] [(signed char)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))))))))));
                            arr_26 [(unsigned char)11] [i_1] [(unsigned char)11] [i_3] [3ULL] [i_7] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61905))) : (-641233874825410522LL)))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) max((max((9712433384662774191ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))), (((/* implicit */unsigned long long int) arr_18 [i_0 + 2] [i_2] [i_0 + 2]))))));
                            arr_27 [(short)7] [i_1] [(_Bool)0] [(signed char)12] [i_0] [(_Bool)1] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 + 1])) ? (1385918073) : (((/* implicit */int) var_8)))))) <= (((/* implicit */int) arr_1 [i_0]))));
                        }
                    }
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [(signed char)10] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)21864))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 + 2] [i_0 + 2] [i_2] [i_2]))) : (7178006970421387038LL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) (~(var_1)));
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) var_9))))));
    /* LoopSeq 3 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((signed char) (-(((((/* implicit */_Bool) (unsigned short)7417)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_30 [i_8])))))));
        var_23 = ((/* implicit */short) ((long long int) (~(((/* implicit */int) arr_30 [i_8])))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 2; i_9 < 12; i_9 += 1) 
    {
        arr_34 [i_9 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9])) ? (9624030201502287285ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9] [i_9] [i_9] [i_9 + 1])))))) ? (((((/* implicit */_Bool) arr_33 [i_9] [i_9 + 1])) ? (((/* implicit */int) arr_8 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) var_0))));
        arr_35 [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (signed char)15)))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_9 - 2])) ? (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (((/* implicit */int) arr_1 [(unsigned short)0])) : (((/* implicit */int) var_9))))));
        var_25 ^= ((/* implicit */unsigned short) arr_32 [i_9]);
    }
    for (short i_10 = 2; i_10 < 20; i_10 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) (unsigned short)31);
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                {
                    arr_47 [(unsigned char)8] [i_11] [i_12] [i_12] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) (signed char)89)))));
                    arr_48 [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)57)), (2065191444U)))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (18LL)))));
                }
            } 
        } 
        var_27 = ((/* implicit */short) max((((/* implicit */unsigned int) max((arr_43 [i_10] [i_10] [i_10]), (arr_44 [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1])))), (arr_39 [i_10])));
        arr_49 [i_10 - 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_44 [i_10 - 2] [i_10] [i_10] [i_10 - 2])), (0ULL)));
    }
}
