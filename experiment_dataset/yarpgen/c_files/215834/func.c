/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215834
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [(signed char)12] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1259340822)) && (((/* implicit */_Bool) (unsigned short)8191))))) > ((~(2147483647))))))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) 2147483620);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        var_12 = ((/* implicit */signed char) var_5);
                        arr_19 [i_5] [i_4] [i_3 - 1] [i_3 - 1] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (-2147483620) : (((((/* implicit */int) (short)12991)) >> (((((/* implicit */int) (signed char)-8)) + (33))))))), (((/* implicit */int) max((arr_16 [i_3 + 1] [i_3 + 1]), (arr_16 [i_3 - 1] [i_3 - 1]))))));
                    }
                    for (int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        var_13 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 2147483619)) ? (min(((-2147483647 - 1)), (2147483620))) : (((/* implicit */int) (signed char)3))))));
                        var_14 = ((/* implicit */signed char) max((-2020933801), (1032326343)));
                        arr_22 [i_2] [i_2] = ((/* implicit */short) ((signed char) max((var_9), (max((((/* implicit */unsigned short) (short)-24711)), (var_9))))));
                    }
                    arr_23 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((min((210270264), (arr_14 [i_2] [i_3 + 1] [i_3 - 1]))) > (((/* implicit */int) ((signed char) arr_2 [i_2] [i_3 - 1])))));
                    arr_24 [i_2] [(signed char)4] [i_4] = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-29))))) ? (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) arr_9 [(short)14] [i_3 - 1]))))) : (((/* implicit */int) ((signed char) (signed char)-109))));
                }
            } 
        } 
        arr_25 [(signed char)14] [i_2] = ((/* implicit */short) var_7);
    }
}
