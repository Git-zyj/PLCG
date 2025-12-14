/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28589
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [(short)16] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((2147483647) - (2147483621)))));
                    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1]))) != (((/* implicit */int) (!(((/* implicit */_Bool) 1242127443755850794LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_1] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (min(((+(4175015727529880058ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)1139)))))))));
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((long long int) (unsigned short)28648)) < (arr_3 [i_0] [i_1] [i_1]))))) & (((var_1) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_1]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), ((((-(var_12))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)22385), (((/* implicit */unsigned short) (_Bool)1))))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_13))));
    var_17 = ((/* implicit */signed char) 4175015727529880058ULL);
}
