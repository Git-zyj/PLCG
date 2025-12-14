/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24199
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) (signed char)15)))) : (min(((-(((/* implicit */int) var_6)))), (var_9))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0])))) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_6 [i_0]))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (4922885465277096751LL))))))), (var_2)));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)157)) ? (8912222486386413408LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    var_15 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((-4922885465277096763LL), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) var_7))));
}
