/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231713
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((long long int) min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1]))));
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) max((var_2), (((long long int) max((arr_1 [(unsigned short)18]), (((/* implicit */unsigned char) (signed char)-76))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_12 *= var_4;
        var_13 |= ((/* implicit */unsigned long long int) ((unsigned short) (signed char)90));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 12; i_6 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_6] [i_5] [(unsigned short)18])) << (((/* implicit */int) arr_17 [i_5])))) * (((/* implicit */int) (signed char)81)))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 3; i_7 < 10; i_7 += 4) 
                    {
                        arr_20 [i_7] [i_5] [i_5] [i_5] [i_4] |= ((/* implicit */signed char) ((unsigned long long int) var_2));
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-76))));
                    }
                }
            } 
        } 
        arr_21 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)99))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_4])))))));
    }
}
