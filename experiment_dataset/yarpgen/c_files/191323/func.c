/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191323
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)183)) < (((/* implicit */int) (!(((/* implicit */_Bool) 473283852273728563ULL)))))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))) % (var_2)));
                        arr_9 [i_0 + 1] [i_1] [i_2] [i_2] [i_0 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) 0U)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */short) (signed char)77);
                                arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 2] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) (~(var_5)))), (max((((/* implicit */unsigned long long int) 235284223U)), (var_2)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            {
                                arr_22 [i_7] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */int) var_13);
                                var_21 = ((/* implicit */long long int) (+(((unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (long long int i_12 = 1; i_12 < 9; i_12 += 1) 
                        {
                            {
                                arr_37 [i_10] [i_11] [i_10] [i_9 - 1] [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)68)) ? (2626480323U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2626480323U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32766)))))));
                            }
                        } 
                    } 
                    arr_38 [(unsigned short)7] [i_10] [i_10] [i_8] = ((/* implicit */short) min((17973460221435823058ULL), (((/* implicit */unsigned long long int) 485486639226752026LL))));
                    var_24 &= ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)57300)))), ((+(((/* implicit */int) (signed char)-90))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_13 = 4; i_13 < 11; i_13 += 1) 
    {
        for (short i_14 = 4; i_14 < 10; i_14 += 3) 
        {
            {
                var_25 = ((/* implicit */short) 473283852273728563ULL);
                var_26 -= ((/* implicit */short) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (1668486980U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))))))), (((((/* implicit */int) max((((/* implicit */signed char) var_4)), ((signed char)11)))) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)21603))))))));
                var_27 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_16))))) : (var_8));
            }
        } 
    } 
}
