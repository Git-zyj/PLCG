/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231426
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
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2)))) ? (((((/* implicit */int) max(((short)-11500), ((short)11490)))) | (((/* implicit */int) (short)-11500)))) : (((((/* implicit */_Bool) ((short) var_0))) ? (var_7) : (((/* implicit */int) var_0)))))))));
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-11500))) ? (((/* implicit */int) (unsigned short)30038)) : (min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (short)9139))))))));
                var_12 = ((/* implicit */unsigned short) var_8);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)13))) && (((/* implicit */_Bool) ((unsigned int) var_9)))));
                            arr_10 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0 + 1] = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) 9819865485260354678ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20))) : (6323591414774062852LL)))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned int) ((signed char) (~(var_6))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            for (int i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)18)), (6323591414774062827LL))))))) : ((-(((((/* implicit */_Bool) 4523917119182435497ULL)) ? (var_6) : (((/* implicit */int) (signed char)-24))))))));
                    arr_18 [i_4] [i_5 - 1] [i_6 - 1] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_5))))));
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15423))) : (var_2))))))));
                                arr_25 [i_4] [i_4] [i_4] [i_5 + 2] [i_6 + 1] [i_7 - 2] [i_8 + 2] = ((/* implicit */short) min((((unsigned short) min((var_9), (((/* implicit */int) var_8))))), (((/* implicit */unsigned short) ((short) (unsigned short)65528)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
