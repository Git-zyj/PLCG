/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193768
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
    var_17 = ((/* implicit */_Bool) max(((((-(((/* implicit */int) var_15)))) - (((((/* implicit */int) (short)32752)) + (((/* implicit */int) var_13)))))), (((/* implicit */int) (short)3769))));
    var_18 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) var_5)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_0])) ? (((/* implicit */int) arr_11 [i_4] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_4 - 1] [i_4 - 3] [i_4]))))) ? (((((/* implicit */int) arr_12 [i_0] [(unsigned short)17] [i_4 + 1] [i_4 + 2] [i_0])) - (((/* implicit */int) arr_11 [(unsigned char)7] [(unsigned char)10] [i_4 + 3] [i_4 - 2] [(unsigned char)14])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_4 - 3] [i_4 + 2] [i_0])))))));
                                arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max(((unsigned short)0), (max((((/* implicit */unsigned short) max(((short)-3001), (arr_9 [i_0])))), (max((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), ((unsigned short)9627)))))));
                            }
                        } 
                    } 
                    arr_16 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (short)-20072);
                    arr_17 [i_0] [(unsigned short)12] &= (-(((((/* implicit */unsigned long long int) var_5)) * (arr_4 [(_Bool)1] [i_0]))));
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((arr_4 [i_0] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_0] [(_Bool)0] [(short)10] [i_0] [i_0])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-12414)) : (((/* implicit */int) (_Bool)0))))))));
                    arr_19 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
}
