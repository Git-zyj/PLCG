/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216330
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)146);
        arr_3 [i_0] = ((/* implicit */_Bool) var_2);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            var_11 = (~(min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)146)))), (((5914117849202730557ULL) << (((var_4) - (3505575287U))))))));
            var_12 = ((/* implicit */unsigned char) min((63488U), (3004534365U)));
        }
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_1] [i_1])), (var_0)))), (12ULL)))) ? (((18446744073709551588ULL) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_1])), (-1207435905)))))) : (((18446744073709551603ULL) >> (((/* implicit */int) arr_1 [i_1]))))));
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((arr_1 [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((arr_0 [i_3] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) : (18446744073709551600ULL))), (((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1207435892)) ? (((/* implicit */int) (signed char)112)) : (1207435892)));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 1) 
        {
            {
                arr_18 [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) (+(min((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))) == (18446744073709551577ULL))))))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_13 [i_4 + 1])) : (((/* implicit */int) arr_13 [i_4 + 1])))) / (((/* implicit */int) min((((/* implicit */unsigned char) arr_14 [i_4] [i_4 + 1])), ((unsigned char)238)))))))));
            }
        } 
    } 
}
