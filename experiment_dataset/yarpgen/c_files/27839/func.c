/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27839
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-21967))))) : (arr_0 [i_0] [(unsigned char)8]))), (((/* implicit */unsigned int) min((arr_1 [i_0]), (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((var_8), ((unsigned short)65535)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) max((var_6), ((signed char)-77)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [(signed char)1]))))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65528), ((unsigned short)4746)))))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) min((((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) arr_1 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            var_12 ^= ((/* implicit */unsigned int) (signed char)59);
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 6; i_3 += 2) 
            {
                for (short i_4 = 3; i_4 < 7; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) (unsigned short)1);
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
            arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(short)7] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_1] [i_1]))) : (131071U)));
        }
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17569))) : (3062021456519702054ULL)));
    }
    for (short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
    {
        arr_15 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525))) : (131071U)));
        arr_16 [i_5] = ((/* implicit */signed char) arr_8 [2ULL] [(unsigned char)3] [(signed char)8]);
    }
    var_17 = ((/* implicit */unsigned long long int) var_9);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) * (((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0)))));
    var_19 |= ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) ((short) (unsigned char)0)))));
}
