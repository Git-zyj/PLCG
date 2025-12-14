/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42181
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_11 = ((((/* implicit */_Bool) min((((long long int) 1048575LL)), (9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_6)) ? (((var_0) & (var_6))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(1237578463298206732LL)))))))));
            var_12 = ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (-26LL))) % (((((long long int) var_0)) / (((((/* implicit */_Bool) var_3)) ? (var_1) : (arr_0 [i_0]))))));
            var_13 = min(((-(var_2))), ((-(var_7))));
        }
        arr_4 [i_0] [i_0] = (((!(((/* implicit */_Bool) arr_3 [8LL])))) ? (((((/* implicit */_Bool) var_1)) ? (((-9223372036854775793LL) ^ (var_1))) : (((((/* implicit */_Bool) var_0)) ? (45LL) : (arr_0 [i_0]))))) : (((((var_1) < (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -2LL)))))) : (var_0))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_14 = (+(var_7));
            arr_9 [i_0] = ((((/* implicit */_Bool) ((var_7) ^ (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (arr_1 [i_2] [i_0]))) : (arr_5 [i_0] [i_0]));
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            var_15 |= (-(var_5));
            var_16 = ((/* implicit */long long int) ((var_7) == (var_10)));
            var_17 = ((/* implicit */long long int) min((var_17), (((long long int) ((((/* implicit */_Bool) var_3)) ? (8018600640258708961LL) : ((-9223372036854775807LL - 1LL)))))));
        }
    }
    for (long long int i_4 = 4; i_4 < 12; i_4 += 3) 
    {
        var_18 = ((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) ? (((long long int) 3834112256109321398LL)) : (max((((((/* implicit */_Bool) -1727565570196430400LL)) ? (arr_14 [i_4]) : (var_7))), (arr_14 [i_4 - 4]))));
        arr_15 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_5))))));
        arr_16 [i_4] = ((long long int) ((long long int) var_2));
    }
    var_19 = ((((/* implicit */_Bool) ((long long int) var_10))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) - ((~(var_5))))) : (var_4));
    var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_5) : (var_4))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775803LL)) && (((/* implicit */_Bool) var_10)))))))))) < (var_9)));
    var_21 = var_1;
}
