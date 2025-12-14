/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34552
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
    var_11 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 -= (~(((/* implicit */int) min((arr_1 [i_0] [(unsigned char)4]), (arr_1 [i_0] [i_0])))));
                var_13 = ((/* implicit */unsigned char) ((((max((var_4), (((/* implicit */long long int) arr_5 [(unsigned char)17] [i_0])))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))) != (var_10)));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min(((~(var_0))), (var_3))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) arr_3 [i_1]))));
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) min((min((var_5), (((/* implicit */unsigned long long int) -3749556441677479519LL)))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) arr_5 [i_0] [i_0])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) var_10)))));
}
