/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29085
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -70368744177664LL))))) >> (((((/* implicit */int) min(((unsigned short)43877), ((unsigned short)60500)))) - (43871)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) (unsigned short)43855);
                                arr_14 [i_0] [(unsigned short)12] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)21659)), (((((/* implicit */int) var_6)) << (((/* implicit */int) var_2))))))) ? (max((((/* implicit */unsigned int) var_4)), (((unsigned int) (unsigned short)43886)))) : (((/* implicit */unsigned int) ((((var_4) + (2147483647))) << (((((/* implicit */int) (unsigned short)43879)) - (43879))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1 + 3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((int) var_7))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_5 = 3; i_5 < 19; i_5 += 4) 
    {
        arr_18 [i_5] [0LL] = ((/* implicit */unsigned short) ((((388883457518242764ULL) << (((((/* implicit */int) var_6)) - (52585))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52773)))));
        arr_19 [i_5] [i_5] = ((/* implicit */int) (unsigned short)65535);
        /* LoopSeq 1 */
        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((2009009817U) >> (((((/* implicit */int) (unsigned short)12763)) - (12752)))))))));
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20202)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)0))));
            arr_22 [i_5] [i_6 - 3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)21656)) && (((/* implicit */_Bool) (unsigned short)64020))));
            arr_23 [i_6] [(unsigned short)9] = ((/* implicit */unsigned short) ((-1419352020) != (((/* implicit */int) var_7))));
            arr_24 [i_6] [i_6] = ((/* implicit */signed char) ((unsigned short) var_2));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) min(((unsigned short)64669), (var_10)))) > (((((/* implicit */int) var_6)) << (((var_11) - (1486506227U))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)6)), (10932530648830149894ULL)))) && (((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_10)))))))));
        var_15 += ((/* implicit */unsigned short) min((((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) var_11))));
    }
    var_16 = ((/* implicit */unsigned int) max((18197619035035114771ULL), (((/* implicit */unsigned long long int) (unsigned short)0))));
}
