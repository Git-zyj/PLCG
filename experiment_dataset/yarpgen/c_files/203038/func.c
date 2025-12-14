/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203038
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
    var_16 = ((/* implicit */unsigned char) ((_Bool) var_12));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1905935478)) ? (((/* implicit */long long int) -1217874588)) : (-1455356020925648086LL)))) ? ((+(min((((/* implicit */unsigned long long int) var_5)), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0 + 3] [i_0])))), (((/* implicit */unsigned long long int) min((3830646332U), (((/* implicit */unsigned int) (short)3964)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (0LL)))) ? (min((arr_4 [i_0] [i_0 - 3]), (((/* implicit */unsigned long long int) (signed char)-69)))) : (arr_1 [i_1 + 2]))) : (arr_1 [i_1 - 2])));
                var_19 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 315301997)), (max((max((arr_1 [i_0 - 1]), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)16596))) > (4527441192299507430LL))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 17; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                arr_10 [i_2] = max((max((((/* implicit */long long int) arr_5 [i_2 + 3] [i_2])), (((long long int) arr_6 [i_3] [i_2])))), (((/* implicit */long long int) arr_7 [i_2])));
                arr_11 [i_2] [i_2] = ((/* implicit */short) ((int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (unsigned short)1815))))), (arr_6 [i_2] [i_3]))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_10);
}
