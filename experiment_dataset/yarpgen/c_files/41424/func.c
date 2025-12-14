/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41424
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
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3277174364U))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1017792931U)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) min(((~(arr_5 [i_0] [i_0]))), ((~(3277174364U)))))) : ((+(((((/* implicit */unsigned long long int) 1017792932U)) | (3437423667239108277ULL))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3277174364U)))))));
                                var_20 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 3137216456136483643LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [17]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [9LL] [0ULL] [i_4] [i_4]))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_2] [i_1] [i_1] [10] [2U] [i_4] [i_4 + 1])))))));
                                arr_13 [i_0] [0ULL] [6] [i_3] [18ULL] = ((/* implicit */signed char) 2098075322);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-117))))), (min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [(signed char)14]))))))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) << ((((+(((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) - (3801138296U)))));
    var_23 = ((/* implicit */unsigned char) ((unsigned int) (((~(((/* implicit */int) var_2)))) * (((/* implicit */int) var_3)))));
}
