/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240144
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(2147483646))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) var_8)))))))), (max((((((/* implicit */long long int) 430558718U)) ^ (var_6))), (7846528409336632885LL))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */signed char) min((((min((((/* implicit */long long int) (unsigned char)76)), (7846528409336632880LL))) / (((/* implicit */long long int) min((arr_1 [0LL]), (((/* implicit */unsigned int) var_3))))))), (((/* implicit */long long int) min((((((/* implicit */unsigned int) arr_5 [i_0])) * (arr_1 [(signed char)4]))), (((arr_4 [i_0] [i_0] [i_1]) / (((/* implicit */unsigned int) arr_5 [i_0])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_8 [i_1] [(unsigned char)7] |= ((/* implicit */unsigned int) (((+(var_9))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38587)))));
                    var_16 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)208))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */_Bool) (~(arr_4 [i_0] [i_1] [i_2])))) && (((/* implicit */_Bool) ((signed char) (short)32759)))))));
                    var_18 += ((/* implicit */unsigned long long int) var_7);
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-29971))));
                    var_19 = ((/* implicit */unsigned long long int) ((signed char) (-(arr_9 [i_0] [i_0] [(short)6]))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min(((+(5389690274991031263ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned short)26945))))))))));
    var_21 &= ((/* implicit */long long int) (unsigned short)38556);
}
