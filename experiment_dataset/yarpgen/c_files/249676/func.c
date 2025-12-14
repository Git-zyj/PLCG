/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249676
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
    var_12 = max((((signed char) (+(6765828643078889941LL)))), (((/* implicit */signed char) var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 &= ((/* implicit */_Bool) ((14600544075322607665ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                var_14 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6765828643078889929LL)) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)49152)))))) : (var_3)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0] [(unsigned char)7] [(unsigned char)7] [i_4] = ((/* implicit */long long int) ((unsigned char) arr_4 [i_0]));
                                var_15 -= ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (arr_10 [i_0] [i_0] [i_0]))))) / (((-6765828643078889942LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)113))))))), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
                                arr_19 [i_0] [i_1] [i_2 + 2] [i_0] [i_4] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((int) var_9)) > ((-(arr_3 [i_2 - 1])))))) % (max((((((/* implicit */_Bool) 14600544075322607652ULL)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0])) : (((/* implicit */int) var_7)))), (((/* implicit */int) min((arr_9 [i_3]), (((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2 - 1])))))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) | (max(((-(((/* implicit */int) (unsigned short)65533)))), (((/* implicit */int) ((_Bool) arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 ^= ((/* implicit */signed char) 14600544075322607660ULL);
}
