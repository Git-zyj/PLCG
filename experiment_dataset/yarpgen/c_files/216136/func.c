/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216136
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 258052964712076709ULL)) ? (((/* implicit */int) (short)20210)) : (((/* implicit */int) (_Bool)1)))))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_15 ^= ((/* implicit */_Bool) max((arr_5 [i_2] [i_2]), (((/* implicit */unsigned int) ((max((9223372036854775808ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-2358))))))))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((~(min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_10 [i_1]))))) >> (((((/* implicit */int) (short)-2375)) + (2387))))))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (min(((((((_Bool)1) ? (8309273567234747909ULL) : (1504428763505107667ULL))) * (((((/* implicit */_Bool) 10106625655614188625ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (2080768ULL))))), (((2067639537768270013ULL) << (((6497089613168663548ULL) - (6497089613168663487ULL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned int) max((10106625655614188625ULL), ((-(max((1504428763505107667ULL), (16942315310204443949ULL)))))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (_Bool)0))));
}
