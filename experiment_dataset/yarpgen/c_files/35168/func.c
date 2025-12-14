/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35168
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((min((var_1), (((/* implicit */int) (unsigned char)240)))), (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_4)))))))), (min((min((((/* implicit */unsigned int) var_3)), (var_14))), (((/* implicit */unsigned int) min((var_4), (((/* implicit */short) var_3)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) max((var_15), (((/* implicit */long long int) arr_0 [i_0] [i_1]))))), (max((var_6), (((/* implicit */unsigned long long int) (unsigned short)0)))))), (min((max((((/* implicit */unsigned long long int) (unsigned short)52606)), (var_13))), (((/* implicit */unsigned long long int) max(((unsigned short)115), (arr_1 [i_1]))))))));
                var_19 = ((/* implicit */long long int) min((var_19), (min((max((max((((/* implicit */long long int) (unsigned short)22385)), (-3158917709546890469LL))), (min((((/* implicit */long long int) (unsigned short)0)), (-1316655596858132111LL))))), (max((((/* implicit */long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)(-32767 - 1)))))), (max((-4719702690334819759LL), (((/* implicit */long long int) arr_2 [i_0] [i_1 - 2]))))))))));
            }
        } 
    } 
}
