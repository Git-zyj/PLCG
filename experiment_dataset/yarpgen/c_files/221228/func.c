/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221228
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
    var_13 = ((/* implicit */_Bool) ((var_12) ^ (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_4) : (var_4))) <= (((/* implicit */long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_5)))) != (((/* implicit */int) var_1)))) ? (var_4) : (((/* implicit */long long int) ((((var_8) & (((/* implicit */int) var_0)))) * (((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (((((/* implicit */long long int) (-2147483647 - 1))) | (-1138616361170092692LL)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((((((+(var_4))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (var_2) : (((/* implicit */int) var_7)))) - (248242797)))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (var_8) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (arr_9 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (var_8)))) ? (((/* implicit */int) var_11)) : (((arr_1 [i_0] [i_1]) & (((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) arr_4 [i_3] [i_4]);
            arr_15 [9] [i_3] [i_4] = var_9;
            var_20 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) var_4)) / (arr_13 [i_3] [i_3] [i_4]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_9 [i_3])))))) ? (((/* implicit */int) (((~(((/* implicit */int) var_5)))) == (((/* implicit */int) arr_5 [i_3] [(signed char)21] [i_3]))))) : (((((/* implicit */_Bool) (+(arr_11 [i_3] [(signed char)12])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))));
        }
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
        {
            var_21 ^= ((/* implicit */_Bool) ((((arr_17 [i_5] [i_3]) & (arr_17 [i_3] [i_3]))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8))))))))));
            var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) ? (((var_1) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
            var_23 ^= ((/* implicit */long long int) var_8);
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3] [i_5] [i_3])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_5 [i_3] [i_5] [i_5]))))))));
        }
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) + (var_10)))) ? (((/* implicit */unsigned int) ((var_2) & (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (276854760U)))))) ? (((var_10) & (((0U) * (1081102761U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_3])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_6 = 3; i_6 < 14; i_6 += 3) 
        {
            var_27 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (var_4)))) >= (((var_12) & (((/* implicit */int) var_1))))));
            var_28 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
            var_29 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) var_2)) & (arr_8 [i_6] [i_6]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_0))))))));
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_24 [i_7] [i_7] = (~(((((/* implicit */_Bool) ((var_9) ? (arr_1 [i_3] [i_3]) : (var_8)))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) var_6)))))));
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        arr_29 [i_3] [i_7] [i_8] [i_9] = ((/* implicit */int) var_4);
                        var_30 = ((/* implicit */int) var_5);
                        var_31 |= ((/* implicit */long long int) (((-2147483647 - 1)) / (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)63)) >> (((/* implicit */int) var_1))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)0))))));
                    }
                } 
            } 
        }
    }
}
