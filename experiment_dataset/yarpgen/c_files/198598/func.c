/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198598
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
    var_17 = ((/* implicit */signed char) (+((((((-(((/* implicit */int) var_15)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)-10)) ? (593213309U) : (1582845239U))))) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1])))))));
                arr_7 [(signed char)5] = ((/* implicit */unsigned char) 4294967295U);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (unsigned int i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            {
                arr_13 [i_2] [(_Bool)1] [i_2] = (-(((((0U) == (var_5))) ? ((-(((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_2] [(_Bool)1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))))) / (1979068644339422128ULL)));
                            var_20 = ((/* implicit */int) min(((+((+((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((arr_14 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10209))) : (var_1))))));
                        }
                    } 
                } 
                arr_18 [(short)0] [i_3] &= ((arr_15 [i_2] [i_2] [(_Bool)1]) ? (arr_10 [0]) : (((/* implicit */int) ((max((-358587395366607098LL), (((/* implicit */long long int) arr_14 [i_2])))) != (((/* implicit */long long int) 954504915U))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (_Bool)1);
}
