/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42503
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [3U])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_1 [i_0]))) & ((~(var_9)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16368)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0] [i_3] [i_2] [i_0] [(signed char)7]))))) : (arr_6 [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3]))))) ? (((((/* implicit */int) (short)-16380)) - (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_4 [i_0] [i_2])))))));
                            arr_10 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)5])) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) arr_0 [i_0]))))) : (min((((/* implicit */long long int) var_3)), (arr_3 [i_1] [i_2])))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */short) var_2);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)10)))) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)33), ((unsigned char)28)))))))), ((+(var_2)))));
}
