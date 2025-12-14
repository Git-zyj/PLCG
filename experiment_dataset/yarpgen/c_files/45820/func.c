/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45820
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
    var_18 = ((/* implicit */long long int) var_9);
    var_19 = 16850476882930368527ULL;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) (short)4420)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19694))) <= (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                                arr_14 [i_4] [i_3] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_13))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 450792546U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) + (((arr_12 [(unsigned short)14] [i_1] [(unsigned short)6] [i_3] [10ULL]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_20 = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (unsigned char)55);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) var_10)) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_1)))))))))));
}
