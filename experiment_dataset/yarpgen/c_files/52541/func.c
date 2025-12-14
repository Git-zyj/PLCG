/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52541
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
    var_17 = 13016666374211459540ULL;
    var_18 = ((/* implicit */short) ((unsigned char) 264241152U));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_1 [i_0 + 3]))))));
                arr_7 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) min(((short)7168), (arr_2 [i_1])))), ((~(((/* implicit */int) arr_2 [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_11 [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)17454)) > (((/* implicit */int) (short)7168)))))) | (((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) ^ (min((var_3), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 144115188075855840ULL))))))));
                }
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_14))))))))));
                var_20 = (-(((/* implicit */int) ((((/* implicit */int) (short)12685)) <= (((/* implicit */int) (short)17462))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_1);
}
