/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218553
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
    var_10 = ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (-1873592689))))) : (1319037967118241187LL));
    var_11 = ((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) (unsigned char)122))))))) <= (max((((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) var_6)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) != (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (7LL)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [(unsigned char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1]), (((/* implicit */signed char) arr_5 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1]))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1])))) : (((arr_5 [i_1 - 2] [i_1 - 2] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) (short)-26114)) : (((/* implicit */int) (short)-31904))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2]))));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) arr_2 [i_0])), ((~(((/* implicit */int) arr_2 [i_2]))))));
                }
            } 
        } 
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)57955)) : (((/* implicit */int) (unsigned short)18035))))) ? ((+(((long long int) var_3)))) : (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_7))))))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (min((max((arr_1 [(short)18] [i_0]), (arr_1 [(_Bool)0] [6]))), (max((arr_1 [12LL] [i_0]), (arr_1 [22ULL] [i_0])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) max((((((/* implicit */int) var_5)) < (((/* implicit */int) arr_2 [i_3])))), (max((arr_2 [i_3]), (arr_2 [(short)1])))));
        var_15 ^= ((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_3])), (max((-33385076), (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_16 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */unsigned int) arr_6 [i_4] [i_4])) : (1839611915U)))))), (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 1005438453)) : (min((((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [(signed char)13] [i_4] [i_4])), (var_0)))))));
        var_17 |= ((/* implicit */signed char) (~((-(arr_3 [i_4] [(signed char)12] [i_4])))));
    }
    for (short i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) (short)-8745)))) ? (1296403039U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5 - 1])))))) ? (((/* implicit */long long int) ((max((((/* implicit */int) (unsigned char)241)), (-882411289))) - (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_11 [i_5 - 2])) : (arr_6 [i_5 + 2] [(signed char)2])))))) : (((long long int) arr_14 [i_5 + 1] [i_5 - 1]))));
        var_19 = ((/* implicit */short) (+(min((min((2147483630), (((/* implicit */int) var_2)))), ((~(((/* implicit */int) (signed char)16))))))));
    }
}
