/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50663
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -860834571))))), (((((/* implicit */_Bool) var_0)) ? (-3324037440501499111LL) : (((/* implicit */long long int) var_3))))))) ? (min((min((((/* implicit */int) arr_3 [i_0] [(_Bool)1])), (883294139))), (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 2])))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0 - 1]))));
                    var_11 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) -4070580275396429031LL)), ((~(arr_4 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_0 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0 - 2] [i_1] [(unsigned short)16] [i_0] [i_4] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned int) var_5));
                                var_12 = ((/* implicit */long long int) (unsigned short)9988);
                                var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(-4352441048959356632LL)))))) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_0] [i_0] [i_0])) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (min((arr_1 [i_1]), (((/* implicit */unsigned int) -883294154))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (+(((var_9) ? ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11467))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)222)), (-883294121))))))));
}
