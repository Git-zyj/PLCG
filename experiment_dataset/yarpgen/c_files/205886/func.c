/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205886
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)38520))))))) < (((((/* implicit */_Bool) ((long long int) var_5))) ? ((((_Bool)1) ? (var_4) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62786)) * (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [(unsigned char)3] = ((/* implicit */int) ((long long int) min((var_4), (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))));
                    arr_9 [i_0] [7] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (((/* implicit */int) ((((/* implicit */int) (signed char)79)) <= (((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) : (((((/* implicit */_Bool) ((unsigned short) (signed char)34))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) (_Bool)1))))) : (min((var_14), (var_14)))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (~(var_2))))) << (((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) - (204)))));
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) (-((-(((long long int) arr_11 [i_3] [i_3]))))));
        arr_14 [i_3] = ((/* implicit */unsigned int) (-(((unsigned long long int) (unsigned short)4))));
        arr_15 [i_3] &= max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_1 [10U])))) + (((long long int) arr_6 [i_3] [i_3] [i_3] [i_3]))))), (((unsigned long long int) ((unsigned short) (unsigned short)4579))));
    }
}
