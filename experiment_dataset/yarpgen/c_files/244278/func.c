/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244278
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((unsigned long long int) arr_7 [i_1 + 3] [i_1 + 3] [i_1] [i_3 - 1] [i_4] [i_1 + 3]);
                                arr_11 [7ULL] [i_1] [i_1] [i_1] = ((unsigned long long int) max((arr_2 [i_2 - 1] [i_1 + 3]), (arr_2 [i_2 + 1] [i_1 + 2])));
                                var_20 = ((((17505448520438094103ULL) + (arr_0 [i_1 + 2]))) - (var_13));
                            }
                        } 
                    } 
                    var_21 *= ((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (arr_9 [i_2 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) / (((((/* implicit */_Bool) (+(var_13)))) ? (max((var_0), (15565877805814271986ULL))) : (((((/* implicit */_Bool) var_11)) ? (var_11) : (12147238478156189844ULL))))));
                    var_22 = 608740809901678479ULL;
                    arr_12 [i_0] [i_1] = arr_9 [i_0] [i_1];
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_23 = max((var_2), (((((/* implicit */_Bool) max((arr_6 [i_0] [4ULL] [i_0]), (arr_1 [i_0])))) ? (max((arr_3 [i_0] [i_0]), (var_14))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [10ULL] [10ULL])) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [8ULL] [11ULL] [i_0] [i_5]))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((unsigned long long int) (-(arr_2 [i_0] [12ULL])))) / (17827932742725789202ULL)))));
                                arr_18 [i_5] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1815884152808444794ULL)) ? (arr_1 [i_5]) : (arr_1 [i_0]))), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6573987701719064829ULL)) ? (arr_7 [i_0] [i_1] [i_0] [i_5] [i_6] [11ULL]) : (arr_9 [i_0] [i_0])))))))) : (arr_6 [i_6] [i_6] [i_5 + 1]));
                                var_25 = ((unsigned long long int) min((arr_13 [i_0] [i_0] [i_0] [15ULL] [8ULL] [i_0]), (arr_1 [3ULL])));
                                arr_19 [i_5] = ((unsigned long long int) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_8)))))));
}
