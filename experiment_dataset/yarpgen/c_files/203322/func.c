/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203322
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_10 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) != (arr_3 [i_1])));
            var_11 = ((/* implicit */signed char) -292244489600477447LL);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    arr_12 [i_0] [i_1] [i_1] [(unsigned short)3] [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
                    var_12 ^= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)14))));
                    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) - (((((/* implicit */_Bool) (unsigned short)34608)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62499))) : (var_6)))));
                }
                for (signed char i_4 = 4; i_4 < 9; i_4 += 4) 
                {
                    arr_16 [i_4] [i_0] [i_2 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)13)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4]))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65186)))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2 + 2])) : (((((/* implicit */_Bool) 7760745281249814904LL)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_5))))));
                }
                for (long long int i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned short) (unsigned char)242);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((long long int) var_2)) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7)))))))))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)3)))))));
                }
                for (long long int i_6 = 2; i_6 < 10; i_6 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2]))))));
                    arr_23 [i_0] [i_6 - 2] [(unsigned char)7] [i_6] = ((/* implicit */unsigned char) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 2])))));
                    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5479))) : (arr_13 [10LL] [i_0] [i_6 - 2] [i_6])));
                }
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_30 [i_7] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_7] [i_8]))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)1495)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0]))) : (arr_27 [i_7]))) < (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    }
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) ((unsigned char) (unsigned char)21)))));
                }
                arr_32 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_24 [(unsigned short)10] [i_1] [i_2]))))));
            }
            for (long long int i_9 = 4; i_9 < 9; i_9 += 3) 
            {
                arr_35 [(unsigned short)8] [(unsigned short)8] [i_9 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) arr_20 [i_9 - 1] [i_9 + 2] [7LL] [(unsigned short)5]))));
                arr_36 [i_9] [i_9] [i_9 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))) : (var_0)))) ? (((((/* implicit */_Bool) arr_18 [8LL])) ? (((/* implicit */int) arr_24 [(unsigned char)0] [i_1] [(unsigned char)0])) : (((/* implicit */int) (signed char)118)))) : (((/* implicit */int) (unsigned char)6))));
                var_21 = ((/* implicit */unsigned short) arr_2 [i_0]);
            }
            arr_37 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (7726193080884791753LL) : (-8164138116731184950LL)));
        }
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((min((max((arr_22 [i_0] [(unsigned short)7] [0LL] [i_0]), (((/* implicit */long long int) (unsigned char)20)))), (((((/* implicit */_Bool) arr_8 [(unsigned char)7] [i_0] [i_0] [i_0])) ? (arr_1 [(unsigned char)8]) : (var_3))))) <= ((~(((2199023239168LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))))))));
    }
    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
    {
        var_23 = ((/* implicit */signed char) ((max((((/* implicit */long long int) max((arr_40 [i_10]), (arr_40 [i_10])))), (var_9))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) (unsigned char)252)))))));
        arr_41 [i_10] = var_7;
        arr_42 [(unsigned char)11] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_39 [(unsigned char)4]))));
    }
    for (long long int i_11 = 1; i_11 < 22; i_11 += 1) 
    {
        arr_46 [i_11 - 1] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((unsigned short) var_7))), (arr_45 [i_11 + 1] [i_11 + 1]))) > (max((((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_11 - 1]))) : (-7861824199982455480LL))), (max((281440616972288LL), (((/* implicit */long long int) var_4))))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) - (((long long int) (+(((/* implicit */int) (unsigned short)37922)))))));
        arr_47 [15LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), ((unsigned char)162)))) ? ((~(-9011735821037370295LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)0))))))) ? (((/* implicit */long long int) (+((~(((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76))) : (var_0))));
    }
    for (long long int i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        arr_50 [i_12] = ((/* implicit */unsigned char) ((signed char) ((unsigned short) min((var_8), (((/* implicit */unsigned short) (unsigned char)24))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)44)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (max((((var_9) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)34608))))))) : (arr_44 [i_12])));
    }
    var_26 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max(((unsigned char)250), (var_5)))))) ? (max((((((/* implicit */_Bool) var_2)) ? (9223372036854775807LL) : (488757668625438598LL))), (((((/* implicit */_Bool) 6072619252734563916LL)) ? (4157580227276363260LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))))))) : (((long long int) min((-6752403481286034838LL), (((/* implicit */long long int) var_1)))))));
}
