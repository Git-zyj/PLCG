/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202535
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_10 = ((unsigned long long int) (!(((/* implicit */_Bool) 4211147949275875128ULL))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), ((+((-(1737361108379880755ULL)))))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = (~(1264412488643116400ULL));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((unsigned long long int) ((unsigned long long int) 1737361108379880755ULL)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_13 = ((unsigned long long int) 17175674880ULL);
                            var_14 *= ((unsigned long long int) ((unsigned long long int) 17580192566424989779ULL));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_20 [i_0] [i_7] [i_4] [i_5] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 7264888941554080884ULL)))));
                            arr_21 [2ULL] [i_4] [i_4] [i_7] [i_7] [i_4] [i_5 + 2] = (+(4611686018427387904ULL));
                        }
                        arr_22 [i_0] [7ULL] [i_3] [i_5] [i_3] [i_3] = ((unsigned long long int) 16709382965329670865ULL);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 4; i_8 < 9; i_8 += 4) 
    {
        arr_25 [i_8] = ((unsigned long long int) (+(0ULL)));
        arr_26 [i_8] = ((unsigned long long int) 7748080802772905139ULL);
    }
    var_15 = 4611686018427387904ULL;
}
