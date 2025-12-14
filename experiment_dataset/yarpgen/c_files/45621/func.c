/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45621
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 = ((((/* implicit */_Bool) 14015669058378446610ULL)) ? ((-(((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0 + 2] [i_1]) : (14404799221183614959ULL))))) : (5443953246041286369ULL));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((7594515074524475481ULL) >= (12589105712021740518ULL))))) != (var_5)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_21 ^= ((12082669254598394915ULL) ^ (16290122788924785869ULL));
                        arr_15 [i_2] = (-(((6364074819111156730ULL) << (((7594515074524475474ULL) - (7594515074524475448ULL))))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (var_0)));
                        arr_16 [i_5] [i_2] [i_2] [i_2] = ((max((0ULL), (10852228999185076134ULL))) * (((((/* implicit */_Bool) 12082669254598394915ULL)) ? (arr_11 [i_4 - 1] [i_2] [i_2] [i_4 - 2]) : (arr_11 [i_4 + 2] [i_2] [i_2] [i_4 - 1]))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) 16142845431406818785ULL)) ? (6ULL) : (15871290783542972762ULL));
                        var_24 = ((unsigned long long int) arr_17 [i_4 - 1] [i_4 + 4] [i_2] [i_4 - 2]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                arr_26 [i_2] [i_4 + 1] [i_2] = var_10;
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (max((((((/* implicit */_Bool) var_13)) ? (12589105712021740523ULL) : (7594515074524475481ULL))), (((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) arr_19 [i_8] [i_7] [i_4 - 1] [i_2])) ? (1445137156422997409ULL) : (1998514886289030662ULL))) : (((((/* implicit */_Bool) arr_13 [i_2])) ? (5857638361687811098ULL) : (arr_24 [i_2] [i_3] [i_4 + 2] [i_4] [i_8])))))))));
                                var_26 ^= (+(arr_18 [i_2] [i_3] [i_3] [i_4 + 2] [i_7] [i_8]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_13))));
    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
}
