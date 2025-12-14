/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54040
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) ((unsigned short) (_Bool)1))) + (((/* implicit */int) ((short) 17700404839382759971ULL)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)48))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2715515347654226362LL)) ? (((/* implicit */int) (unsigned short)7884)) : (((/* implicit */int) ((signed char) 746339234326791636ULL)))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 746339234326791654ULL))) ? (((/* implicit */unsigned long long int) 8812107637838594795LL)) : (((746339234326791672ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2431)))))));
            var_17 = ((/* implicit */unsigned short) (-((-(0U)))));
        }
        for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65533))));
            var_19 = ((/* implicit */signed char) (+((~(((/* implicit */int) (_Bool)1))))));
            arr_12 [i_1] [i_3] = ((/* implicit */signed char) (((+(8812107637838594814LL))) <= (((8812107637838594814LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-114)))))));
        }
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            arr_16 [i_1 - 1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (short)25701)) - (((/* implicit */int) (signed char)-1))))) + (((long long int) 4294967295U))));
            arr_17 [i_1] [i_4] [i_4] = ((/* implicit */signed char) ((8812107637838594814LL) >= (((-8812107637838594796LL) - (-1713495686276151384LL)))));
        }
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967295U)), (-5947786476825239825LL)))) ? (((/* implicit */int) ((unsigned char) 4294967274U))) : (((/* implicit */int) (((_Bool)1) && ((_Bool)1))))))) ? (((((((/* implicit */_Bool) (signed char)6)) ? (0ULL) : (((/* implicit */unsigned long long int) 70368744177663LL)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)53156)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned short)2), ((unsigned short)37861)))))))));
    var_21 = ((/* implicit */long long int) (signed char)-29);
}
