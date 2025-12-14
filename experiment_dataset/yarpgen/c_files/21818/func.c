/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21818
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-26456)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-40))))))));
                var_14 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
                var_15 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) | (arr_2 [i_0])));
                var_16 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_3 - 1] [i_3])) * (((/* implicit */int) arr_1 [6ULL])))), (((/* implicit */int) arr_8 [i_3] [i_1] [i_1]))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26456)) ? (((/* implicit */int) (short)-18150)) : (((/* implicit */int) (short)18150))))) ? (((/* implicit */int) (short)-26456)) : (((int) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0]))))));
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 510449651U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [7])) : (((/* implicit */int) (unsigned char)0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8576)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_6 [i_3] [i_0] [i_0] [i_0])))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)19)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_6) ? (((((/* implicit */_Bool) (unsigned short)8576)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_6)))));
    var_21 = ((/* implicit */unsigned int) (signed char)-57);
}
