/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3025
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [(short)0] = min((var_1), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)164)) ? (arr_0 [i_0] [(unsigned char)7]) : (161216099))) < (((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (57956)))))))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */short) var_6);
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))));
        }
        for (long long int i_2 = 1; i_2 < 7; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_2 + 2] [i_2 + 1])) / (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 3])))) / (arr_0 [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 1; i_5 < 7; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((unsigned long long int) ((arr_5 [i_5] [i_5]) < (((/* implicit */long long int) arr_0 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) var_5))));
                            arr_16 [i_0] [(_Bool)1] [i_5] [i_4 - 3] [i_4] [i_5] = ((/* implicit */short) -8388302696551657588LL);
                            var_18 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1])) <= (var_1)))), ((~(((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
                            var_19 = ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) arr_9 [i_2 + 3] [i_3])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_2 + 3] [(unsigned char)3]))));
                        }
                        for (long long int i_6 = 1; i_6 < 7; i_6 += 4) /* same iter space */
                        {
                            var_20 = ((long long int) ((((/* implicit */_Bool) max((2011906210), (-1076386637)))) ? (((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1076386625)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31241)))))));
                            var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned long long int) (short)10448))) ? ((~(((/* implicit */int) var_8)))) : (max((var_3), (var_11))))), (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_11 [i_0])) >> (((var_13) - (295482897989374449LL)))))))));
                            var_22 |= ((/* implicit */long long int) ((unsigned long long int) ((short) arr_7 [i_6 + 2] [i_6] [5U])));
                            var_23 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_7 [i_6 + 1] [i_2 - 1] [i_4 + 1])))));
                            var_24 |= ((/* implicit */unsigned long long int) ((max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (_Bool)1))));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_0] [7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [1LL] [i_4])) || (((/* implicit */_Bool) var_12)))))) : (808374621U))))));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((-1185925948) / (((/* implicit */int) var_12))))) ? (arr_12 [i_0] [i_2 - 1]) : (var_3)))));
                            var_26 = ((/* implicit */long long int) arr_7 [i_7] [i_3] [i_2 + 2]);
                            var_27 = ((/* implicit */short) -1076386646);
                            var_28 = ((((/* implicit */int) arr_10 [i_4 - 1] [i_2 + 2] [i_2 + 1])) != (((/* implicit */int) ((unsigned short) var_6))));
                            var_29 -= ((/* implicit */long long int) (_Bool)0);
                        }
                        for (long long int i_8 = 4; i_8 < 9; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_5 [i_3] [2LL]))));
                            arr_28 [i_8] [i_8] [i_8] [i_4] [i_8 - 4] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_4] [i_0] [i_4] [i_8 - 3])) ? (((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_4])) : (arr_23 [i_0] [i_0] [i_2] [i_3] [i_4 - 2] [6LL])))) ? (((((/* implicit */long long int) -2011906211)) ^ (arr_5 [i_8] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_4 - 2] [i_8 + 1] [i_8 + 1] [i_4] [i_2 + 3]))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            arr_32 [i_0] [i_2 + 2] [i_3] [i_2 + 2] [i_9] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [(unsigned char)7] [6ULL])) : (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_6)))))));
                            arr_33 [i_0] [(_Bool)1] [i_2 + 1] [(unsigned short)6] [i_9] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)199))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_0] [i_2] [i_3]))))) : (var_5)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4245))) / (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1601352917)) : (18446744073709551596ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_2] [i_3]) >= (arr_3 [5] [1LL] [i_3])))))));
                            var_31 = ((/* implicit */short) ((int) var_10));
                        }
                    }
                } 
            } 
            arr_34 [i_0] [i_2] = ((/* implicit */unsigned char) arr_0 [i_0] [i_2]);
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
        {
            arr_37 [i_10] &= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_24 [i_0] [i_0] [i_10])))))));
            var_32 = ((/* implicit */unsigned long long int) ((short) (unsigned char)240));
            var_33 ^= ((/* implicit */short) arr_6 [i_10] [i_0]);
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
        {
            arr_42 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1391493322U)) ? (-7321011819148879523LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))));
            var_34 = ((((/* implicit */_Bool) arr_5 [i_11] [i_11])) ? (arr_5 [i_11] [i_11]) : (arr_6 [i_0] [i_11]));
            arr_43 [i_0] [0LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)112))))) ? (((/* implicit */unsigned long long int) arr_15 [i_11] [(short)2] [i_11] [i_0] [i_11] [i_0] [i_0])) : (arr_40 [i_11] [i_0])));
        }
        arr_44 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)95)))) >> (((max((((/* implicit */long long int) 2011906207)), (arr_17 [i_0] [i_0] [1] [i_0]))) - (4670547022936719655LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(_Bool)1] [i_0] [i_0] [(unsigned short)8] [8ULL]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_10)) : (var_5)))) ^ (((((/* implicit */unsigned long long int) var_11)) & (var_7)))))));
    }
    var_35 = ((/* implicit */int) var_5);
    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11)))))))) ? (((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) var_9))))) : (((((int) (unsigned char)6)) - (var_10)))));
}
