/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215287
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
    var_17 = ((/* implicit */unsigned int) (~(min((9065870267927919264LL), (((/* implicit */long long int) min(((unsigned char)137), (var_7))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) 6954742563203772233LL);
                    arr_10 [i_2] = ((/* implicit */unsigned int) -6954742563203772222LL);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) -6954742563203772241LL);
                        arr_15 [i_2] [i_3] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 1])) ? (arr_6 [i_0 - 3] [i_0 - 1] [i_0 - 2]) : (arr_8 [i_0 - 3] [i_0 - 1] [i_0 + 1]))));
                    }
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32), (((/* implicit */short) (signed char)-49)))))) ^ (min((arr_8 [7U] [7U] [i_0 - 2]), (arr_8 [1LL] [i_0] [i_0 - 3])))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 6954742563203772250LL))));
                }
            } 
        } 
    } 
}
