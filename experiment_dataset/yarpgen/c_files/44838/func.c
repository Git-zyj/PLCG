/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44838
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
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 += ((((/* implicit */_Bool) 17665317881353493696ULL)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (781426192356057902ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)35)) || (((/* implicit */_Bool) (signed char)-1)))))))) : (((((/* implicit */_Bool) ((7378472871096052409ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40187)))))) ? (min((((/* implicit */unsigned long long int) (short)-23915)), (17665317881353493714ULL))) : (max((781426192356057932ULL), (((/* implicit */unsigned long long int) 4102687131U)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_6 [i_1] [(unsigned char)2] [i_1] [(signed char)10] = ((/* implicit */unsigned short) var_5);
                    var_13 = ((/* implicit */unsigned char) ((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_2))))))));
                    var_14 = ((/* implicit */_Bool) ((unsigned char) (signed char)30));
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            }
        } 
    } 
    var_15 += ((/* implicit */int) var_1);
}
