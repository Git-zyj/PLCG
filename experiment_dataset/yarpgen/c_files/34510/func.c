/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34510
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
    var_19 = ((((/* implicit */int) min((min(((unsigned short)2048), (((/* implicit */unsigned short) (short)4065)))), (var_1)))) <= ((((((~(((/* implicit */int) var_15)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)130)) == (((/* implicit */int) var_17))))))));
    var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) (short)-20)))) : (((/* implicit */int) (unsigned char)38))))));
    var_21 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */short) (((+(arr_7 [i_0] [i_2]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned char)194), ((unsigned char)38)))), (((((/* implicit */_Bool) 249241802U)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) (unsigned short)3))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_15 [i_0 + 2] [i_0 + 2] [i_2] [i_0] [i_0 + 2]))))))) : (max((((unsigned int) arr_13 [i_0] [i_1] [i_2] [i_1] [i_2] [i_0] [i_0 + 2])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)4818)))))))));
                                var_23 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4 + 3] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [i_0 + 3])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0 + 3])), (arr_8 [i_0 - 2] [i_0])))) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (short)32765))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_2] [(unsigned char)5] [i_2] [i_0] [i_5])) - (((/* implicit */int) min(((unsigned short)65532), (arr_15 [i_0] [i_0] [i_1] [i_0] [i_1]))))));
                    }
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned char) ((min((arr_16 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0] [1U] [i_0]), (((/* implicit */long long int) arr_12 [i_0 + 3] [i_0])))) / (((/* implicit */long long int) ((/* implicit */int) max((max(((unsigned short)60718), (((/* implicit */unsigned short) (short)32304)))), ((unsigned short)4)))))));
        var_25 = ((/* implicit */unsigned long long int) (unsigned short)4);
        arr_21 [i_0] = ((/* implicit */short) min(((unsigned short)5), (((/* implicit */unsigned short) (short)-32766))));
        arr_22 [i_0] = ((/* implicit */unsigned char) (~((~(-266547891)))));
    }
    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_26 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_27 [i_6] [i_6] [i_6])))), (max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned short)4))))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (short)27970))));
        }
        /* vectorizable */
        for (signed char i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            arr_32 [i_6] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) 4194175038U);
            arr_33 [i_8 + 1] = ((/* implicit */unsigned short) (short)32765);
        }
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_31 [i_6] [i_6] [i_6]), (arr_31 [i_6] [i_6] [i_6]))))));
        arr_34 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 266547890))) ? (max((34359705600LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_6])) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (unsigned short)7))))))) : (((((/* implicit */_Bool) max((100792257U), (((/* implicit */unsigned int) arr_29 [i_6] [i_6] [i_6]))))) ? (((long long int) (short)31519)) : (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_6] [i_6])))))))));
    }
}
