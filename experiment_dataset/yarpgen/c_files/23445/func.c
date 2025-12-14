/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23445
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (1659139107U)))) <= (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 0LL)) : (8ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (+(var_9)));
        var_11 = ((((/* implicit */_Bool) -9223372036854775796LL)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)2646)), (((((/* implicit */_Bool) -1257805398)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7569))) : (15435079055742778852ULL)))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)2640)))), (arr_9 [(signed char)11] [(_Bool)1])))) : ((+(var_3)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned int) (unsigned short)39547);
                            var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_16 [(unsigned char)2] [i_2] [i_3] [i_4] [i_5] = 4512942927042734836ULL;
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                        {
                            arr_20 [i_3] [5U] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-6779)))));
                            var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))))));
                        }
                    }
                } 
            } 
        } 
        arr_21 [(short)21] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)59297)));
    }
    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
    {
        var_16 = ((/* implicit */int) (!(((((unsigned int) (unsigned short)62896)) != (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7 + 3] [i_7 + 3] [i_7] [i_7 - 1])))))));
        arr_25 [i_7] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)6))))) / (arr_24 [i_7 + 2]))), (((/* implicit */long long int) (short)-32763))));
    }
    var_17 = min(((unsigned char)15), ((unsigned char)58));
    /* LoopNest 3 */
    for (long long int i_8 = 2; i_8 < 11; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    arr_36 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (short)-1)))))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_19 [21U] [i_8] [i_10]))))) ? (max((11655215556728342587ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-1257805382) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_8 + 2] [i_8 + 1])) >> (((var_3) + (1177032941)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [(short)6] [i_9] [i_9])) : (((/* implicit */int) arr_19 [i_8] [9LL] [i_10]))))) : (4512942927042734836ULL)));
                }
            } 
        } 
    } 
}
