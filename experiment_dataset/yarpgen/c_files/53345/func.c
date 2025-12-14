/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53345
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_10 = ((((/* implicit */_Bool) min((9223372036854775795LL), (((/* implicit */long long int) ((arr_0 [i_0] [i_1]) | (((/* implicit */int) (signed char)118)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) arr_2 [i_0 + 1]))))) : (var_8));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)55))));
            }
        } 
    } 
    var_11 += ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3347288067U)))))) : (var_2))));
    var_12 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 3 */
    for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) -536870912);
        var_13 = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)16)))) / (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (9223372036854775807LL)))) ? (-9005676456415094819LL) : (((7408498809103865859LL) << (((644141071U) - (644141071U))))))));
    }
    for (int i_3 = 2; i_3 < 9; i_3 += 3) 
    {
        var_14 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 - 2] [i_3 + 2]))))));
        var_15 = 270582939648LL;
    }
    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((min((((long long int) 16U)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -439123052)) : (var_4)))))), (min((((((/* implicit */_Bool) 1109039590071336305LL)) ? (((/* implicit */long long int) 429558205U)) : (var_9))), (-5109048499664933355LL)))));
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */long long int) 3963715881U)) : (var_9)))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_7)) : (arr_8 [i_4] [i_4]))))))));
    }
}
