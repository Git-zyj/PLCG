/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196528
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
    var_20 |= ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)30911)))) : (((/* implicit */int) var_4)));
    var_21 = ((/* implicit */unsigned int) (unsigned char)15);
    var_22 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_16))))) & ((+(2985555727U)))));
        arr_3 [i_0] = max((var_17), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)42393))))) != (min((-970912921180860466LL), (((/* implicit */long long int) (unsigned short)65521))))))));
        arr_4 [i_0] [(short)1] = ((unsigned short) (~(max((var_1), (1869583890U)))));
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_24 = ((/* implicit */_Bool) (unsigned short)28403);
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) ((unsigned short) (short)-16664)))))));
        var_26 = ((/* implicit */short) (((-(max((((/* implicit */long long int) (_Bool)1)), (1523753714722425730LL))))) > (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_5 [i_1])) : (arr_8 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (var_7) : (((/* implicit */int) (_Bool)1))))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 13; i_2 += 4) 
    {
        var_27 += ((((/* implicit */_Bool) arr_8 [(unsigned short)1] [i_2])) ? (((/* implicit */int) ((unsigned short) (unsigned short)34048))) : (((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_2] [i_2 - 3])) == (6507059152691193918LL)))));
        arr_12 [i_2] = ((/* implicit */short) (unsigned short)42393);
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            arr_16 [i_3] [(signed char)8] [(signed char)8] |= ((/* implicit */_Bool) 839069497492370513ULL);
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_28 = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((arr_9 [i_4]) << (((((((/* implicit */_Bool) (signed char)119)) ? (arr_20 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)5] [(unsigned short)9] [(_Bool)1]))))) - (3546655430895633050LL)))))) : (((/* implicit */signed char) ((arr_9 [i_4]) << (((((((((/* implicit */_Bool) (signed char)119)) ? (arr_20 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)5] [(unsigned short)9] [(_Bool)1]))))) + (3546655430895633050LL))) + (4143760515479721139LL))))));
                        arr_22 [i_2] [i_2] [(short)12] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)12)) - (((((arr_5 [9ULL]) + (2147483647))) >> (((((/* implicit */int) arr_17 [i_2] [(unsigned short)4] [i_4])) - (4071)))))));
                    }
                } 
            } 
            arr_23 [i_2] [i_2] [(signed char)11] = ((/* implicit */unsigned short) 3317730735U);
            arr_24 [i_2] [i_2] = ((/* implicit */int) ((arr_13 [i_2 - 1]) <= (((/* implicit */unsigned long long int) 852614781))));
        }
    }
}
