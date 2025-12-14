/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246485
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            arr_14 [i_0 - 2] [i_0] [i_0 + 2] [i_1] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_0 + 1] [i_1 - 2] [i_3 - 1] [i_3 - 1] [i_4] [i_4]))));
                            var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_3 - 1] [i_3] [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) ((842414389U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
                        }
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_2] [i_1])) || (((/* implicit */_Bool) (~(arr_0 [i_0]))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)13114)), (1073741823U)));
    }
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (unsigned short)29633))));
    var_23 = ((/* implicit */short) max(((unsigned short)13114), ((unsigned short)14567)));
}
