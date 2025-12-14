/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234942
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
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)2564)) : (((/* implicit */int) arr_0 [(_Bool)1] [i_0])))))), (max((((/* implicit */int) arr_1 [i_0 + 3])), (var_2)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((unsigned long long int) max(((~(3905717274U))), (((/* implicit */unsigned int) ((_Bool) 3905717274U))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_3] = ((/* implicit */unsigned int) arr_3 [(signed char)3] [i_1]);
                        arr_12 [(unsigned short)10] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                    }
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 3; i_5 < 14; i_5 += 2) 
        {
            for (short i_6 = 3; i_6 < 13; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    {
                        arr_22 [(unsigned short)6] [(unsigned char)12] [1U] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 389250021U)) ? (((/* implicit */int) arr_16 [i_6] [i_5])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_21 [16LL] [i_5] [13U] [(unsigned char)1] [i_6] [i_5])) : (((((/* implicit */_Bool) arr_4 [i_5] [i_6] [i_7])) ? (1610612736) : (((/* implicit */int) var_6))))))));
                        arr_23 [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
        } 
        arr_24 [i_4] [i_4] &= ((/* implicit */unsigned short) max((((arr_6 [i_4]) * (((/* implicit */int) arr_21 [i_4] [1] [i_4] [(_Bool)1] [(unsigned short)16] [i_4])))), (((/* implicit */int) ((_Bool) arr_21 [(signed char)12] [(_Bool)1] [i_4] [i_4] [(short)7] [i_4])))));
    }
    for (unsigned int i_8 = 3; i_8 < 19; i_8 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((_Bool) arr_28 [i_8 - 2])))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62969)) < (((/* implicit */int) var_0))));
    }
    var_19 |= ((/* implicit */_Bool) ((unsigned short) (unsigned short)38381));
}
