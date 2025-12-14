/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195304
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_0] &= min((max((((arr_6 [i_1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (var_8))), (((/* implicit */unsigned long long int) 344254493U)))), (((/* implicit */unsigned long long int) ((unsigned char) max((arr_1 [i_0] [i_1]), (((/* implicit */short) arr_4 [i_1] [i_2])))))));
                    var_17 *= ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) == (3950712802U))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    arr_20 [i_3] [i_4] [16LL] [i_5] = ((/* implicit */unsigned char) arr_17 [i_3] [i_4] [i_4]);
                    arr_21 [i_3] [(unsigned short)14] [i_5] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (var_3)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_6])), (arr_25 [i_8]))))))), ((((~(arr_27 [i_6]))) << ((((~(((/* implicit */int) arr_30 [i_7] [i_9] [i_8] [i_7])))) + (51)))))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((var_13) ^ (((/* implicit */long long int) var_0)))))))) << (((((/* implicit */int) ((unsigned short) arr_34 [i_8] [i_10 - 1] [i_10] [(unsigned short)3] [i_10 + 1]))) - (79))))))));
                                arr_37 [i_10] = (~(max((((/* implicit */unsigned long long int) arr_26 [i_6] [i_7] [i_10 + 1])), (var_8))));
                            }
                        } 
                    } 
                    arr_38 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_7] [i_8]))) / (arr_23 [i_6] [i_6])))) ? (max((max((arr_23 [i_6] [i_7]), (((/* implicit */long long int) arr_26 [7ULL] [i_7] [i_8])))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_26 [(_Bool)1] [i_7] [i_8])) - (24139)))))))) : (((/* implicit */long long int) (((_Bool)1) ? (4269937209U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4ULL)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((((unsigned long long int) (signed char)59)) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((_Bool) (unsigned char)63)))))));
}
