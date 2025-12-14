/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212073
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
    var_19 = ((/* implicit */signed char) 5739779167824245333ULL);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_12)))), (((int) var_3))))) ? (((/* implicit */int) ((_Bool) (~(var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (12706964905885306282ULL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) 12706964905885306282ULL);
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) (signed char)126)) : (1406626908)))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) -1406626933))))) ? (((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) >> (((((/* implicit */int) (short)-27432)) + (27441))))) : (((((/* implicit */int) arr_4 [i_1 - 1] [(short)12] [(signed char)9])) ^ (((((/* implicit */_Bool) 12706964905885306279ULL)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) arr_2 [i_1] [i_1 - 2] [i_1])))))));
                arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1] [i_1 + 2] [i_1 - 3]))))) ? (((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned long long int) var_18))))) ? (((/* implicit */int) arr_2 [i_1] [i_1 + 4] [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)209)) > (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))) : (((/* implicit */int) arr_1 [i_0])));
                arr_7 [i_1] = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_22 = ((/* implicit */int) (signed char)121);
    var_23 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
}
