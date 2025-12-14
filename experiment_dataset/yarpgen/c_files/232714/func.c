/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232714
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 2547255390643611997ULL)) ? (2547255390643611997ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-13622)) == (arr_1 [i_0 - 1] [i_0 + 4]))))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_12 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)13622)) == (((/* implicit */int) arr_4 [i_0] [i_3] [i_1 + 1] [i_0 + 3])))))) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_3 [i_0 - 1])) : (0ULL)))));
                        var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17912107698684226139ULL)) ? (((/* implicit */int) (unsigned short)55758)) : (((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_3]))))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_1 - 2] [3U])) : (((/* implicit */int) var_1)))) % (((/* implicit */int) ((_Bool) arr_2 [i_1])))));
                        var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_10 [i_0 + 1]), (arr_10 [i_0 + 3])))) ? (((/* implicit */int) ((5998744489791136154LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 3])))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)170))))) - (((11925987614884644492ULL) >> (((((/* implicit */int) (unsigned short)7206)) - (7194)))))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (max((2018250618293712128ULL), (((/* implicit */unsigned long long int) (unsigned short)21463))))))) ? (max((arr_2 [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9759)) ? (((/* implicit */int) (short)13622)) : (((/* implicit */int) arr_0 [i_0 + 2]))))))) : (max((((/* implicit */long long int) 177506374U)), (-8887725794068128048LL)))));
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */signed char) ((int) (unsigned short)42608));
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_9);
                            var_16 &= ((/* implicit */int) max((((((/* implicit */_Bool) 2723154495010017093ULL)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65211))))) : (((((/* implicit */_Bool) arr_17 [i_3])) ? (3561865699U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7945))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1])) <= ((~(arr_3 [i_0]))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))) : (17217217563638558607ULL)));
}
