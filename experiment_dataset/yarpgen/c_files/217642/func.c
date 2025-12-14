/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217642
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
    var_10 = ((/* implicit */int) (-(((9056671141738669600ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33368)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2LL] [(signed char)23]))) : (var_4))) == (((/* implicit */unsigned long long int) 255LL))));
        arr_4 [i_0 - 1] = ((/* implicit */short) (+(1779777302U)));
        var_12 = (~(((/* implicit */int) ((unsigned short) arr_0 [11]))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            {
                var_13 += ((/* implicit */int) min(((+(2515189998U))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 1]))) > ((-(255LL))))))));
                var_14 = ((/* implicit */unsigned short) max(((+(min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_2])), (var_7))))), (((/* implicit */unsigned long long int) (~(max((((/* implicit */int) (_Bool)0)), (234881024))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((((/* implicit */int) var_8)), (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (-471401183128726955LL)))), ((-2147483647 - 1))))));
    var_16 = ((/* implicit */int) var_5);
}
