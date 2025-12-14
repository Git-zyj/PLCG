/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226026
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = min((((/* implicit */unsigned int) max((arr_2 [i_2 - 1] [i_2 - 1]), (((/* implicit */int) arr_6 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]))))), (((unsigned int) arr_3 [i_2 + 1] [i_0 + 3] [i_0 + 2])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        var_16 -= ((/* implicit */unsigned int) ((long long int) arr_6 [i_0] [(unsigned short)10] [i_2] [(unsigned short)10]));
                        var_17 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                        arr_10 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) 536870910)) % (arr_5 [i_0 + 2] [i_0 + 2] [i_2])));
                        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [7LL] [i_2] [i_2] [i_2]))));
                    }
                    for (int i_4 = 3; i_4 < 21; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)32768)))) != ((-(((/* implicit */int) arr_4 [i_2] [i_2] [i_4 - 3]))))));
                        var_20 -= ((/* implicit */short) ((-536870911) / (-536870911)));
                        var_21 &= ((/* implicit */unsigned short) arr_13 [20LL] [i_2 - 2] [i_1] [i_0] [20LL]);
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */long long int) (short)4032)), (36028797018955776LL)));
}
