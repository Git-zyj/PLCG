/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22653
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
    var_17 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) > (4257245398U)))))))));
            arr_6 [3] [17U] = ((/* implicit */_Bool) (unsigned char)245);
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_11 [i_2] [i_0] = ((/* implicit */signed char) var_7);
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((4257245416U) + (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_2] [i_3]))))))))));
                arr_15 [i_0] [i_0] |= ((/* implicit */unsigned short) (~(arr_1 [i_2])));
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_20 ^= ((/* implicit */short) (~(var_1)));
                arr_18 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */signed char) var_7);
            }
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_21 ^= ((/* implicit */short) (!(var_11)));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (4257245393U) : (var_10)));
            }
        }
        arr_22 [i_0] = ((/* implicit */unsigned long long int) arr_16 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] [(unsigned char)18]);
    }
    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) var_11);
        /* LoopNest 3 */
        for (signed char i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            for (unsigned short i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                for (long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    {
                        arr_35 [i_6] [i_6] [i_8 - 1] [i_7] = ((/* implicit */unsigned char) var_6);
                        var_25 = ((/* implicit */short) ((arr_30 [i_7] [i_6]) / (arr_30 [i_6] [i_7 - 1])));
                        var_26 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_9 + 1] [i_7] [i_7 + 2]))));
                    }
                } 
            } 
        } 
        arr_36 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) 920409050U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6]))) : (arr_21 [i_6] [i_6] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    }
}
