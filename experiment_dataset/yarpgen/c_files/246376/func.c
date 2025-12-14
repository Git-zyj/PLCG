/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246376
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) max((3708928649U), (((/* implicit */unsigned int) (short)24791))))) ? ((~(8606126601703876541ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                    var_13 ^= ((/* implicit */_Bool) ((max((-1566112402), (-1))) % ((~(arr_3 [4LL])))));
                }
                for (int i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0 + 2] [i_1] [i_3 - 2] [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) (~(var_5)))), (max((586038647U), (((/* implicit */unsigned int) var_4))))))));
                                var_14 ^= ((/* implicit */short) min((9), (arr_11 [i_3] [i_3] [i_3] [i_0] [i_3] [i_0])));
                                arr_17 [(unsigned char)19] [i_0] [i_3] [i_0] [i_0] = (~(((((/* implicit */_Bool) -5)) ? (3431969477205187427ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11175))))));
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned short)22] [i_0] [i_0 + 1])) ^ (((((/* implicit */int) arr_14 [i_0 - 2] [i_1] [i_1] [i_3] [i_1] [i_3] [i_3])) ^ (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_3] [i_1] [i_0])))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_16 += ((/* implicit */unsigned char) (~((~(min((arr_7 [(unsigned char)4] [(unsigned char)4]), (((/* implicit */long long int) var_3))))))));
                    arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) (~(var_9)));
                    arr_22 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) 15014774596504364188ULL);
                }
                var_17 = ((short) max((((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_1 + 2] [i_1 + 1])), (((586038642U) & (((/* implicit */unsigned int) 1500891467))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((var_5) != (((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))), (((/* implicit */unsigned long long int) var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)64), (var_11))))) : (((3431969477205187427ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
}
