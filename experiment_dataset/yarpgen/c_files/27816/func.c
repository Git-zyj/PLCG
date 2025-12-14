/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27816
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((-(1977461993706914550LL))) / (((/* implicit */long long int) ((/* implicit */int) ((short) ((7ULL) & (((/* implicit */unsigned long long int) 1103592084142553429LL)))))))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2213662703U) << (((18446744073709551609ULL) - (18446744073709551590ULL)))))) ? (((((/* implicit */_Bool) 3824198583U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (signed char)25);
        var_13 = (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)6))))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            var_14 = ((/* implicit */long long int) var_2);
            arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 1])) ? (((((/* implicit */_Bool) 11112271941286346205ULL)) ? (((/* implicit */int) (short)-2173)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)24615))));
            var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1508615159U)) ? (((((/* implicit */_Bool) (short)10696)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6))) : (((/* implicit */long long int) arr_10 [i_1 - 1] [i_1 - 1]))));
            arr_15 [i_1] = ((/* implicit */unsigned int) arr_7 [i_2 + 2]);
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2786352136U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1]))) : (1508615159U)));
        }
    }
    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        arr_18 [i_3] [i_3 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)51)) || (((/* implicit */_Bool) (unsigned char)0)))) || (((/* implicit */_Bool) arr_17 [i_3 + 1]))));
        var_17 -= ((/* implicit */signed char) (short)-8642);
        arr_19 [i_3] = arr_16 [i_3];
    }
    var_18 = ((/* implicit */_Bool) (-(7404088101371014867ULL)));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_23 [i_4] = 7597934721033489037LL;
        var_19 = ((/* implicit */unsigned int) 15762772674758692017ULL);
    }
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (var_4) : (0ULL))), (18446744073709551609ULL)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) 3710015090U)) : (var_1))))))))));
}
