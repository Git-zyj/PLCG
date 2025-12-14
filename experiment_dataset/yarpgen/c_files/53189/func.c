/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53189
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(6751484428303531764LL)))), ((-(14800635916777536953ULL)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) var_0);
                            arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_3])))) <= (((/* implicit */int) ((arr_0 [i_0 - 1]) || (((/* implicit */_Bool) (unsigned short)25259)))))));
                            arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0 - 1] [6U])), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) : (arr_5 [i_2] [i_4])))))) ? (((/* implicit */int) arr_3 [i_2])) : (((((/* implicit */int) arr_4 [i_0 - 1])) ^ (((/* implicit */int) arr_4 [i_0 - 1]))))));
                        }
                        arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [0] [i_0 - 1] = ((/* implicit */long long int) arr_12 [i_0 - 1] [i_0 - 1] [(signed char)4] [i_0 - 1] [i_0 - 1]);
                    }
                    arr_16 [i_0] [i_0] [i_1] [i_2 - 2] = (+(((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_10 [i_0 - 1])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (6751484428303531767LL) : (((/* implicit */long long int) ((/* implicit */int) ((6751484428303531754LL) == (((/* implicit */long long int) ((/* implicit */int) var_18)))))))));
}
