/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225882
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
    var_19 &= ((/* implicit */int) var_9);
    var_20 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)24058)) >= (((/* implicit */int) var_1))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) < (2147483647U)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_21 = ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_11)) <= (var_6))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)9)), ((short)7)))) : ((+(((/* implicit */int) (_Bool)1))))))) <= (min((arr_1 [i_0] [i_1 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) == (18446744073709551604ULL)))))));
                var_22 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0]))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) var_13);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) -1));
    var_24 = var_14;
}
