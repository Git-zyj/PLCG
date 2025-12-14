/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24345
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
    var_19 = min((((/* implicit */int) (_Bool)1)), ((~(min((var_3), (((/* implicit */int) (unsigned char)10)))))));
    var_20 = ((/* implicit */signed char) var_14);
    var_21 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)6] &= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((508254408U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))), (min((((/* implicit */unsigned int) (short)0)), (var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 268435455))))))));
                var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */long long int) (unsigned short)56392)), (-7476658428535127011LL))))), (((/* implicit */long long int) min((var_3), (((/* implicit */int) ((((/* implicit */_Bool) 3979015962383160476LL)) && (((/* implicit */_Bool) (short)-4))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_23 *= ((/* implicit */signed char) (+(3786712871U)));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
                    var_24 = ((/* implicit */long long int) (unsigned short)7022);
                }
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (short)-20))))));
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) -7005469427338525494LL);
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_7);
}
