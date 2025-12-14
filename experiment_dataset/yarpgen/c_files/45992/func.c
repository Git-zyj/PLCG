/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45992
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
    var_18 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-43)))))));
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    var_20 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned short)0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [(unsigned short)4] [i_1]))))))) / ((~(((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)42673))))))));
                arr_7 [i_0] [(signed char)9] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)50755))));
                var_21 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_3 [i_0] [19ULL])))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)85))))) != (arr_2 [11ULL] [i_1 - 4])))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_3 [i_1] [(short)13]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_15 [14ULL] [i_1] [i_2] [i_0] &= ((/* implicit */unsigned long long int) (signed char)105);
                            var_22 = ((/* implicit */short) ((((((/* implicit */int) ((short) (short)-1))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1 + 1] [11ULL] [13ULL]))) != (arr_3 [i_0] [i_1 + 3])))) : (((/* implicit */int) (short)-1))));
                        }
                    } 
                } 
            }
        } 
    } 
}
