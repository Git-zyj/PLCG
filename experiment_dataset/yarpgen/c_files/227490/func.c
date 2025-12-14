/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227490
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
    var_15 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((466832922U) * (((/* implicit */unsigned int) -851735044)))))));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((long long int) (short)10684));
        arr_8 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)7573)), (26326862U)));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) == (var_2)));
                        arr_21 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (1920983265U) : (607603949U)));
                        arr_22 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) 6176664);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_6 = 3; i_6 < 13; i_6 += 2) 
        {
            arr_25 [i_2] = ((/* implicit */int) (~(arr_15 [i_2] [i_6] [i_6] [i_6 + 1])));
            arr_26 [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_6 + 1] [i_2] [i_2] [i_2] [i_6 - 3]))) == (arr_19 [i_2] [i_6] [i_2] [i_6 - 3])));
            arr_27 [i_2] [i_6] = ((/* implicit */int) arr_6 [i_2] [i_6]);
        }
        arr_28 [i_2] = ((((/* implicit */_Bool) var_9)) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52108)))))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) <= (((/* implicit */int) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (var_0)))) ? (((int) max((4294967295U), (((/* implicit */unsigned int) (unsigned short)3))))) : (((/* implicit */int) (unsigned char)255))));
}
