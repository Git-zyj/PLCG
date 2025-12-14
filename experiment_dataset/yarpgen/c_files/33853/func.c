/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33853
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_9)), (3149556033538594876ULL))) > (((/* implicit */unsigned long long int) ((0LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2177))))))))), (min((((/* implicit */long long int) ((unsigned int) 3149556033538594876ULL))), (min((arr_6 [3ULL] [i_1]), (((/* implicit */long long int) -246597563))))))));
                            var_16 = ((/* implicit */int) max((var_16), (max((((/* implicit */int) var_9)), (((((/* implicit */int) (signed char)54)) >> (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 - 1]))))))));
                            arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((long long int) var_13))), (max((((/* implicit */unsigned long long int) -1841236796)), (12149320158866130707ULL))))), (min((min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])), (var_14))), (((/* implicit */unsigned long long int) min((arr_5 [i_1]), (((/* implicit */unsigned int) var_7)))))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_0 + 1] [1ULL] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_1] [6U] [i_0]);
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_22 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_1] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((arr_6 [i_5] [i_0]), ((-9223372036854775807LL - 1LL))))) ? (7002444359795247789LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 16438199879648137650ULL)))))), (((((-3146970706375580479LL) + (9223372036854775807LL))) << (((min((3149556033538594887ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_0] [i_5])))) - (104ULL)))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((arr_6 [i_5] [i_0]), ((-9223372036854775807LL - 1LL))))) ? (7002444359795247789LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 16438199879648137650ULL)))))), (((((-3146970706375580479LL) + (9223372036854775807LL))) << (((((min((3149556033538594887ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_0] [i_5])))) - (104ULL))) - (127ULL))))))));
                                arr_23 [i_0 - 2] [i_1] [i_1] [i_5] [i_5] [6ULL] [(unsigned char)11] = max((min((((/* implicit */unsigned long long int) ((long long int) var_11))), (15297188040170956708ULL))), (var_8));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((3149556033538594887ULL) + (((/* implicit */unsigned long long int) 1841236796)));
}
