/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225977
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
    var_11 ^= ((unsigned char) ((((/* implicit */_Bool) var_5)) ? ((~(4194303ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_5))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), ((~(((long long int) ((unsigned short) (unsigned short)50753)))))));
                            var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) arr_10 [i_0 - 4] [i_1 - 2] [i_2 - 1])) : ((~(((/* implicit */int) arr_9 [i_3] [i_3] [i_3]))))))) ? (((/* implicit */int) arr_4 [i_2])) : (((((/* implicit */_Bool) max((-5748034236285497987LL), (((/* implicit */long long int) arr_2 [i_1 + 1] [i_3]))))) ? (((((/* implicit */int) (unsigned char)128)) / (((/* implicit */int) (unsigned char)106)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_3])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) var_3);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (unsigned char)144)))))) ? (((/* implicit */unsigned long long int) (-(arr_0 [i_0] [i_0 - 3])))) : (((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4] [i_0])) ? (arr_2 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
