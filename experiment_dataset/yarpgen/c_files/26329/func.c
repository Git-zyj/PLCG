/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26329
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
    var_12 = ((/* implicit */unsigned char) ((var_1) <= (((/* implicit */unsigned long long int) ((((1822420104U) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (3467608268246935617LL)))))))));
    var_13 = ((/* implicit */signed char) min((268435456), (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))), (max((((/* implicit */long long int) (unsigned short)2203)), (592047921616053515LL))))), (((/* implicit */long long int) min((((unsigned int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned int) ((2190107450U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [17ULL] [i_0])))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((3467608268246935617LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1519)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-7982)) : (((/* implicit */int) (unsigned short)64033))))) < ((-(2206057055U)))));
                arr_10 [i_2] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_7 [i_2] [i_2] [i_1]))))));
                var_14 = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) * (arr_8 [i_2] [i_2]))));
                arr_11 [i_2] [i_2] [(unsigned short)9] [i_2] = ((/* implicit */unsigned short) ((arr_0 [i_1]) << (((arr_8 [i_2] [i_0]) - (3702905037U)))));
            }
        }
    }
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(arr_13 [i_3] [i_3])))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3]))))) ? (((((/* implicit */unsigned long long int) 1259695423U)) * (7827040476749990559ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179)))))));
        arr_16 [i_3] [(unsigned short)15] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(-8241654537153226495LL)))) ? (arr_0 [i_3]) : (((/* implicit */unsigned int) (~(arr_12 [i_3]))))))), (3467608268246935617LL)));
        arr_17 [i_3] [(unsigned short)20] = ((/* implicit */unsigned long long int) 2732209698U);
        arr_18 [i_3] [i_3] = (!(((/* implicit */_Bool) ((unsigned short) (signed char)127))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_1 [i_4] [i_4])) & (((/* implicit */int) arr_20 [i_4] [i_4]))))));
        arr_21 [i_4] = ((/* implicit */short) ((17751891858134156043ULL) - (4389456576512ULL)));
        arr_22 [i_4] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_4] [i_4]))));
    }
}
