/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202890
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_19 = var_3;
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) != (4294967295U)));
        var_20 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_0 [18ULL]), (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */_Bool) (short)22838)) ? (((/* implicit */int) (signed char)-1)) : (53010931))) : ((~(((/* implicit */int) (signed char)0)))))), ((~(((/* implicit */int) min((var_13), ((signed char)1))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            {
                var_21 = ((/* implicit */int) (signed char)(-127 - 1));
                var_22 = ((/* implicit */signed char) ((unsigned int) (short)-6368));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_5 [(unsigned char)12]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned int) arr_7 [i_3] [i_4 - 1] [i_5]))) ? (((/* implicit */int) arr_10 [i_3] [i_4 + 1] [i_5 + 1])) : (((/* implicit */int) max(((signed char)-126), ((signed char)-2))))))));
                    arr_15 [i_5] [i_4 + 2] [i_4 + 2] [i_3] |= ((/* implicit */unsigned int) (-2147483647 - 1));
                    arr_16 [i_3] [i_4 + 3] [i_5] [i_3] = ((/* implicit */unsigned int) 53010931);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        for (int i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            {
                arr_24 [(signed char)0] [i_7] = ((/* implicit */long long int) var_8);
                var_25 = ((/* implicit */long long int) arr_4 [i_7] [i_7]);
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) arr_32 [i_10] [11] [i_9] [i_8] [i_8] [i_7] [19U]);
                                var_27 ^= ((/* implicit */unsigned char) arr_29 [i_6] [7] [i_6] [i_6]);
                                var_28 = ((/* implicit */unsigned char) 1350300360);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
