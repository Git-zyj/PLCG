/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25456
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
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)28679))))) & (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0 + 3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)28622)))) : ((+(((unsigned long long int) (unsigned short)7382))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) (((((((-(((/* implicit */int) (unsigned char)120)))) + (2147483647))) >> (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_2)))))) ^ (((/* implicit */int) arr_3 [i_0 + 3]))));
                    var_13 = ((/* implicit */long long int) max(((+(max((((/* implicit */unsigned long long int) (unsigned short)7945)), (17835802141108168282ULL))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
                for (short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) (short)(-32767 - 1))), (arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 3]))), (min((((/* implicit */unsigned short) arr_4 [i_0 + 3] [i_0 - 1])), (arr_10 [i_0 + 1] [i_0 - 1] [i_0 + 2])))));
                    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_3] [i_0 - 1]))))), ((-(((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_1]))) : (arr_11 [i_3] [i_3])))))));
                }
                arr_13 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [(_Bool)0] [(_Bool)0] [i_1]) / (((/* implicit */long long int) var_8))))) ? (((long long int) (short)-8410)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_1]))) != (0LL)))))))) ? (min((((/* implicit */unsigned int) min((((/* implicit */short) var_2)), (var_7)))), ((-(var_3))))) : (((arr_11 [(unsigned short)4] [i_0 - 1]) - (arr_11 [i_0] [i_0 - 1])))));
                arr_14 [i_0 + 3] [i_0 + 3] = ((/* implicit */short) (-(((arr_11 [i_0 - 1] [3LL]) % (arr_11 [i_0 + 2] [(unsigned char)2])))));
                var_16 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)137))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(var_3)))))));
            }
        } 
    } 
}
