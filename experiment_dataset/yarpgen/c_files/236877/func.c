/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236877
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned long long int) (+((-(7637889123171190186ULL)))))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) (short)28464)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-1)))))))))));
    var_16 = ((/* implicit */unsigned short) (unsigned char)126);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 3; i_2 < 8; i_2 += 3) 
                {
                    arr_8 [i_2 - 2] [i_1 + 2] [i_0] = ((/* implicit */int) (unsigned short)61340);
                    var_17 = ((/* implicit */long long int) var_2);
                    arr_9 [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_0] [7] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) : (10808854950538361430ULL)))));
                }
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_12 [i_1] [i_1] [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_3])), (((var_5) + (((/* implicit */unsigned long long int) 1896632614808639813LL))))))));
                    var_18 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) % (min((7186105348766994769ULL), (((/* implicit */unsigned long long int) var_2))))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((arr_11 [i_3] [i_1 - 1] [i_0]) % (arr_11 [i_3] [i_1] [i_0]))))))));
                }
                arr_13 [i_0] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)195)) ? (943568933450799221ULL) : (7637889123171190174ULL)));
            }
        } 
    } 
}
