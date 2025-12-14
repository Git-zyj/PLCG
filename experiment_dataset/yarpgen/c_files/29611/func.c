/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29611
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((4U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [8]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [(short)3])) : (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((arr_0 [i_0]) * (arr_0 [i_0]))) <= (arr_0 [i_0])));
        var_18 ^= var_15;
    }
    var_19 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])), (15687064690141089133ULL)))));
                var_20 ^= ((/* implicit */long long int) arr_7 [i_1] [(short)2]);
                arr_9 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */signed char) var_13)), (var_16)))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-101)) : (var_14)))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            arr_17 [i_1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (var_14)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_4] [i_1]))))) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) ((-4990942941517218883LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53326)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)53323))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2] [i_3])) & (((/* implicit */int) (signed char)-17))))))))));
                            arr_18 [(_Bool)1] [i_1] [(unsigned short)6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (arr_3 [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    arr_28 [i_5] [(short)4] [i_7] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) : (24LL)))), (7781457098163971552ULL))), (((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53327))) & (arr_0 [i_5])))) : (max((((/* implicit */unsigned long long int) arr_22 [2ULL])), (var_15)))))));
                    var_21 = ((/* implicit */long long int) (-(max((var_2), (((/* implicit */unsigned long long int) var_9))))));
                }
            } 
        } 
    } 
}
