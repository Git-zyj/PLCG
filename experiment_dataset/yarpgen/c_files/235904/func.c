/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235904
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
    var_18 = ((/* implicit */short) (-(((max((2153254841U), (((/* implicit */unsigned int) var_1)))) >> (((((/* implicit */int) var_13)) + (28189)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 |= ((/* implicit */signed char) (_Bool)0);
        var_20 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (short)1))));
        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (min((2153254841U), (1287212014U)))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15944967236270104258ULL)) ? (min((13114418835939380450ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-83)) + (2147483647))) >> (((((/* implicit */int) (signed char)-1)) + (13))))))))) ? (5682917277246606005LL) : (((/* implicit */long long int) 2384114218U))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) max((-560845326632542702LL), (((/* implicit */long long int) (short)25441))))) ? (((/* implicit */int) ((((/* implicit */int) (short)63)) < (((/* implicit */int) (short)-14))))) : (((/* implicit */int) ((-7097650836484593105LL) > (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) : (((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
        {
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 560845326632542718LL)) ? (((/* implicit */unsigned long long int) -1667728095594065862LL)) : (((unsigned long long int) (~(((/* implicit */int) (short)32767)))))));
                var_25 = ((/* implicit */unsigned char) 1287212013U);
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2 + 1])) ? (max((arr_5 [i_1 + 2] [i_2 + 1]), (((/* implicit */unsigned long long int) (short)4080)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_2 - 1])))));
                var_27 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) max(((short)(-32767 - 1)), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (var_13))))) > (3007755281U)))))))));
    var_29 = min((((/* implicit */long long int) 3728951139U)), (min((((/* implicit */long long int) var_9)), (560845326632542732LL))));
}
