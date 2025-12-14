/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228538
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
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((2147483647), (arr_0 [i_1] [i_0])))) && ((!(((/* implicit */_Bool) var_0)))))))) % (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-5942)) + (2147483647))) << (((((((/* implicit */int) (short)-11066)) + (11077))) - (11)))))) ? (arr_5 [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_1])))));
                var_16 -= (+(((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_1 [i_0 - 1]))))));
            }
        } 
    } 
    var_17 = max(((~(((/* implicit */int) (short)-5942)))), (((/* implicit */int) (signed char)-50)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) (-((~(((/* implicit */int) ((signed char) 3976266673U)))))));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((((((/* implicit */int) arr_13 [i_5] [i_4 - 1] [12U] [i_2])) + (2147483647))) >> (((((/* implicit */int) (signed char)50)) - (37))))) >> (((((/* implicit */int) (short)5941)) - (5937))))) : (((/* implicit */int) ((signed char) ((var_0) / (((/* implicit */int) var_10))))))));
                            var_20 = (+(((/* implicit */int) (signed char)50)));
                            arr_17 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((signed char)65), (((/* implicit */signed char) arr_11 [i_3]))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-5942)) : (((/* implicit */int) arr_11 [i_3]))))))) ? ((~(((/* implicit */int) max(((signed char)50), ((signed char)-90)))))) : (((/* implicit */int) arr_15 [i_5] [i_4 - 1] [i_3] [i_2]))));
                            arr_18 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((_Bool) ((arr_14 [i_4] [i_4 + 4] [i_4 - 1] [i_4 + 1] [i_4 + 3] [i_4 + 1]) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_6 [(short)14])))))));
                        }
                    } 
                } 
                arr_19 [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(unsigned char)0] [(unsigned char)0]))))) ? (((int) (signed char)50)) : (((/* implicit */int) (unsigned short)11074)));
            }
        } 
    } 
}
