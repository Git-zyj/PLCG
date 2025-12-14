/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194514
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (signed char)-13))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (+(-2129546312)));
        var_21 = ((/* implicit */short) (-((-(arr_0 [i_0 + 4])))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_3] [i_2] = ((/* implicit */signed char) var_9);
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((-(2129546332))) ^ ((~(((/* implicit */int) ((_Bool) var_8))))))))));
                        var_23 = ((/* implicit */short) min((((/* implicit */signed char) var_11)), (var_0)));
                        arr_11 [i_0 - 1] [(short)10] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_0 [i_0])))));
                        var_24 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31920))) != (1125899906834432ULL)))) != (((/* implicit */int) ((_Bool) arr_7 [(short)1] [(unsigned short)13] [i_3] [i_3])))))), (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_3] [i_3 - 1] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113)))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 1979422434U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_16), (((/* implicit */unsigned int) arr_5 [(signed char)8] [i_0] [i_0 - 1])))) < (((/* implicit */unsigned int) ((/* implicit */int) ((1979422443U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)31919))))))))))) : ((+(arr_8 [i_0 + 3] [i_0 + 4] [i_0 - 1] [i_0] [i_0] [i_0 + 4])))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_25 ^= var_3;
        var_26 = ((/* implicit */unsigned long long int) -1513232076);
        var_27 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_18)))) ^ (((/* implicit */int) ((((/* implicit */int) var_18)) > (var_5))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5] [i_5])))))));
        arr_20 [i_5] = ((/* implicit */unsigned char) var_9);
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-13)) & (((/* implicit */int) (signed char)-13))));
        var_29 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)846)) ? (((/* implicit */int) (short)0)) : (2147483647)))), (arr_18 [i_6])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            {
                var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) 2315544850U)))));
                var_31 = ((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_27 [i_7] [i_7] [i_7]))))) - (((/* implicit */int) ((signed char) var_7))));
                var_32 = ((/* implicit */int) arr_27 [i_8] [i_8] [i_7]);
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((unsigned char) var_0))), (var_12)))));
}
