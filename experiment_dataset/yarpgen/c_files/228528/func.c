/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228528
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned short) var_17)), (((/* implicit */unsigned short) min(((short)-3213), (((/* implicit */short) var_8)))))))) && (((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned int) var_14)) < (var_10)))), ((short)18050)))))))));
    var_19 &= ((/* implicit */_Bool) max((max((((((/* implicit */long long int) var_16)) / (4758381059488907832LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (0U)))))), (((/* implicit */long long int) var_4))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_20 += min(((~(((/* implicit */int) (signed char)102)))), (((/* implicit */int) (((~(((/* implicit */int) arr_2 [i_0 - 2])))) == (((/* implicit */int) arr_2 [i_0 + 2]))))));
        var_21 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-11627))))) || (((/* implicit */_Bool) min(((short)-20155), (((/* implicit */short) arr_1 [i_0]))))))) ? (((/* implicit */int) max((min(((unsigned char)71), (((/* implicit */unsigned char) arr_1 [i_0])))), (((/* implicit */unsigned char) arr_1 [i_0 + 3]))))) : (min(((+(((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) arr_2 [i_0])), (arr_0 [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) arr_1 [i_0]);
            var_23 += ((/* implicit */int) arr_2 [i_1]);
        }
        for (short i_2 = 4; i_2 < 12; i_2 += 1) 
        {
            var_24 = ((/* implicit */short) ((min((arr_6 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2]))) != (1958658271U)))))) <= (min((max((arr_6 [i_0] [i_2 - 4]), (((/* implicit */long long int) arr_3 [i_0] [i_2] [i_2 - 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_3 [i_2 - 3] [i_2] [i_0])))))))));
            var_25 += ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) (short)-3200)))), (((/* implicit */int) arr_2 [(unsigned short)10])))) << (((((((((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0])) >= (((/* implicit */int) (signed char)90)))) ? ((~(134217727LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [(_Bool)1]), (arr_4 [0U]))))))) + (134217740LL)))));
        }
    }
    var_26 = ((/* implicit */unsigned int) ((7983079123758343457LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
}
