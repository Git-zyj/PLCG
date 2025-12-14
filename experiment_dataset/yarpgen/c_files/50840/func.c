/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50840
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 = var_0;
                var_14 -= ((/* implicit */long long int) var_2);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_15 = ((/* implicit */int) ((unsigned char) ((var_1) << (((((/* implicit */int) var_3)) - (1))))));
            var_16 += (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [15LL] [i_3]))))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_15 [i_5 + 2]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) + (arr_13 [i_2] [i_2 - 1] [(_Bool)1])))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((var_1) >> (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                        arr_23 [(unsigned char)20] [1ULL] [i_6] [i_4] [i_5 + 2] [i_6] = ((/* implicit */long long int) ((unsigned long long int) var_5));
                        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))) == (2957828672U))));
                        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (signed char)106))) <= (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_12 [(unsigned short)13])))))));
                    }
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2] [i_4] [13ULL])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_5 + 1])))) : (((/* implicit */int) var_5))));
                    var_24 = ((/* implicit */unsigned long long int) var_9);
                }
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) (((-(1337138618U))) | (var_6)));
                var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (((((/* implicit */_Bool) var_12)) ? (arr_19 [i_3] [19ULL] [12LL] [(unsigned short)9] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) >= (arr_21 [i_2 - 1] [(unsigned char)11] [19LL] [4ULL] [i_7])));
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    var_28 += ((/* implicit */unsigned short) ((((((((var_1) < (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_12)) ? (var_9) : (arr_25 [(unsigned char)20] [i_2] [(short)8] [i_9]))) : (max((arr_21 [(_Bool)1] [(_Bool)1] [6LL] [i_9] [i_9]), (var_9))))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_17 [i_2 - 1] [i_8] [i_9])) & (((/* implicit */int) arr_17 [i_2 - 1] [i_2 - 1] [i_2])))) - (209)))));
                    var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) var_2)) - (56490)))))) ? (max((((/* implicit */unsigned long long int) var_8)), (0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) arr_11 [i_2 - 1] [20LL] [i_2])) ? (arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_11 [i_2 - 1] [i_2 - 1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_24 [i_8] [i_8] [i_8 + 1])))));
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) ((long long int) var_3));
        var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) var_10))), (arr_27 [i_2 - 1] [i_2] [i_2 - 1])));
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) 0LL))));
    }
}
