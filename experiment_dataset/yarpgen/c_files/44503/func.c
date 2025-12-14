/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44503
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-119)))) ? (((/* implicit */int) ((-7653720857547689557LL) <= (((/* implicit */long long int) -1158885342))))) : (var_8)));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1158885342)) ^ (447517056273426662ULL)))) ? (max((arr_3 [i_0]), (17999227017436124954ULL))) : ((-(var_3)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) 447517056273426662ULL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                arr_11 [i_2] [i_1] = ((/* implicit */unsigned short) ((arr_10 [i_1 + 2] [i_1 + 3] [i_1 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                var_15 = ((/* implicit */long long int) var_3);
                arr_12 [i_1] [i_2] [i_2] [i_3] &= ((/* implicit */unsigned short) arr_8 [i_1 - 1]);
            }
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_14 [i_1 + 3] [i_1 - 1])) : ((-(((/* implicit */int) var_4))))));
                var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            }
            for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_18 *= ((/* implicit */unsigned int) var_7);
                arr_17 [i_1] [i_2] [i_1] = ((/* implicit */long long int) 17999227017436124954ULL);
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_1 - 1] [i_1 + 1])))))));
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                arr_18 [i_1] [i_1] [i_5] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_7 [i_1]))))));
            }
        }
        /* LoopSeq 1 */
        for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            var_21 = ((/* implicit */long long int) 0U);
            var_22 |= ((/* implicit */unsigned short) ((unsigned char) 1ULL));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_1 - 1])))))));
            var_24 ^= ((/* implicit */_Bool) (~(9223372036854775807LL)));
        }
    }
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (unsigned char)237))));
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_3)))) ? (((/* implicit */unsigned int) min((-1158885347), (var_8)))) : (2282895416U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -1158885347)) : (12296144452652153648ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((127ULL) < (18446744073709551606ULL)))))))))));
    var_27 = ((/* implicit */short) var_1);
}
