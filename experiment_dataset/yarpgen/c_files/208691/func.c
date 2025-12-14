/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208691
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
    var_11 |= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) 18446744073709551615ULL);
                        arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2 + 3] [i_0] = ((/* implicit */int) (short)-32766);
                    }
                    var_12 = ((/* implicit */unsigned char) (~((~(0ULL)))));
                    var_13 = ((/* implicit */unsigned short) (~(0ULL)));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-((-(18446744073709551615ULL))))))));
                    arr_13 [i_0] [i_0] [8ULL] = ((/* implicit */_Bool) (signed char)105);
                }
                for (short i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    arr_17 [i_0] [(unsigned short)5] [i_4] = (unsigned short)62117;
                    arr_18 [i_0] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)5))));
                }
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_21 [i_5] [i_0] [i_0] [i_0 - 3] = ((/* implicit */signed char) -1298440012);
                    var_15 = ((/* implicit */signed char) (_Bool)1);
                    arr_22 [i_0] [i_0] [i_0] = 5105572560428118082LL;
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 1) 
                    {
                        var_16 |= ((/* implicit */signed char) (_Bool)1);
                        arr_28 [i_0] [i_0] [i_6] [i_7] = (_Bool)1;
                    }
                    arr_29 [i_0] [i_1] [i_0] = ((/* implicit */int) 18446744073709551593ULL);
                    arr_30 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-127)))))));
                }
            }
        } 
    } 
}
