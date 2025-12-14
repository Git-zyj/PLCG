/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207479
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
    var_17 = var_11;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = (+(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))))), (arr_7 [i_1] [i_1] [i_0]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_19 = ((14431726529585517210ULL) * (9790448836797476243ULL));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (0ULL)))) ? (((arr_9 [i_0] [i_1] [i_2] [i_1]) | (var_4))) : (((18446744073709551615ULL) - (16054338195293028924ULL))));
                    var_20 = (-(var_15));
                }
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    var_21 = 0ULL;
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) 12688191010554098040ULL)) ? (5758553063155453576ULL) : (2147467264ULL)))));
                    var_23 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (var_6)))) ? (arr_3 [i_0]) : (((var_7) / (18446744073709551615ULL)))))) ? (var_8) : (max(((~(arr_12 [i_0] [i_0] [i_3]))), (arr_1 [i_0]))));
                }
                var_24 *= (+(((arr_12 [i_0] [i_0] [17ULL]) + (arr_3 [i_1]))));
            }
        } 
    } 
    var_25 = min(((+(5758553063155453585ULL))), (var_6));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            {
                var_26 = arr_7 [i_4] [i_4 + 2] [i_4];
                var_27 = min((((((/* implicit */_Bool) 18015787860751617604ULL)) ? (5758553063155453575ULL) : (18446744073709551615ULL))), (13235510870669153884ULL));
                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_18 [i_5 + 2]) << (((arr_18 [i_5 + 1]) - (18275842432394988693ULL))))))));
            }
        } 
    } 
}
