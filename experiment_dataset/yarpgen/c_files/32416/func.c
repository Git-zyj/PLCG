/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32416
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)165)) ? (((((long long int) 0U)) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_0] [i_0])))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_11 = ((/* implicit */short) ((int) var_1));
                            var_12 = ((/* implicit */short) ((arr_14 [i_3] [i_1] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_8 [i_0])));
                        }
                        var_13 *= ((/* implicit */unsigned char) arr_1 [i_0]);
                        arr_15 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (!((_Bool)1)));
                        var_14 = ((/* implicit */short) (!(arr_14 [i_2 + 2] [i_2 + 2] [6])));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((arr_3 [i_0]) >> (((arr_3 [i_0]) - (2642775555U)))))) : (((/* implicit */unsigned short) ((arr_3 [i_0]) >> (((((arr_3 [i_0]) - (2642775555U))) - (3951349698U))))));
                        var_15 = ((/* implicit */unsigned int) var_8);
                        var_16 ^= ((/* implicit */signed char) (-(((arr_12 [i_5] [i_5] [i_1] [i_1] [(_Bool)1] [i_5] [i_0]) ? (arr_8 [i_5]) : (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_19 [1] [i_2] [1]));
                        var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) var_5)) ? (9223372036854775806LL) : (1512408340006139059LL)))));
                    }
                    arr_23 [8ULL] [i_1] [8ULL] &= ((/* implicit */signed char) ((arr_2 [i_2] [i_1]) >> (((((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1]))) : (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [8LL] [8] [i_1] [i_2 + 2]))) : (0U))))) - (80U)))));
                    arr_24 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((var_9) >> ((((~(min((var_1), (((/* implicit */unsigned int) arr_7 [i_0])))))) - (4294967272U)))))) : (((/* implicit */unsigned int) ((var_9) >> ((((((~(min((var_1), (((/* implicit */unsigned int) arr_7 [i_0])))))) - (4294967272U))) - (4294967097U))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((var_9), (((/* implicit */unsigned long long int) var_3)))) % (var_5)))) ? (((/* implicit */unsigned int) var_7)) : (((unsigned int) ((((/* implicit */int) (_Bool)1)) / (-1857014788))))));
}
