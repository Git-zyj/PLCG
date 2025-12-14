/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2903
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = max((-4681166306111508815LL), (((/* implicit */long long int) ((arr_1 [i_0]) > (arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_16 |= ((/* implicit */_Bool) (unsigned short)21910);
            var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)13491)) * (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) (+((-(-1841449944)))))) : ((+(arr_2 [i_1 + 2] [i_1])))));
            arr_4 [i_0] [i_1 + 1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
            arr_5 [i_1 - 1] [i_1 + 2] = ((/* implicit */int) (~(arr_2 [i_1 - 1] [i_1 + 1])));
            var_18 = ((/* implicit */_Bool) max((var_18), ((!((!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1]))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) 9005000231485440LL);
            var_20 = ((/* implicit */signed char) (((_Bool)1) ? (((arr_2 [i_2] [i_0]) >> (((var_8) - (2672809044970371518ULL))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0])) + (((/* implicit */int) var_14))))) & (((long long int) 9005000231485440LL)))))));
        }
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                for (int i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) max(((unsigned char)198), (((/* implicit */unsigned char) arr_0 [i_0])))))))));
                        var_23 = ((/* implicit */int) max((var_23), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)58)))))))));
                        arr_17 [i_5] [i_4] [i_3] [i_4] [i_0] = ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1450171535326175929LL)))) - ((+(var_10)))));
                        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_0] [i_5])) ? (((/* implicit */unsigned long long int) ((-1602182732818986170LL) + (-9005000231485445LL)))) : (min((((/* implicit */unsigned long long int) var_0)), (var_4))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) arr_7 [i_4 - 1] [i_3] [i_0])) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))))));
                    }
                } 
            } 
            arr_18 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_15 [i_0] [i_0] [i_3] [i_3] [i_3])) - (23208)))))) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned short)13491)), ((-9223372036854775807LL - 1LL)))) << (((((arr_7 [i_0] [i_0] [0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_0])))) - (31247)))))) : (((unsigned long long int) 1602182732818986164LL))));
        }
        arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((91655383), (arr_12 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */int) ((arr_11 [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))))))))) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0])) && (((/* implicit */_Bool) (unsigned short)8362)))))));
        arr_20 [i_0] [i_0] = ((/* implicit */long long int) min((134217728), (((/* implicit */int) (_Bool)1))));
    }
    var_25 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (17650090663369189480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13112)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_1))))) : (var_0))) | (((var_13) - (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))));
}
