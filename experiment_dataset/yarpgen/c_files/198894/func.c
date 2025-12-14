/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198894
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
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5)) ? (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 4] [i_0 - 1]))))) || (((/* implicit */_Bool) ((0) - (((/* implicit */int) arr_0 [i_0])))))))), ((~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (5) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1957692924U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)52))))))) : (max((4611668426241343488ULL), (((/* implicit */unsigned long long int) 1957692935U))))));
                var_17 &= ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    arr_13 [i_4] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(0)))), ((-((-(14177657066180084372ULL)))))));
                    arr_14 [i_3] [i_3 - 1] [i_3] = ((/* implicit */int) (-(((((((/* implicit */_Bool) arr_7 [i_2 + 2] [4U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 2] [i_4]))) : (arr_10 [9U] [i_3]))) + (((/* implicit */long long int) (-(arr_6 [i_2]))))))));
                    arr_15 [7] [i_3] [i_4] [i_4] = ((/* implicit */long long int) -22);
                    var_18 = ((/* implicit */unsigned short) 1099511627775LL);
                    var_19 = ((/* implicit */short) (~(arr_10 [i_4] [i_4])));
                }
            } 
        } 
        arr_16 [i_2 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((~(536870912))))))));
    }
}
