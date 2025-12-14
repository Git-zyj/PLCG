/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43539
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
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((((((/* implicit */int) arr_2 [i_0] [i_0])) + (2147483647))) << (((((var_4) + (3195324439065124025LL))) - (11LL))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned short) ((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) (_Bool)1))))));
                var_13 = ((/* implicit */long long int) (unsigned short)43221);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_8))) * (((((/* implicit */int) arr_9 [i_2] [i_5 + 1] [i_5])) - (((/* implicit */int) arr_9 [i_2] [i_5 - 2] [i_5]))))));
                        arr_17 [i_2] [i_3 - 3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) (unsigned short)12683)))) <= (((/* implicit */int) ((unsigned short) (signed char)124)))));
                    }
                    arr_18 [(unsigned short)16] [i_3] [i_4] &= ((/* implicit */_Bool) ((((arr_14 [(signed char)18] [i_3 - 1] [i_2 - 4]) <= (((/* implicit */long long int) ((/* implicit */int) arr_16 [(unsigned char)8]))))) ? (((((/* implicit */_Bool) arr_14 [6U] [i_3 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (6LL))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_14 [(unsigned short)20] [i_3 + 1] [i_2 - 2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    arr_28 [i_6] [11LL] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6])))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_21 [(short)10] [i_8]))))))) : (((unsigned int) arr_8 [i_6 - 1]))));
                    var_15 &= ((/* implicit */unsigned char) (((!(var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (max((arr_11 [i_6 - 1] [i_6 - 1] [i_8]), (((/* implicit */int) (unsigned char)25))))))) : (((unsigned long long int) (unsigned char)41))));
                    var_16 = ((/* implicit */unsigned long long int) (short)-32766);
                }
                var_17 ^= ((/* implicit */unsigned int) 15849575253368538090ULL);
                arr_29 [i_6] = ((/* implicit */unsigned short) min((((int) var_3)), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1951410196)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7] [i_6])))))))));
            }
        } 
    } 
}
