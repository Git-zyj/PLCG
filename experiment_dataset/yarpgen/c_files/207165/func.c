/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207165
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) arr_1 [11] [i_0]);
        var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) var_3)) : (4294967269U)))) ? (-1972404206) : (((((/* implicit */_Bool) (signed char)0)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)0)))))), (-1972404224)));
        arr_3 [4] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */int) ((arr_0 [i_0]) != (898409784)))))))));
        var_13 = ((/* implicit */long long int) (+((-2147483647 - 1))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(signed char)4] [i_1])) || (((/* implicit */_Bool) (short)-20107))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_15 |= ((/* implicit */long long int) var_4);
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2] [i_1] [i_1]))));
            var_16 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_1] [i_2] [i_2]))));
        }
        for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) var_6))));
            arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)69)) >= (((/* implicit */int) arr_9 [i_3 - 1] [i_1] [i_3]))));
            var_18 += ((/* implicit */unsigned short) arr_4 [(short)2] [i_3 - 1]);
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_10))));
        }
        var_20 = ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [(short)2])) ? (((((/* implicit */_Bool) arr_9 [(unsigned char)5] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)7))) : (189220343147834692LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)12041))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) 189220343147834702LL);
                                arr_27 [i_4] [i_4] [0ULL] [i_4] [i_4] [i_1] [i_4] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_1] [i_4] [i_5] [i_6] [6U] [i_7 + 1])) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)57547)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_4] [i_5] [i_1]))))) - (429086563U)))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_23 [i_1] [i_4] [i_5] [i_6] [6U] [i_7 + 1])) - (2147483647))) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)57547)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_4] [i_5] [i_1]))))) - (429086563U))))));
                                arr_28 [(short)6] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) arr_16 [i_1]);
                                var_22 |= ((/* implicit */short) (-(((/* implicit */int) (short)-10241))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */long long int) 27U)) % (189220343147834693LL))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) ((arr_26 [i_1] [i_5] [i_4] [i_4] [i_1]) ? (((/* implicit */int) (unsigned short)4146)) : (((/* implicit */int) (short)6885))));
                }
            } 
        } 
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)10241))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [9ULL] [i_1] [i_1]))))) : (arr_25 [0] [i_1])));
    }
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        for (signed char i_9 = 2; i_9 < 22; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) -7185978148851792291LL))));
                    var_27 = ((/* implicit */unsigned char) min(((+(min((((/* implicit */int) (short)(-32767 - 1))), (arr_32 [i_8]))))), ((-(((((/* implicit */int) arr_37 [i_8])) << (((var_0) + (8380591327345662213LL)))))))));
                    arr_39 [i_8] [i_10] [i_9] [i_10] = ((/* implicit */unsigned short) arr_33 [i_9 - 1] [i_9 - 1] [i_8]);
                    var_28 ^= ((/* implicit */unsigned char) (signed char)-57);
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) -1522085925);
}
