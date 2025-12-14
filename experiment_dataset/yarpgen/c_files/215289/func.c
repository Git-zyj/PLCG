/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215289
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = (~(((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned char)64)))));
                arr_5 [i_0] [i_0] &= ((/* implicit */long long int) var_10);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 4; i_4 < 21; i_4 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned short) (+(((((/* implicit */int) ((unsigned char) var_3))) >> ((((~(((/* implicit */int) (signed char)-125)))) - (118)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        arr_17 [15LL] [(unsigned char)17] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || ((!(((/* implicit */_Bool) arr_15 [6LL] [i_3] [i_2]))))));
                        arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (arr_13 [i_4 - 4] [i_4 - 4] [13U])))) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_4])) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) var_11))))));
                    }
                    arr_19 [i_2] [i_3] [i_4 - 3] = ((/* implicit */unsigned char) arr_7 [i_2]);
                }
            } 
        } 
        var_17 += ((/* implicit */unsigned short) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) 1512879768))))), ((~(((/* implicit */int) (unsigned char)246))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_18 = ((/* implicit */long long int) arr_15 [(signed char)19] [(signed char)19] [(signed char)19]);
        arr_23 [i_6] [i_6] = ((/* implicit */short) (~((~(((/* implicit */int) arr_12 [i_6] [i_6] [i_6]))))));
    }
}
