/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247381
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
    var_12 = (signed char)-2;
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((long long int) var_10)), (min((7716494046822436975LL), (((/* implicit */long long int) var_2)))))))));
    var_14 = ((/* implicit */long long int) (signed char)63);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((signed char) arr_0 [i_1 + 2] [i_1 + 2]);
                arr_7 [(signed char)6] [(signed char)6] = ((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 2464586358658022827LL))))), ((signed char)-18)))), ((+(((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_0])))))));
                arr_8 [i_0] [i_0] [12LL] = arr_1 [i_0] [i_1];
                arr_9 [(signed char)8] [2LL] [(signed char)8] = min((((/* implicit */long long int) ((signed char) min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [4LL] [4LL])))))), (((long long int) (signed char)-76)));
                arr_10 [i_0] [i_0] = arr_5 [i_0] [i_0];
            }
        } 
    } 
}
