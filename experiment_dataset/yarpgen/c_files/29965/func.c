/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29965
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
    var_14 = 17393779734164256076ULL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0 + 1] = var_9;
        arr_5 [8ULL] [8ULL] = ((((/* implicit */_Bool) ((unsigned long long int) 17393779734164256076ULL))) ? (arr_3 [i_0 + 1]) : (((0ULL) + (12133883845075739976ULL))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_15 = ((((((/* implicit */_Bool) 3749998126461970679ULL)) ? (var_11) : (var_6))) + (16695550935760319149ULL));
            var_16 = (~(14696745947247580942ULL));
        }
        for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 2) 
        {
            arr_12 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2]))));
            var_17 = (~(arr_1 [i_2 + 2]));
            var_18 = ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) var_13)) : (((((/* implicit */_Bool) var_9)) ? (545892366484826786ULL) : (6572516269345240862ULL))));
            var_19 = (~(arr_6 [i_2 + 1]));
        }
        var_20 = ((((/* implicit */_Bool) arr_11 [i_0 - 2])) ? (arr_11 [i_0 + 1]) : (0ULL));
        arr_13 [i_0] = arr_8 [i_0] [i_0 + 1] [i_0 + 1];
    }
    var_21 = (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((((/* implicit */_Bool) 8941188604764032643ULL)) ? (17900851707224724836ULL) : (15ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1981719045344213337ULL)) ? (var_2) : (var_12)))) ? (3984024072879530491ULL) : (((18446744073709551600ULL) + (var_10))))));
    var_22 = (((-(var_3))) + (((((/* implicit */_Bool) var_6)) ? (((var_9) + (6ULL))) : (((var_6) + (var_3))))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (8370598234184123796ULL))) : (((unsigned long long int) 18ULL)))))));
                        var_24 = ((unsigned long long int) arr_8 [6ULL] [i_5] [7ULL]);
                        arr_25 [6ULL] [i_3] [i_5 + 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_2))))))) + (((var_9) + (998026661200739946ULL))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                    {
                        arr_30 [7ULL] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((unsigned long long int) 18446744073709551615ULL)) : (18446744073709551594ULL))))));
                        arr_31 [i_3] [12ULL] [i_3] [12ULL] [i_3] = ((unsigned long long int) ((arr_27 [i_3 - 1] [i_7 + 3] [i_5 + 1]) + (545892366484826779ULL)));
                        arr_32 [5ULL] [i_3] [i_5] [i_7] = ((arr_15 [i_3]) + (31ULL));
                        arr_33 [i_7] [i_3] [5ULL] [5ULL] [i_3] [i_3] = (+((-(arr_29 [i_7] [i_7] [i_5 + 1] [11ULL] [0ULL]))));
                    }
                    arr_34 [10ULL] [i_3] [i_3] = ((unsigned long long int) min((arr_16 [7ULL]), (var_9)));
                }
            } 
        } 
    } 
}
