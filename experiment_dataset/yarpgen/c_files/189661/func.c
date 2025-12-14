/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189661
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
    var_12 = ((/* implicit */short) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7))) - (7031U)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 1] [i_0] [i_1] [0ULL] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) <= (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) var_2)), (var_6)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [(short)0] [i_1] [i_2] [i_3] [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_10 [4] [3U] [1LL] [i_3] [6ULL]))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), (var_0)))), (281474708275200LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                                arr_16 [i_0] = ((/* implicit */unsigned short) (-(max(((+(var_6))), (min((((/* implicit */long long int) var_2)), (var_3)))))));
                                arr_17 [i_0 - 1] [i_1] [(unsigned char)2] [4U] [i_0] = ((/* implicit */short) (-(var_7)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_22 [9LL] = ((((/* implicit */_Bool) ((signed char) (-(1418259755))))) ? (max((2823930875U), (((/* implicit */unsigned int) min((arr_13 [i_5] [(_Bool)1] [(short)5] [(_Bool)1] [(unsigned char)0]), (((/* implicit */short) (_Bool)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -281474708275198LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [4ULL] [3ULL] [4LL] [(unsigned char)1]))) : (arr_18 [i_5])))))));
        arr_23 [i_5] [(unsigned short)1] = min(((+(1418259755))), (((/* implicit */int) (_Bool)1)));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_13 [(_Bool)1] [i_5] [i_5] [i_5] [(_Bool)1])) - (24641))))), (((int) 1471036420U)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        arr_26 [10LL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_7)));
        var_14 = ((/* implicit */short) ((unsigned short) arr_24 [i_6]));
        var_15 += ((/* implicit */int) arr_24 [i_6]);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [(_Bool)1])))))));
    }
    for (int i_7 = 1; i_7 < 18; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_35 [7] [10] [4ULL] [i_9] = ((/* implicit */unsigned int) ((unsigned long long int) ((int) var_7)));
                    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1693097206)) ? (-708801905) : (((/* implicit */int) (short)(-32767 - 1)))))))))));
                    var_18 = ((/* implicit */long long int) var_8);
                }
            } 
        } 
        var_19 |= arr_34 [(_Bool)1] [i_7 - 1] [(_Bool)1];
    }
}
