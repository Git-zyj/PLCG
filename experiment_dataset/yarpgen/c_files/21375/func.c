/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21375
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */signed char) (!((!(((/* implicit */_Bool) -8952333927100595480LL))))))), (arr_2 [1] [i_1])));
                    arr_9 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 8952333927100595460LL)) ? (288230376151709696ULL) : (((/* implicit */unsigned long long int) 8952333927100595479LL))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_7)) > (((var_6) - (((/* implicit */long long int) (+(var_10))))))));
}
