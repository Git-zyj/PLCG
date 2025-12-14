/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199424
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
    var_20 += ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0])))));
        var_22 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */long long int) var_18);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                var_24 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) var_12)) : (var_5)))));
                arr_7 [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    var_25 = ((/* implicit */signed char) var_13);
                    var_26 = ((/* implicit */unsigned int) ((signed char) ((unsigned short) (signed char)62)));
                    var_27 |= ((/* implicit */signed char) ((_Bool) (signed char)57));
                }
                var_28 ^= ((/* implicit */unsigned char) ((arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2]) <= (((((/* implicit */_Bool) var_3)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) 2040U))))));
                var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_7))));
            }
            arr_10 [i_1] [i_1] [(signed char)9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((signed char)76), ((signed char)13)))), (arr_2 [i_0] [i_1])))), (((arr_9 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1]) | (arr_9 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1])))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_30 = ((/* implicit */signed char) var_7);
            var_31 = ((/* implicit */unsigned long long int) max((((int) ((signed char) arr_5 [i_4] [i_4] [i_0]))), (((/* implicit */int) ((((/* implicit */int) (signed char)62)) < (((/* implicit */int) ((_Bool) 9223372036854775794LL))))))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (short)15275))) ? (max((var_6), (arr_12 [i_0] [i_0]))) : (((((/* implicit */int) arr_13 [i_0] [i_4])) + (((/* implicit */int) var_0))))))) + (max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_4] [i_0] [i_0])))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_22 [i_0] [(short)3] [i_4] [i_0] [i_4] = ((/* implicit */unsigned int) (signed char)0);
                        arr_23 [i_4] [i_4] [i_4] [12LL] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_6 [i_0] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            var_33 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)250))))));
            var_34 = var_1;
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                var_35 = ((/* implicit */signed char) min(((+(((((/* implicit */int) arr_29 [i_0] [i_7] [i_8])) + (((/* implicit */int) var_0)))))), ((+(((/* implicit */int) var_9))))));
                var_36 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_8])) / (((/* implicit */int) arr_11 [i_0]))))) ? (((var_17) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) / (arr_20 [(unsigned char)2] [i_8] [(_Bool)1] [i_0] [i_0]))));
            }
        }
        for (short i_9 = 1; i_9 < 14; i_9 += 3) 
        {
            var_37 -= ((/* implicit */signed char) ((unsigned char) min((max((var_6), (((/* implicit */int) var_11)))), (((/* implicit */int) (short)-16384)))));
            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((((624711417U) == (((/* implicit */unsigned int) var_4)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((-2147483639) - ((-2147483647 - 1))))))) : (((unsigned long long int) var_10)))) == ((+(((unsigned long long int) var_14)))))))));
        }
    }
}
