/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30081
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
    var_12 |= ((/* implicit */unsigned char) 2U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((((/* implicit */int) (short)-32757)), (min((arr_1 [i_0]), (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (((((~(((/* implicit */int) ((-724039428) <= (((/* implicit */int) (_Bool)1))))))) + (2147483647))) << ((((~(arr_0 [i_3]))) - (4332281887645308411ULL))))))));
                            arr_8 [6U] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)44610))))) : (arr_6 [(_Bool)1] [i_1] [5])));
                            var_15 = ((/* implicit */signed char) (-((+(min((arr_0 [2]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_2]))))))));
                            var_16 *= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) min((arr_5 [i_3] [i_2] [(unsigned char)1] [i_0]), (((/* implicit */long long int) var_6))))))));
                            var_17 = ((/* implicit */_Bool) min((((((/* implicit */int) (short)6222)) % (((/* implicit */int) (unsigned short)301)))), (((/* implicit */int) (unsigned short)44610))));
                        }
                    } 
                } 
                var_18 &= ((/* implicit */unsigned long long int) (short)8870);
                arr_9 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_1])));
                var_19 |= ((/* implicit */unsigned short) ((int) arr_1 [i_1]));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_11)))))), ((-(((868341865U) >> (((var_3) - (2895821992U)))))))));
}
