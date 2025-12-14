/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3125
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0 - 1] [i_0] &= ((/* implicit */long long int) min((min((((/* implicit */int) var_2)), (var_13))), (((((/* implicit */int) arr_1 [i_0 + 2] [i_0])) + (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 2]))))));
        var_20 *= ((/* implicit */unsigned short) (+(max(((~(var_17))), (((/* implicit */unsigned long long int) ((int) var_15)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))))))));
        var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) arr_0 [i_0 - 2])))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            arr_7 [i_1] [i_0] &= arr_0 [i_0 + 1];
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_4 [i_1] [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) (-(var_13)))) : (((((/* implicit */_Bool) (unsigned char)126)) ? (70367670435840ULL) : (((/* implicit */unsigned long long int) -221561735)))))));
        }
    }
    for (unsigned int i_2 = 4; i_2 < 9; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_15 [i_2] [i_3] = ((/* implicit */signed char) min(((-(((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_3] [i_2])) >= (((/* implicit */int) arr_10 [i_2]))))))), (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 70367670435840ULL)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2 - 1] [i_2 + 3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 3] [i_2 - 3] [i_2 - 3])) ? (arr_17 [i_2] [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((18446673706039115775ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))))))));
                    var_23 -= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) min((((/* implicit */signed char) var_0)), (arr_10 [(signed char)10])))), (arr_14 [i_2] [i_2 + 1]))), (((/* implicit */long long int) min((arr_18 [i_2] [2ULL] [i_3] [i_4] [2ULL] [2ULL]), (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_4] [i_2] [i_5])) : (((/* implicit */int) arr_6 [i_2] [i_3] [i_4])))))))));
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_2])) ? (arr_18 [i_2] [(unsigned short)1] [i_4] [i_5] [i_2 + 3] [(unsigned short)1]) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_19 [i_2 - 1] [i_3] [i_2] [i_5])) : (((/* implicit */int) arr_12 [i_2 - 3] [i_2])))))))));
                }
                var_25 = ((/* implicit */int) min((min((6351535321360175165ULL), (((/* implicit */unsigned long long int) (unsigned char)102)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2])))))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_10 [8ULL])) ? (((/* implicit */int) arr_10 [(_Bool)0])) : (((/* implicit */int) arr_10 [(_Bool)1]))))))));
                arr_21 [i_2] [10U] [i_4] = ((/* implicit */unsigned short) arr_0 [i_2]);
            }
        }
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            arr_24 [i_2] = ((/* implicit */_Bool) min((((unsigned long long int) max(((unsigned char)126), (((/* implicit */unsigned char) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_22 [i_2] [i_6] [i_2]))) >= ((+(arr_18 [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 3] [i_6 + 1] [(unsigned short)0]))))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(arr_23 [i_2] [i_2]))), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_2 - 4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_2])) : (var_3))))))) : (max((((/* implicit */int) arr_6 [(unsigned short)19] [i_6 + 1] [i_2 - 1])), (arr_18 [i_6] [i_2] [(unsigned char)1] [i_2 - 1] [i_2] [i_2 - 2])))));
        }
        for (long long int i_7 = 4; i_7 < 9; i_7 += 3) 
        {
            arr_27 [i_2] = ((/* implicit */unsigned int) min((var_10), (((/* implicit */long long int) ((unsigned int) arr_11 [i_2 - 2] [i_2])))));
            var_28 += ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_2] [i_7 - 1])), (((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_23 [i_2 - 4] [i_7 - 3]) : (var_9)))))) ? (((/* implicit */int) ((unsigned short) arr_26 [(unsigned char)5] [i_7 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 - 3] [i_7] [(unsigned short)8]))))));
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((long long int) arr_16 [i_2 - 4] [(_Bool)1] [i_7])), (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [(signed char)2])))))))))))));
        }
        /* vectorizable */
        for (long long int i_8 = 2; i_8 < 11; i_8 += 3) 
        {
            arr_32 [i_2 + 3] [i_2] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2 - 3] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_8])) * (((/* implicit */int) var_11)))))));
            arr_33 [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_31 [i_2 + 2] [i_8 - 2]))));
        }
        arr_34 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [(unsigned char)6])), (arr_23 [i_2] [i_2])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_13)) : (arr_17 [i_2] [i_2 - 4] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)3] [i_2] [i_2 - 3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_23 [5] [i_2 + 3]))) < (((unsigned long long int) arr_28 [i_2] [i_2] [i_2])))))) : (((unsigned long long int) max((var_18), (((/* implicit */long long int) arr_25 [i_2 - 2] [i_2] [0ULL])))))));
    }
    var_30 = (~(min((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_10))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_6))))))));
}
