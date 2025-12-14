/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244100
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
    var_10 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)96)), (var_7)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)32505)) || (((/* implicit */_Bool) (unsigned short)2047)))))))), (max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) var_9)) : (var_5)))))));
    var_11 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((17280136189518248362ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))))))) >= (((var_8) ? (-739795316475256910LL) : (739795316475256927LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_11 [i_2] [i_2] [i_2] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) var_1);
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1]))) >= (arr_8 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_3] [i_3])))) >= (((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 + 1]))))));
                                var_12 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_1] [i_2] [8ULL] [(unsigned char)22])) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])))), (((((/* implicit */int) arr_6 [i_3] [i_1] [i_2] [i_1])) * (((/* implicit */int) (short)-27848))))))) ? (((/* implicit */unsigned int) var_2)) : (((unsigned int) ((unsigned short) arr_9 [i_4] [i_3] [i_2 - 1] [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [19LL] [i_0] = ((/* implicit */int) arr_0 [i_0]);
            }
        } 
    } 
}
