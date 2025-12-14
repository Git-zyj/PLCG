/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246765
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [3LL] [6U] [i_2] = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_8 [(short)11] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) max(((short)-14493), ((short)14492)))) - (14466)))));
                }
            } 
        } 
        var_16 &= ((/* implicit */unsigned long long int) var_2);
    }
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) ((7649533973945786485ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14481)))))), ((short)-14481))))));
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                {
                    var_18 = ((unsigned char) max((((((/* implicit */_Bool) arr_13 [i_3 + 1] [9U] [(unsigned short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_10))), (((/* implicit */unsigned long long int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_21 [i_3] [i_3] [(_Bool)1] [i_6] [3LL] = ((/* implicit */signed char) max(((short)14492), (((/* implicit */short) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) (short)22356))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [(unsigned short)4]))))) : (max((((/* implicit */unsigned int) var_7)), (var_5))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((max((arr_14 [i_4]), (((/* implicit */unsigned long long int) ((unsigned int) var_6))))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_3] [i_5 - 1])), (((((/* implicit */long long int) ((/* implicit */int) (short)14492))) - (var_8))))))));
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max(((unsigned short)10563), (((/* implicit */unsigned short) (short)14489))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 9; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_23 -= ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((((/* implicit */int) arr_25 [i_8] [i_8] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9])) != (((/* implicit */int) arr_25 [i_8] [(_Bool)1] [i_9 + 1] [i_9] [(short)10] [i_9])))))));
                                arr_26 [i_3] [3] [i_5] [i_3] [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_9 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_4])))), (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_25 [i_9 - 1] [i_4] [1U] [i_8] [i_3] [i_3])), (arr_24 [i_3] [i_4] [i_4] [i_5] [(unsigned char)1] [i_9 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
