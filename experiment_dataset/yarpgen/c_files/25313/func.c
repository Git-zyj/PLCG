/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25313
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
    var_18 = ((/* implicit */unsigned long long int) (~((-((~(((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(_Bool)0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_19 += ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)18289)))) | (((/* implicit */int) ((signed char) (+(arr_0 [i_0] [i_1])))))));
                var_20 = ((/* implicit */short) ((unsigned char) min((((/* implicit */int) arr_2 [i_0 + 3] [i_1])), (700146971))));
                var_21 = ((/* implicit */signed char) arr_2 [i_0 + 3] [i_0 + 1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 3; i_2 < 21; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) (!(arr_11 [i_2])))), (max((var_15), (((/* implicit */int) arr_13 [0U] [i_3] [i_4])))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [20ULL] [i_3])) ^ (((/* implicit */int) arr_13 [i_2] [12LL] [(_Bool)1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [16U])) - (((/* implicit */int) arr_6 [i_2] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_20 [(unsigned char)18] [i_3] [i_4] [i_6] [(short)2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_2] [i_2 - 1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_10 [i_2])) : (((((/* implicit */_Bool) arr_15 [4ULL] [i_5] [(unsigned char)18] [i_3])) ? (((/* implicit */int) (short)-18280)) : (((/* implicit */int) arr_16 [i_2])))))));
                                var_23 = ((_Bool) ((unsigned int) (short)18786));
                                var_24 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) arr_17 [i_2 + 1])), (var_14)))));
                                arr_21 [i_6] [(short)0] [9LL] [(short)12] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((_Bool) 7043500588537620428ULL))) & ((-(((/* implicit */int) var_12))))))));
                                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_2] [i_3] [(_Bool)1] [i_2]))));
                            }
                        } 
                    } 
                    arr_22 [i_2 - 3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)21123))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [(unsigned char)2] [i_4] [i_4] [(short)15] [3] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_13 [18LL] [i_3] [i_4]))))));
                        var_26 = ((/* implicit */_Bool) var_5);
                        var_27 = ((/* implicit */short) (~(arr_12 [i_2 + 1] [i_2 - 3] [i_2] [i_2 - 3])));
                    }
                }
            } 
        } 
    } 
    var_28 = ((_Bool) -2663336818581642180LL);
}
