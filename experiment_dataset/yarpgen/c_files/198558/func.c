/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198558
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
    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 16LL)))) | (var_7)));
    var_14 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2])), (arr_5 [i_0] [i_0] [i_2] [i_3]))) >> ((((~(((/* implicit */int) var_11)))) + (42684)))));
                            arr_10 [i_3] [i_2] [i_3] [(short)16] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_1] [i_2 - 2]))))) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_2 - 2])) : ((-(((/* implicit */int) arr_7 [i_2] [i_1] [i_2 - 2]))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-4963)) == (((/* implicit */int) (short)-4945)))) ? (((((/* implicit */_Bool) (short)4962)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (short)4966)))) : (arr_0 [i_1])))) - (((((/* implicit */_Bool) (short)4956)) ? (((/* implicit */long long int) 2147483635)) : (8504760572276072861LL)))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)4949)) && (((/* implicit */_Bool) (short)124))));
            }
        } 
    } 
}
