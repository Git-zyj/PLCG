/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29869
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
    var_11 = (!(((/* implicit */_Bool) (~(var_9)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1937608033)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)(-32767 - 1)))))), (max((((/* implicit */unsigned int) var_0)), (var_9)))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32751))) != (arr_0 [i_0] [i_1]))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((short)32767), ((short)32762)))))) : (min((((/* implicit */int) (!(arr_1 [i_0])))), (((arr_4 [4] [5ULL]) | (((/* implicit */int) (short)(-32767 - 1)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) ((int) ((((((/* implicit */_Bool) 16U)) ? (4294967295U) : (((/* implicit */unsigned int) -2147483642)))) == (((/* implicit */unsigned int) (~(140595477)))))));
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) ((short) 2293695507U)))))), (arr_9 [i_0] [i_1] [i_0] [i_3] [i_2])));
                            var_13 = ((/* implicit */_Bool) var_7);
                            var_14 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((var_9) / (((/* implicit */unsigned int) arr_4 [i_3] [i_0])))) >> (((unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))))) : (((/* implicit */short) ((((var_9) / (((/* implicit */unsigned int) arr_4 [i_3] [i_0])))) >> (((((unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))) - (4294967292U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 ^= ((/* implicit */int) var_6);
    var_16 = ((var_2) >> ((((~(var_8))) + (8034495722592547588LL))));
    var_17 = ((/* implicit */_Bool) var_0);
}
