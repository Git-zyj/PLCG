/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25119
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
    var_13 -= max((((((/* implicit */int) var_7)) & (var_9))), (max(((~(((/* implicit */int) (short)17236)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_8)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_11))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [20LL] = arr_5 [i_0] [i_0];
            var_15 = ((/* implicit */long long int) (~(var_5)));
        }
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_5 [i_2] [i_2]))));
            arr_10 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_7 [i_0]))))))) ? (((/* implicit */unsigned long long int) var_1)) : (((var_3) ? (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9591))) : (13804801279416339564ULL)))))));
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                arr_14 [i_2] [i_2] [i_3] &= ((/* implicit */_Bool) max((((arr_0 [i_0]) ? (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_0] [i_2]))) : (((/* implicit */int) ((var_12) >= (var_12)))))), (((((/* implicit */_Bool) -1242988313)) ? (((/* implicit */int) (short)9590)) : (((/* implicit */int) (signed char)-51))))));
                arr_15 [(short)7] [i_2] [i_0] [(short)15] = ((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))));
                var_17 = (+(-4262946775978950631LL));
                arr_16 [i_0] [i_0] = ((/* implicit */long long int) (!(var_4)));
                var_18 = ((/* implicit */unsigned int) var_3);
            }
            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_2]))) + (2300457877U)))) + (((var_10) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))))))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0]))))));
        }
        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))), ((((_Bool)1) ? (((long long int) (signed char)125)) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
        arr_17 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [16LL] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)29)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-32763)))))))) > (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (9223372036854775807LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122)))))) : ((~(var_8)))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((/* implicit */int) (_Bool)0)))))));
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((long long int) 18446744073709551605ULL)))) % (var_2)));
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_6))));
}
