/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211074
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
    var_20 &= (+(max((var_7), (((/* implicit */long long int) (+(var_19)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)177)))))));
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) arr_1 [(signed char)5])) >= (var_6)));
        var_22 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) -1403315907)));
        arr_3 [15U] = ((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1] [i_0]));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 6; i_2 += 3) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((/* implicit */int) var_4)))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_18 [i_5] [i_2] [i_5] [i_2] [i_5] [i_3] [i_2] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_4 [i_3 + 1])))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            var_24 = ((/* implicit */short) ((unsigned char) (+(var_2))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13761))) >= ((-(51076715U)))))))));
                arr_19 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((arr_5 [i_3 + 1] [i_2 - 2]) < (arr_5 [i_3 - 2] [i_2 - 3])))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_1 + 1] [i_1])) < (max((((/* implicit */unsigned long long int) var_9)), (var_1))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 8; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-71)), (var_17)))) ? (((/* implicit */int) arr_16 [i_1 + 1] [i_1 - 1] [i_2 - 3] [i_1 - 1] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_15 [i_1 - 1] [i_2 + 4] [i_6] [i_6] [i_1])))))));
                        var_27 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1])) + (((/* implicit */int) var_16)))))))) & ((-(((/* implicit */int) arr_4 [i_6 + 2]))))));
                        arr_25 [i_1] [i_1] [i_7] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) (((+(arr_8 [i_1 - 1]))) < (((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_1 + 1]))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_1 - 1])), (arr_1 [i_1 - 1])))), (max((((/* implicit */unsigned long long int) arr_4 [i_1 - 1])), (var_1)))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) arr_21 [i_2] [i_2 - 1] [i_1 - 1] [i_1 - 1])))));
            arr_26 [i_2] [i_2] [i_2] = ((/* implicit */short) max((9223372036854775795LL), (((/* implicit */long long int) (unsigned short)25256))));
        }
        var_30 = ((/* implicit */unsigned char) (unsigned short)65507);
        arr_27 [i_1] = ((/* implicit */short) (+((-(((/* implicit */int) var_4))))));
        var_31 = ((/* implicit */unsigned short) (+(((arr_20 [i_1 - 1] [i_1]) - (arr_20 [i_1 + 1] [i_1])))));
    }
}
