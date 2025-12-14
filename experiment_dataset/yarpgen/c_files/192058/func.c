/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192058
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
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (max((var_7), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) var_14);
                        arr_9 [i_0] = ((/* implicit */short) (+((~(((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32760))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_9)))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_4]) : (((/* implicit */unsigned long long int) var_12))));
        arr_12 [i_4] [i_4] = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_8)) <= (((/* implicit */int) var_9))))));
        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2))));
    }
}
