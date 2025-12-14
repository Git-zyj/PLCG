/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22530
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
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((arr_3 [i_0] [i_0] [i_0 - 2]) > (((/* implicit */long long int) min((((((/* implicit */int) (short)20508)) ^ (((/* implicit */int) (short)-20509)))), (((/* implicit */int) (short)-20502))))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_9 [3] [i_1] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned char) (short)-2790))), (min((2285887431U), (((/* implicit */unsigned int) (short)9299))))));
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((10704716287873953747ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))))) == (var_7))))));
                }
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_11 [i_0 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_1]))))) ? (min((1492196430U), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4039808462238188499ULL))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (0U) : (var_6)))), (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-6606368977440104733LL)))))))));
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)2789))));
                    var_16 = ((/* implicit */unsigned long long int) (((~(arr_6 [i_0 + 1] [i_0]))) < (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0])) ? (arr_6 [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                }
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    arr_15 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)109))))) ? (((/* implicit */int) ((short) -7))) : (((/* implicit */int) (_Bool)1))));
                    var_17 *= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)26428)), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 34845880U)))) : (((((/* implicit */_Bool) 2857661616U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min((2186679980U), (2186679980U)))) || ((!(((/* implicit */_Bool) 9442442260239776075ULL))))))) * ((+((~(((/* implicit */int) (_Bool)1)))))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_1] [i_0 + 1] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_13 [i_0 - 2] [i_1] [i_0] [i_0 + 1])) : (((/* implicit */int) var_10)))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((min((9442442260239776075ULL), (((/* implicit */unsigned long long int) var_1)))) - (9442442260239776062ULL)))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_17 [i_0] [i_0 - 1]) ? (((/* implicit */unsigned long long int) arr_6 [i_0 - 2] [i_0 - 1])) : (min((10704716287873953747ULL), (((/* implicit */unsigned long long int) (short)4))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_5] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [8LL] [8LL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26245))))) : (max((4294967295U), (((/* implicit */unsigned int) (signed char)96))))));
                }
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned short) ((signed char) ((var_0) & (var_0))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) (unsigned char)58))))))));
}
