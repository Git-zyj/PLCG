/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46670
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] = arr_6 [i_0] [i_0];
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_4] [(unsigned short)14] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) 5730497556438705650LL));
                                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((arr_9 [i_3] [i_0] [i_0] [i_0]) % (((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0])))) ^ (((/* implicit */int) (unsigned char)236))))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)0))));
                var_12 = ((((unsigned long long int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)0))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (7699108593172749127ULL)))) ? (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)64))))) : ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (13726410976859472989ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((4720333096850078626ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13524)))))))))))));
}
