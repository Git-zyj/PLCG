/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246854
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_4)))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_0 [i_0 + 2])))));
                arr_6 [i_0] [i_0] = ((unsigned long long int) ((unsigned long long int) arr_0 [i_0]));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) (unsigned short)2723)))))));
    /* LoopSeq 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_0 [i_2 - 1]))) ^ (((/* implicit */int) ((_Bool) var_6)))));
        var_17 = ((/* implicit */signed char) ((unsigned int) ((_Bool) arr_8 [i_2])));
        arr_10 [i_2] = ((/* implicit */signed char) (~(3143652545U)));
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        arr_14 [i_3] |= ((/* implicit */long long int) arr_13 [i_3]);
        arr_15 [i_3] [i_3 - 1] = ((/* implicit */unsigned int) arr_12 [i_3 + 1]);
        var_18 = ((/* implicit */signed char) ((int) 268435456));
        var_19 = ((/* implicit */unsigned char) ((arr_4 [i_3 - 1] [i_3 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_11)))));
    }
    for (signed char i_4 = 2; i_4 < 12; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_20 = ((/* implicit */signed char) max((((long long int) -1484657163)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((1151314745U) ^ (((/* implicit */unsigned int) arr_16 [i_6])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))))))));
                var_21 = ((/* implicit */unsigned int) ((unsigned long long int) (short)20497));
                arr_23 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) var_8);
            }
            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) (short)31))) - (((unsigned long long int) arr_1 [i_4 - 1]))));
        }
        for (long long int i_7 = 2; i_7 < 14; i_7 += 4) /* same iter space */
        {
            arr_28 [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-2))));
            arr_29 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)115)), ((unsigned short)38183)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7 - 1] [i_4]))) : (var_12)));
            arr_30 [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 1151314745U)) ? (((/* implicit */unsigned int) 1720443448)) : (arr_22 [i_4] [i_7 - 2] [i_4 - 2]))));
        }
        arr_31 [i_4] = ((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)58)))))));
        var_23 &= ((/* implicit */signed char) (_Bool)0);
    }
    var_24 = ((/* implicit */unsigned char) ((unsigned long long int) max((var_4), (((/* implicit */int) ((signed char) 7409843248354487669LL))))));
    var_25 = (signed char)24;
}
