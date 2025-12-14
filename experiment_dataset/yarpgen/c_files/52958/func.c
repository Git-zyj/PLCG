/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52958
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
    var_13 = ((/* implicit */unsigned long long int) var_2);
    var_14 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 &= ((/* implicit */unsigned short) var_11);
                    arr_8 [i_0] [i_1] [i_2] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */int) (!(((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)0))))))) <= (min((var_7), (((/* implicit */int) (signed char)73))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) var_6)))));
                                arr_16 [i_3] [i_1] [i_2] [2LL] [i_3] = ((/* implicit */int) ((unsigned short) ((unsigned char) var_10)));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_2)) ? (-9223372036854775798LL) : (var_11)))))));
                                var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (~(3777766963U)))) ? ((~(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) (short)(-32767 - 1))))))));
                                var_19 = ((/* implicit */short) (+(var_0)));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-52)) & (698829517)))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((unsigned int) 1380421496))))));
                    arr_18 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)240))));
                }
            } 
        } 
    } 
}
