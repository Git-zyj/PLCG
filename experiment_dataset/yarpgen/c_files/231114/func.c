/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231114
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61254)) / (((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((unsigned char) (unsigned short)1064))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((2147483615), (((/* implicit */int) (signed char)-97))))) ? (max((((/* implicit */long long int) arr_1 [i_0])), (-7198977095245783970LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))))))), (((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)213)))) == (((int) (unsigned char)255)))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */long long int) ((int) arr_4 [(unsigned short)1] [i_1] [i_1]))) > (5958212880930789030LL)))));
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -7198977095245783995LL)) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (((/* implicit */int) var_3)))), (((arr_5 [i_0]) / (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (short)-26917)))))))));
            arr_9 [i_0] [i_0] |= ((/* implicit */_Bool) ((unsigned char) max((arr_8 [i_0] [i_0] [i_2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)101))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_22 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((max((((/* implicit */long long int) 2147483642)), (7198977095245783995LL))) >= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)11593), ((unsigned short)48893))))))))));
            var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)127))))), (arr_8 [i_0] [i_0] [i_3])));
        }
        var_24 = ((/* implicit */unsigned char) 7198977095245783994LL);
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */signed char) (unsigned char)27);
        arr_17 [i_4] [i_4] = arr_11 [i_4] [3LL] [i_4];
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) arr_19 [i_5]);
        var_25 = ((/* implicit */signed char) (-(((/* implicit */int) arr_18 [i_5]))));
        var_26 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)61254)) ? (var_16) : (((/* implicit */int) (unsigned short)16619))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            arr_25 [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) arr_22 [i_6] [i_6]);
            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_18 [i_6]))));
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_19 [i_6]))));
        }
        arr_26 [i_6] [i_6] = ((/* implicit */long long int) arr_23 [i_6] [i_6]);
        var_29 &= arr_19 [i_6];
        /* LoopSeq 1 */
        for (signed char i_8 = 2; i_8 < 13; i_8 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) (unsigned short)0);
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 1; i_11 < 13; i_11 += 3) 
                        {
                            arr_38 [i_6] [i_6] [(signed char)2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (2147483642))));
                            var_31 = ((/* implicit */signed char) ((((((/* implicit */int) arr_24 [i_6] [i_8] [i_9])) << (((((/* implicit */int) (unsigned char)91)) - (85))))) == (((/* implicit */int) var_3))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_42 [i_6] [i_8] [i_9] = ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_10])) ? (((((/* implicit */_Bool) arr_40 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_24 [i_9] [i_8] [(unsigned short)3])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_18 [i_8 - 2])));
                            var_32 |= (!(((/* implicit */_Bool) arr_41 [i_6] [i_8 + 1])));
                        }
                        var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_6] [i_8] [i_8 - 2])) >= (((/* implicit */int) (unsigned char)10))));
                        arr_43 [(unsigned short)13] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((-7198977095245783995LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32526))))))) ^ (140703128616960LL)));
                    }
                } 
            } 
            arr_44 [14LL] [i_8 + 2] [(unsigned short)12] = ((/* implicit */long long int) ((signed char) arr_40 [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8]));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_8] [i_6] [i_6])) | (((/* implicit */int) ((((/* implicit */int) (unsigned short)61254)) <= (((/* implicit */int) (signed char)0)))))));
        }
    }
    var_35 = ((unsigned short) (unsigned short)157);
}
