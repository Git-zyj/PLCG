/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234555
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))), (max((((var_14) >> (((((/* implicit */int) var_12)) - (85))))), (((/* implicit */unsigned int) var_17)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_11) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0] [i_0])))) ? (max((((/* implicit */unsigned long long int) var_13)), (var_7))) : (arr_0 [i_0 + 1] [i_0]))) == ((-(arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */signed char) max((var_16), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_20 |= ((/* implicit */_Bool) (-(max((((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))), (((arr_0 [i_0] [i_0]) | (((/* implicit */unsigned long long int) var_14))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned long long int) (signed char)27);
        var_22 += ((/* implicit */_Bool) arr_4 [i_1]);
        arr_8 [i_1] = ((/* implicit */int) ((unsigned int) var_13));
        var_23 = ((/* implicit */unsigned int) var_11);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 2) 
            {
                {
                    var_24 -= ((min((3933873102313332949ULL), (11037860430142771064ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1]))))));
                    var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 + 1])))) ^ (((/* implicit */int) ((max((((/* implicit */unsigned int) arr_13 [i_3] [i_3])), (0U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) && (arr_2 [i_4]))))))))));
                    var_26 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)1) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1039266760U)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_14)) : (var_8))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                }
            } 
        } 
        arr_16 [i_2 + 1] = ((/* implicit */unsigned int) (((-(max((((/* implicit */unsigned long long int) arr_4 [i_2])), (var_9))))) << (((max((((((/* implicit */long long int) arr_5 [i_2 + 1])) + (arr_4 [i_2]))), (((/* implicit */long long int) ((3977221363U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221)))))))) - (3977221114LL)))));
        var_27 = ((/* implicit */unsigned int) var_11);
    }
}
