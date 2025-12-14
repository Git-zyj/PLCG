/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236348
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */unsigned long long int) ((var_9) ? (max((((((/* implicit */_Bool) 8691202370844511436ULL)) ? (((/* implicit */int) var_2)) : (var_7))), (((((/* implicit */_Bool) var_11)) ? (var_7) : (var_7))))) : (max(((-(((/* implicit */int) var_4)))), (((var_3) ? (((/* implicit */int) var_11)) : (var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_3 [i_0] [i_0 + 2] [i_0 + 1]), (((/* implicit */short) arr_1 [i_0] [i_0 + 2]))))) % (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-9673)) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0 + 3] [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0 + 2])) : (0ULL))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_13 [(unsigned short)5] = ((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (_Bool)1))));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */int) var_5)) != (arr_12 [i_0 + 3]))) ? (min((((/* implicit */unsigned long long int) 17LL)), (7293523188061304532ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                arr_15 [i_0] [(short)12] [i_4] = ((/* implicit */short) ((17LL) ^ (((((/* implicit */_Bool) -17LL)) ? (-17LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_20 [8] [8] [i_5] [i_5] [i_5] = ((/* implicit */short) min((((max((17508294727151644112ULL), (((/* implicit */unsigned long long int) (short)7)))) * (((/* implicit */unsigned long long int) 1558613565)))), (((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */int) ((unsigned short) arr_17 [i_0 + 1] [i_1] [i_5] [i_5]))))))));
                            arr_21 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -17LL)) ? (((/* implicit */int) (short)-16905)) : (-11)));
                            arr_22 [i_0] [i_1] [i_0] [i_6] = ((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) != (16LL));
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_0]))) ? ((-(arr_9 [i_0 + 2] [i_0 + 1]))) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [12] [i_1]))));
            }
        } 
    } 
    var_18 |= ((/* implicit */_Bool) var_1);
}
