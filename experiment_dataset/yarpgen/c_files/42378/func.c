/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42378
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
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_0 + 1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) (+(14094379603506054690ULL)))))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned short) (unsigned char)6)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        for (int i_3 = 4; i_3 < 17; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) var_0))), (14628839644119646917ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_16)))))) : (4095ULL))))));
                    arr_13 [10ULL] [10ULL] = ((/* implicit */int) (~(min((1828564130459245417ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 3] [i_3] [i_4])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (short)9938))))))))));
                    arr_14 [i_3] &= ((/* implicit */short) (~(min((var_14), (((/* implicit */long long int) arr_6 [i_2 + 2] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_9))))))) ? ((+(((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_2 - 3] [i_2 - 3])) ? (1828564130459245400ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_3] [i_2]))))))));
                                arr_21 [i_2 - 3] [i_6] [i_4] [(unsigned short)12] = ((/* implicit */signed char) max((((unsigned long long int) 1828564130459245422ULL)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (16618179943250306198ULL)))))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned long long int) arr_6 [i_2] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_7 = 2; i_7 < 21; i_7 += 4) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned short) (+(max((16618179943250306199ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_23 [i_7 + 1] [i_7])) < (arr_22 [i_7] [i_7]))))))));
        arr_25 [i_7 - 1] = (~(((((/* implicit */int) var_3)) * (((/* implicit */int) var_13)))));
    }
}
