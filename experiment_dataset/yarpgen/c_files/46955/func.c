/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46955
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
    var_15 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned short)15820)))));
        var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0]))))));
        var_18 = ((/* implicit */signed char) var_5);
    }
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((max((361884903U), (67108863U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29687))))))));
        var_20 = ((unsigned int) (+(((/* implicit */int) arr_4 [i_1]))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_6 [i_2]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned char) var_2)))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((((/* implicit */_Bool) (unsigned short)49707)) ? (((/* implicit */int) (unsigned short)15840)) : (((/* implicit */int) arr_8 [i_4] [i_4])))) : ((~(((/* implicit */int) arr_14 [i_2] [i_2] [i_3] [i_2] [i_2] [i_6 + 2]))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_15 [i_3] [i_3] [i_4] [i_5])))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((unsigned char) arr_5 [i_4 + 1] [i_4 + 1])))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2])) / ((~(((/* implicit */int) (signed char)0))))));
        var_26 = ((/* implicit */int) ((((/* implicit */long long int) 8191U)) == (-4757001975579047716LL)));
    }
    var_27 ^= ((/* implicit */int) var_14);
    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_12))))) : (max((1168580188U), (((/* implicit */unsigned int) var_0))))))));
    var_29 = ((/* implicit */long long int) (unsigned short)47110);
}
