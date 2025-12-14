/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37189
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
    var_14 = ((/* implicit */unsigned short) var_11);
    var_15 = ((/* implicit */long long int) ((unsigned short) var_8));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 = arr_0 [i_1] [i_2];
                    arr_9 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2142))) + (arr_3 [i_0])));
                    var_17 |= ((/* implicit */short) max((((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) arr_1 [8]))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_5 [6U] [i_0]) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)24576)), (var_6))))))), (((((var_2) | (arr_3 [i_0 + 1]))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)25569)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) var_7);
                    arr_18 [i_5] [i_4] [i_5] = ((((((/* implicit */int) max((((/* implicit */unsigned short) (short)127)), (arr_16 [i_4] [i_5])))) / (((/* implicit */int) ((unsigned short) arr_6 [i_3] [i_4] [i_4]))))) & ((~((~(var_7))))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */signed char) arr_10 [i_3]);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned short) arr_0 [i_6] [i_6])), ((unsigned short)63394))));
        arr_23 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 1939834511)) ? (4289207978U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218)))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((min((var_13), ((-(((/* implicit */int) (unsigned short)56517)))))), ((((~(((/* implicit */int) (unsigned char)255)))) ^ ((~(((/* implicit */int) (short)24576))))))));
}
