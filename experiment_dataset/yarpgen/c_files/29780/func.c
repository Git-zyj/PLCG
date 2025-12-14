/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29780
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)7)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7709291273599664515ULL)))) ? (((((/* implicit */unsigned long long int) var_9)) + (var_5))) : (((10737452800109887100ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39239))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_1] &= ((((/* implicit */_Bool) (unsigned char)179)) ? (arr_1 [i_0] [i_1]) : (3555111329300567046ULL));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-1824))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((12648583853492219334ULL), (((/* implicit */unsigned long long int) var_11))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) 14638328323544181176ULL);
        arr_13 [(signed char)8] |= 1180077431U;
        arr_14 [i_2] = ((/* implicit */short) (-(20U)));
    }
    var_18 = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 202121049108793753LL))))))));
    var_19 = ((/* implicit */unsigned char) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) var_12))));
    var_20 = ((/* implicit */short) ((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(1615174352U))))))))));
}
