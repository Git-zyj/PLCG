/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26388
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
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_0) - (((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_8)) << (((((/* implicit */int) var_13)) + (10051))))) : (((((/* implicit */int) (short)25)) ^ (((/* implicit */int) (short)40)))))) + ((+(((/* implicit */int) ((short) var_15)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-20)) ^ (((/* implicit */int) (unsigned short)12001))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_3 [i_0] [i_1]), (arr_4 [i_0] [1U] [1U]))))))) : (max((((/* implicit */unsigned int) max(((short)-15807), ((short)24)))), (min((var_4), (((/* implicit */unsigned int) arr_2 [i_1]))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_18 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_2 [(unsigned char)3])) - (9089)))))), (max((((/* implicit */long long int) ((arr_6 [7LL] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [0ULL] [0ULL])))))), (((((/* implicit */long long int) ((/* implicit */int) (short)-37))) ^ (7492337296698846927LL)))))));
                    var_19 = ((/* implicit */int) arr_1 [i_2]);
                }
                var_20 = ((/* implicit */unsigned int) var_15);
                arr_10 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_1])) << (((((var_0) + (1006820318))) - (16)))));
                var_21 = arr_0 [i_1] [i_0];
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((((-6273335187305324396LL) % (((/* implicit */long long int) -1361679028)))), (((/* implicit */long long int) var_14))))) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (((((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) | (((((/* implicit */_Bool) var_2)) ? (-1361679049) : (((/* implicit */int) arr_11 [i_3] [i_3])))))))))));
        arr_13 [i_3] = ((/* implicit */long long int) arr_12 [i_3] [i_3]);
    }
    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
    {
        arr_16 [i_4] = ((/* implicit */short) ((int) arr_14 [i_4]));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_15 [i_4] [i_4])) - (((/* implicit */int) var_6)))))) : (((/* implicit */int) arr_14 [i_4]))));
        arr_18 [i_4 - 2] [i_4] |= ((/* implicit */_Bool) (+(((var_12) << (((((/* implicit */int) arr_14 [i_4 - 2])) - (237)))))));
        var_23 ^= ((/* implicit */short) var_10);
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_24 ^= ((/* implicit */unsigned short) arr_14 [i_5]);
            arr_21 [i_4 - 1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) arr_14 [i_4])), (((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_5])) : (((/* implicit */int) var_11)))))), (((/* implicit */int) arr_20 [i_4 + 1]))));
        }
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)33)) : (((/* implicit */int) (unsigned char)98))));
}
