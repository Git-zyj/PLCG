/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220905
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_10 -= (~((~(arr_2 [i_0 - 1]))));
                                var_11 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [16]))))) ? (((/* implicit */unsigned long long int) arr_12 [i_0 + 2] [i_1] [i_1] [i_3] [i_0 - 1] [i_0 - 1])) : ((~(4398046511104ULL)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446739675663040484ULL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_3 [i_0]))))), ((((_Bool)1) ? (4398046511131ULL) : (arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (arr_9 [i_0] [i_0 - 1] [i_2] [i_4] [i_4]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [12ULL] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)-32750)));
                    var_12 -= ((/* implicit */short) ((_Bool) arr_4 [i_0 - 1]));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) * (6378087536873092377ULL)));
}
