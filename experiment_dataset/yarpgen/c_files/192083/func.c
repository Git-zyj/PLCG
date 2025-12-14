/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192083
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
    var_13 = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? ((-(var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0 + 1])))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */short) (_Bool)1);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_6 [i_4] [16] [i_0])) ? (((/* implicit */unsigned long long int) (+(var_7)))) : (arr_1 [i_1]))), (((/* implicit */unsigned long long int) ((long long int) var_5)))));
                            arr_17 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] [13U])) | ((~(((/* implicit */int) (signed char)-47))))));
                        }
                    }
                } 
            } 
            arr_18 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15740659283036782810ULL)) ? (((/* implicit */long long int) 4260968312U)) : (-9223372036854775780LL)))) ? (((/* implicit */int) ((_Bool) var_3))) : (((((/* implicit */_Bool) 33998983U)) ? (((/* implicit */int) ((-2195571995209110901LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))))) : (((/* implicit */int) var_1))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_16 *= ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_7))), (((/* implicit */int) arr_8 [i_5])))) / (((/* implicit */int) arr_20 [i_0] [i_0] [i_0 + 1]))));
            arr_22 [(_Bool)1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)(-127 - 1)))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (3864700612U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)3))))))));
        }
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_25 [i_0] = ((/* implicit */unsigned short) -5112331221127766240LL);
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(max((((long long int) 33998984U)), (((/* implicit */long long int) max((3864700612U), (((/* implicit */unsigned int) arr_8 [i_6]))))))))))));
            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_5 [i_0 - 3] [i_0 - 2]))))) ? (((((/* implicit */_Bool) (unsigned short)21023)) ? (((/* implicit */int) (unsigned short)39927)) : (((/* implicit */int) (unsigned short)16125)))) : (((((/* implicit */int) arr_21 [i_0 - 3] [i_0 - 1])) / (((/* implicit */int) var_5))))))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 21; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_33 [i_7] [i_8] = ((/* implicit */unsigned short) max((arr_16 [i_9] [i_7] [i_7] [i_7] [i_0]), (((/* implicit */int) (unsigned char)15))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)118)) ? ((~(var_10))) : (((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                            var_20 ^= ((/* implicit */signed char) ((unsigned int) min((arr_0 [i_0 - 3]), (arr_0 [i_0 - 3]))));
                            var_21 = ((/* implicit */int) (unsigned char)115);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-((+(var_10))))))));
            var_23 += ((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_6 [i_10] [12U] [19ULL])), (((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (2195571995209110895LL))))));
            arr_36 [5U] &= ((/* implicit */_Bool) arr_7 [i_10] [i_10] [i_0] [i_0]);
            var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) var_5))))) ? ((-(11459026021996962545ULL))) : (((/* implicit */unsigned long long int) arr_27 [i_0 - 3] [i_0 - 1] [i_0 - 2]))))) ? (((var_3) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1] [i_10] [(signed char)4] [(signed char)4]))) + (arr_2 [i_10])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)72)) - (((/* implicit */int) (unsigned char)164))))) ? (3038582944600958270ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : ((-2147483647 - 1)))))))));
            arr_37 [i_0 - 1] = (-(arr_29 [i_0 - 3] [i_0 - 1] [8U]));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 1; i_11 < 7; i_11 += 4) 
    {
        var_25 += ((/* implicit */unsigned short) var_8);
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)103))) : (((((/* implicit */_Bool) arr_28 [i_11] [(signed char)22] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11)))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                {
                    var_27 |= ((/* implicit */short) var_9);
                    arr_47 [6ULL] [i_11] [i_11] [i_11 + 2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) arr_21 [i_12] [i_13])) : (((/* implicit */int) arr_21 [i_12] [i_13]))));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (arr_43 [i_13] [i_13] [i_13]) : (((/* implicit */long long int) (~(var_7)))))))));
                    arr_48 [i_11 + 4] [i_12] [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) -6681463463293453929LL)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (signed char)-1))));
                    arr_49 [10ULL] [i_12] [9ULL] [i_11] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? (arr_42 [i_12] [i_12]) : (((/* implicit */unsigned long long int) var_11))))));
                }
            } 
        } 
    }
}
