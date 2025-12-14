/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245742
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 += ((/* implicit */short) (~(min(((+(arr_2 [(unsigned char)13] [i_1]))), ((-(((/* implicit */int) var_8))))))));
                var_12 = ((/* implicit */signed char) 12511747621357159248ULL);
                var_13 = ((/* implicit */unsigned char) (~(((int) arr_3 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (-(var_4))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) - (122852703350842687ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                arr_15 [i_2] [13] [i_4] [i_5] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) var_7);
                                arr_16 [6LL] [i_3] [23ULL] [i_5] [i_3] [7ULL] [(signed char)15] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)84))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_3] = ((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) var_4)))) >= (((min((((/* implicit */unsigned long long int) arr_6 [i_2] [12])), (arr_12 [i_2] [i_3] [i_2] [6]))) + ((-(18446744073709551615ULL))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((((/* implicit */_Bool) -2147483623)) || (((/* implicit */_Bool) (short)7939)))))));
                var_16 += ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_5 [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)7951)) - (((/* implicit */int) (unsigned char)188))))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (var_4)))) ? ((-(arr_13 [i_3] [i_2] [i_2] [i_2] [i_2]))) : ((+(69818988363776ULL))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_0);
}
