/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202899
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned short) var_4)))));
        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_5) : (var_17)))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_3))))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [(signed char)0])) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                        var_22 &= ((var_7) >> (((arr_3 [i_2 - 1] [i_3 + 2] [(signed char)20]) + (672013055))));
                        var_23 = (!(((/* implicit */_Bool) arr_5 [18LL])));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((-7864813574197958897LL) - (1688849860263936LL))))));
                        arr_14 [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) ((((unsigned int) arr_1 [i_0] [i_0])) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [(short)4])))))));
                    }
                } 
            } 
            var_25 ^= ((/* implicit */unsigned short) var_12);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_11))) >> (((((/* implicit */int) var_9)) - (6049)))));
        }
    }
    var_27 ^= ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) 
    {
        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_4]))));
        arr_19 [i_4] = ((/* implicit */unsigned char) ((unsigned short) (+(var_7))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_29 = ((/* implicit */unsigned long long int) var_3);
        var_30 = ((/* implicit */_Bool) (-(arr_3 [i_5] [i_5] [i_5])));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_5] [i_5]))))) ? (var_7) : (((unsigned long long int) arr_9 [i_5]))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_32 = ((/* implicit */long long int) var_1);
        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((max((var_3), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_6] [i_6] [i_6]), (arr_4 [i_6] [i_6] [i_6])))))));
    }
    var_34 -= ((/* implicit */unsigned long long int) var_4);
}
