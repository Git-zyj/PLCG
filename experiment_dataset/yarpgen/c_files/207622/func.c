/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207622
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
    var_17 = ((/* implicit */signed char) ((var_8) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))));
    var_18 ^= ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-64))))) != (4275422930U)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12)))))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_10)))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)177))))))))));
        var_20 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((var_16) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (arr_0 [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0] [9U]), (((/* implicit */unsigned long long int) var_12))))) ? (max((((/* implicit */unsigned int) var_3)), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        var_21 = ((/* implicit */unsigned int) var_8);
        arr_5 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (arr_3 [i_0 - 1] [i_0 - 2])))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))), (((/* implicit */unsigned long long int) var_4)))))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_8 [(unsigned char)10] [(unsigned char)10]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_24 = (!(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_4]))) < (((var_8) ? (((/* implicit */long long int) arr_12 [i_4] [i_1])) : (-8096243706286862379LL))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                arr_19 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_4] [i_5])) ? (arr_0 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_2 [(_Bool)1])))))));
                            var_26 = ((/* implicit */long long int) arr_3 [i_1] [i_4]);
                        }
                    } 
                } 
                arr_24 [i_4] = ((/* implicit */unsigned char) var_14);
            }
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                var_27 = arr_13 [i_4] [i_4] [i_4];
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59005))) / (376224185U))))));
            }
        }
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            var_29 = ((/* implicit */long long int) arr_0 [i_9]);
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_26 [13ULL] [2U] [i_9] [i_9]))));
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_10] [i_1] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10] [i_10] [12U]))) : (var_1)));
            /* LoopSeq 3 */
            for (long long int i_11 = 1; i_11 < 14; i_11 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_15))));
                var_33 = ((/* implicit */unsigned char) max((var_33), (arr_18 [14U])));
                var_34 |= ((/* implicit */long long int) var_7);
                var_35 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61231)) != (((/* implicit */int) (signed char)64))));
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (_Bool)0))));
            }
            for (long long int i_12 = 1; i_12 < 14; i_12 += 1) /* same iter space */
            {
                var_37 += arr_17 [i_12 - 1] [i_10] [i_12] [i_1];
                arr_38 [i_1] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_12 - 1] [i_12 - 1] [i_10])) * (((/* implicit */int) arr_10 [i_12 - 1] [i_12 - 1] [i_10]))));
            }
            for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) 
            {
                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (signed char)-48))));
                arr_42 [i_13] [11U] [(signed char)2] = ((/* implicit */unsigned int) arr_32 [i_1] [i_10] [i_13]);
                var_39 = ((/* implicit */unsigned char) ((arr_40 [i_1] [i_10]) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_10] [(unsigned char)3] [i_1]))) % (var_10)))));
                var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) var_2))));
                var_41 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_13] [i_10]))));
            }
            var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_16)))) ? (arr_31 [(unsigned char)2] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)237))))))));
        }
    }
}
