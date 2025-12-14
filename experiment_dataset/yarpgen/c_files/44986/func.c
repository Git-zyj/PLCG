/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44986
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 1] [13U] [i_1] = max((((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) arr_4 [i_0] [8U])))))) : (var_7))), (((/* implicit */unsigned int) ((arr_0 [i_0 + 1]) <= ((~(var_12)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 2999834253U)) ? (2598117670U) : (((/* implicit */unsigned int) var_8)))) >= (((/* implicit */unsigned int) arr_9 [i_0 + 1] [i_1])))))) != (min((((/* implicit */unsigned int) (~(var_8)))), (((((/* implicit */_Bool) var_3)) ? (var_6) : (var_3)))))));
                            var_17 &= ((/* implicit */unsigned int) (((~(1189730449U))) >= (((((/* implicit */_Bool) ((var_4) / (var_1)))) ? (3680219133U) : (((/* implicit */unsigned int) -729900403))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_18 &= ((/* implicit */unsigned int) (+(((var_13) / (arr_14 [i_4])))));
            arr_16 [i_4] [i_4] [i_5] = var_14;
        }
        var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(min((arr_12 [i_4] [i_4]), (var_5))))))));
        var_20 = (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (var_13))))))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned int) arr_14 [9]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) 0U)) ? (((((/* implicit */unsigned int) -47935128)) % (4294967283U))) : (((((/* implicit */_Bool) var_4)) ? (var_6) : (var_7)))))));
            var_22 ^= ((/* implicit */unsigned int) -729900403);
        }
        for (int i_7 = 1; i_7 < 20; i_7 += 3) /* same iter space */
        {
            var_23 = (-(((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((var_3) >> (((arr_18 [i_7 - 1]) - (4122132005U))))) : (((unsigned int) 13U)))));
            var_24 = ((((arr_20 [i_7 + 1] [i_7 + 2] [i_7 + 2]) != (((/* implicit */unsigned int) var_8)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1247773005)))))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_1)) : (var_10))))) : (((unsigned int) arr_13 [i_4])));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
        {
            var_25 -= ((/* implicit */unsigned int) var_11);
            arr_26 [i_4] [i_4] [i_8] = arr_15 [i_4] [12U];
        }
    }
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_26 = ((((((/* implicit */_Bool) var_14)) ? ((+(var_3))) : (((var_6) % (var_5))))) % ((-(((unsigned int) var_0)))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) <= ((+(var_10))))))) > (((127U) & (((var_12) << (((arr_29 [i_9] [13]) - (1038558669)))))))));
        var_28 = ((/* implicit */int) max(((-(arr_28 [i_9]))), (((((/* implicit */_Bool) 2825033622U)) ? (3931061066U) : (((/* implicit */unsigned int) 942761606))))));
        arr_30 [1U] = ((/* implicit */unsigned int) arr_29 [i_9] [i_9]);
    }
}
