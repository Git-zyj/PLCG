/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236136
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_15 = 6737912532623776539LL;
                    arr_7 [i_2] = var_3;
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_16 = (+(((4398046511103LL) ^ (1073741823LL))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_17 = ((-6045148666077115586LL) % (arr_14 [i_5 + 2] [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 3] [i_5 + 1]));
                                arr_15 [i_0] [3LL] [4LL] [14LL] = ((((/* implicit */_Bool) ((arr_12 [i_5] [i_3] [i_3] [i_5] [i_3] [i_1]) / (-6737912532623776534LL)))) ? (arr_5 [i_3] [i_5]) : ((~(var_1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_21 [i_0] [9LL] [i_3] [i_6] [i_7] = -6737912532623776540LL;
                                var_18 = ((555625730478877631LL) % ((+(arr_17 [i_0] [i_0] [i_0] [3LL]))));
                            }
                        } 
                    } 
                }
                arr_22 [i_0] = (((!(((/* implicit */_Bool) var_5)))) ? (arr_8 [i_1] [12LL] [i_0] [i_0]) : (var_8));
            }
        } 
    } 
    var_19 = var_13;
}
