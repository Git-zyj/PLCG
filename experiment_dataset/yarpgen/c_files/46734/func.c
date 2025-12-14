/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46734
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned short)932)), (var_18))), (((/* implicit */unsigned long long int) (short)448))))) && (((((/* implicit */_Bool) ((3415656954U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96)))))) || ((_Bool)1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)49))))) ? (min((10921128029286992813ULL), (((/* implicit */unsigned long long int) arr_4 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */int) (short)453)) : (((/* implicit */int) arr_1 [i_1 - 2])))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (signed char)-53))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_10 [i_3 + 1] [i_2] [i_1 - 1] [i_0]))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) max((((max((((/* implicit */long long int) (unsigned short)28395)), (-4153204666039232989LL))) | (max((-5618842706916481624LL), (((/* implicit */long long int) (short)455)))))), (max((((/* implicit */long long int) (short)-451)), (max((((/* implicit */long long int) (-2147483647 - 1))), (4153204666039232967LL)))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_1 + 4] = ((/* implicit */unsigned char) arr_3 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            {
                arr_20 [i_4 - 1] [i_5] = ((/* implicit */int) (_Bool)1);
                var_23 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-14440)) >= (((((/* implicit */_Bool) 5618842706916481623LL)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (short)27397)))))) ? (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)116)), (5618842706916481623LL)))) * (16811013110444406639ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - ((-(((/* implicit */int) arr_13 [i_4])))))))));
            }
        } 
    } 
    var_24 = max(((unsigned char)45), (((/* implicit */unsigned char) ((signed char) 4153204666039232988LL))));
}
