/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239071
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = arr_0 [i_0];
        arr_2 [i_0] [i_0] = arr_1 [i_0] [(unsigned char)4];
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    arr_10 [(unsigned char)14] [8LL] [i_2] = ((/* implicit */short) (signed char)-33);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_8 [i_1] [i_5]))));
                                var_14 = ((/* implicit */_Bool) (~(arr_3 [i_1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_1] [i_1] = ((unsigned int) -1);
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        arr_18 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)58)) >> (((arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) - (2641640621080084352ULL)))));
        arr_19 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned char)194))))));
    }
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_10)))) | (((/* implicit */int) var_0))))), (var_5))))));
}
