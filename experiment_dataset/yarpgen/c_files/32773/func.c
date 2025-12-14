/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32773
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
    var_11 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))), (min((((/* implicit */unsigned int) var_7)), (var_8)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)44018))))) : ((-(((unsigned int) var_7)))));
    var_12 = (!((_Bool)0));
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_4)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_4] [i_3] [i_2] = ((/* implicit */int) min((((long long int) min((arr_0 [i_0]), (arr_0 [(_Bool)1])))), (((/* implicit */long long int) min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) ((short) var_1))))))));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21525)) ? (((/* implicit */int) (short)255)) : (-39511504)));
                                arr_14 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */signed char) max(((unsigned short)44036), ((unsigned short)44011)));
                                var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_7), ((!(((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_1] [i_0]))))))), (arr_4 [i_2] [(short)0] [i_0])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)362)) + (-1592094559)))) + (min((arr_8 [i_0] [i_1] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), (min((((/* implicit */unsigned char) (signed char)77)), (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) ((long long int) 4294967276U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7546799720498502562LL))))) : ((-(((/* implicit */int) (unsigned char)173)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [14LL] [i_0] [(unsigned short)16] [i_0])))))));
        arr_15 [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]);
        arr_16 [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [9LL] [i_0] [3U]);
    }
}
