/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49656
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))));
        var_11 = min(((-(0U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)7)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_12 = (-(arr_4 [i_1]));
        var_13 += ((/* implicit */short) (-(arr_6 [i_1])));
        var_14 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))))) ? ((-(arr_4 [i_1]))) : ((-(0U))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (short i_3 = 4; i_3 < 20; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((long long int) var_4)) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_1))))));
                    var_16 -= ((/* implicit */signed char) var_2);
                    var_17 += ((/* implicit */unsigned char) var_5);
                    var_18 -= ((/* implicit */unsigned int) arr_5 [i_3 + 1] [i_3]);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) << (((arr_6 [i_1]) - (6337783137905702042ULL)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3 - 2]))))) : (((unsigned int) arr_9 [15U] [(short)11] [i_3 + 3]))));
                }
            } 
        } 
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (arr_9 [i_1] [i_1] [i_1]) : (((/* implicit */int) var_0))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_4 = 4; i_4 < 12; i_4 += 3) 
    {
        var_21 &= ((/* implicit */short) var_4);
        var_22 = ((/* implicit */short) var_10);
        arr_14 [i_4] = ((/* implicit */short) var_6);
        var_23 = ((/* implicit */unsigned int) ((((unsigned int) ((unsigned int) arr_1 [i_4] [i_4]))) < (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_1)) ? (22LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32756)))))))));
    }
    var_24 = ((/* implicit */unsigned short) var_0);
}
