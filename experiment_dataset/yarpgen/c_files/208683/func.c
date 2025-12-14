/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208683
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [8LL] |= min((min((min((var_3), (var_5))), (((((/* implicit */_Bool) 7412701018917707609LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3]))) : (-7412701018917707610LL))))), (((/* implicit */long long int) (~((+(((/* implicit */int) var_1))))))));
                            var_15 += ((/* implicit */unsigned int) -7412701018917707590LL);
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_1 + 1] = max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (((long long int) arr_2 [i_1] [i_1 + 2])));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            arr_21 [i_0] [i_1 + 3] [i_0] [i_0] [i_7] |= ((/* implicit */unsigned short) (unsigned char)255);
                            var_16 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 0)) < (2626780276U)));
                        }
                    } 
                } 
            } 
        }
        arr_22 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [2] [i_0] [i_0]))))) % (((/* implicit */int) arr_10 [i_0] [12U] [i_0] [i_0])))) == (((/* implicit */int) arr_7 [(unsigned short)6] [(unsigned short)6] [i_0] [i_0] [i_0] [i_0]))));
        arr_23 [(unsigned short)13] = ((/* implicit */int) arr_3 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) / (5016323964184909145LL))) * (((var_8) / (var_0)))))) ? (((long long int) min((2626780276U), (134217728U)))) : ((+(max((((/* implicit */long long int) var_13)), (-1LL))))))))));
        arr_24 [i_0] = ((/* implicit */int) var_3);
    }
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (long long int i_8 = 1; i_8 < 13; i_8 += 4) 
    {
        for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            for (long long int i_10 = 2; i_10 < 13; i_10 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (4294967279U)))), (arr_2 [i_8 + 1] [i_8 - 1])))) ? (arr_20 [i_8 + 1] [i_10] [i_9] [(signed char)4] [i_9] [(signed char)12] [i_10]) : (var_2))))));
                    arr_33 [0LL] [i_9] [i_9] [0LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_8 - 1] [i_8 + 1] [(short)10] [i_9] [i_10]))));
                }
            } 
        } 
    } 
}
