/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221398
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) 5361667197543649556ULL))));
                    var_20 |= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_4 [i_0])), (min((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_0 [i_0] [i_1]))))) == (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_8 [i_2] [8LL] [(short)10])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_2])))), (((/* implicit */int) var_6)))))));
                    arr_9 [i_1] [i_1] [i_2] [18LL] = (+(((/* implicit */int) (!((_Bool)1)))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_0) < (var_4))) ? (((/* implicit */long long int) var_15)) : (var_13))))));
    /* LoopSeq 3 */
    for (short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */signed char) arr_11 [i_3]);
        var_22 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_8 [i_3] [i_3] [i_3]) : (arr_8 [i_3] [i_3] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [15U] [i_3] [i_3])) : (((/* implicit */int) (signed char)-124))))))), (((/* implicit */long long int) var_3))));
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */short) var_16);
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (signed char)123))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_24 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-117)) : (var_2))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (var_11) : (var_2))))));
                    arr_24 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_23 [3] [3] [(unsigned char)0]) : (arr_16 [i_5] [i_5]))))));
                }
            } 
        } 
        arr_25 [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -675889094735960742LL)))) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_19 [i_5]))));
    }
}
