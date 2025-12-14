/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234190
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [13LL] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))) : ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3] [i_4]))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */short) arr_6 [9] [9] [i_2] [i_2]);
                                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [15ULL] [i_4] [i_4 - 2] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_11 [i_4] [i_4] [i_4 - 2] [i_4] [i_4 - 2]))) > (((unsigned long long int) arr_11 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4]))));
                                arr_15 [i_0] [i_1] [16LL] [(signed char)13] [8] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (short)12115))))) ? (((((/* implicit */int) (short)-12116)) ^ (((/* implicit */int) (unsigned short)64696)))) : (((/* implicit */int) arr_5 [i_1] [i_1] [15LL]))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (short i_7 = 3; i_7 < 22; i_7 += 3) 
            {
                {
                    arr_22 [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)3)) <= (((/* implicit */int) (unsigned short)65535))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_6])) ? (arr_17 [i_5 - 1] [i_6]) : (((/* implicit */long long int) 58720256)))))));
                    var_20 *= ((/* implicit */unsigned char) arr_20 [i_6]);
                }
            } 
        } 
        var_21 = ((/* implicit */int) ((6377432404511586330LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
    }
}
