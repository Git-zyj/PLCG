/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32215
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) (unsigned char)239);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                            arr_12 [i_0] [i_0] [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) -2);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                arr_20 [i_4] [i_4] [i_5] = ((/* implicit */int) var_3);
                arr_21 [i_4] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_1), (((/* implicit */long long int) ((((377074412909499924ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (short)18858)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (short)12288)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (short)21478)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-3994)) : (-1148899245)))) ? (min((1752350456U), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(var_2)))) + (((/* implicit */int) var_4)))))));
}
