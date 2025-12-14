/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51938
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) >> (((/* implicit */int) ((((/* implicit */_Bool) 1073741823)) || (((/* implicit */_Bool) 1073741797)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_9)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)9]))) * (var_3)))))));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (unsigned short)34656))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) 6848720802810501961LL)))) : (((/* implicit */unsigned long long int) ((1073741823) % (((/* implicit */int) (_Bool)1)))))));
            var_13 ^= (!(((/* implicit */_Bool) 3825289669U)));
            var_14 = ((/* implicit */long long int) ((unsigned long long int) var_3));
        }
        arr_7 [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((4788369985308728883LL) < (((/* implicit */long long int) var_11)))) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */int) arr_3 [i_0 + 4])))))));
    }
    var_15 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 87782015U)) : (var_6)))))) % (((/* implicit */int) var_4)));
    var_16 = ((/* implicit */unsigned long long int) -1073741823);
}
