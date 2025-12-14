/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208893
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)36461)), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)240)), (arr_2 [i_0])))) ? (((/* implicit */int) (unsigned char)60)) : (var_10)))));
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_0] [i_2 + 2])) ? ((+(var_5))) : (((/* implicit */int) var_9)))) % (((/* implicit */int) (unsigned short)32760))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) -914290701))) || (((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 2])))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((var_9) ? (((/* implicit */int) (unsigned char)20)) : (2147483647)))))) ? (max((((/* implicit */int) ((_Bool) (_Bool)1))), ((((-2147483647 - 1)) / (((/* implicit */int) var_6)))))) : (((((/* implicit */int) var_0)) ^ ((-2147483647 - 1))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) var_2);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            arr_23 [i_0] [(short)15] [i_4] [i_5] [i_6] [i_0] = var_11;
                            arr_24 [i_0] [i_0] [i_3] [0LL] [i_0] [8U] = ((/* implicit */int) arr_12 [i_0] [i_0]);
                            var_16 = var_2;
                            arr_25 [i_0] = ((/* implicit */short) ((unsigned int) (short)18061));
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_26 [i_7]), (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)232)) : (arr_26 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5LL))) : (((/* implicit */long long int) max((((2147483647) ^ (((/* implicit */int) arr_27 [i_7])))), (((/* implicit */int) ((short) var_9))))))));
        var_17 -= ((/* implicit */unsigned char) ((3313843930404615025LL) / (627786366338693249LL)));
    }
    var_18 = ((/* implicit */long long int) 0U);
    var_19 = ((/* implicit */unsigned char) ((-8023273799594619455LL) <= (((((/* implicit */_Bool) -8271385534121463157LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) : ((-(3313843930404615025LL)))))));
}
