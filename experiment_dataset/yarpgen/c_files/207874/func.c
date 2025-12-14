/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207874
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */long long int) ((((/* implicit */int) ((((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_4))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_2 [i_1]))))))))) - (((((/* implicit */int) ((((/* implicit */_Bool) 4783449900815305224LL)) && (((/* implicit */_Bool) (short)-20649))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (2398568977U))))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_13)) + (30658))) - (17))))) - (((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1])) > (((/* implicit */int) arr_2 [i_0]))))))) != (((((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))) & (((((/* implicit */int) (unsigned short)54021)) ^ (((/* implicit */int) var_6)))))))))));
                arr_5 [(_Bool)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_2 [i_0]))))) && (((((/* implicit */int) arr_3 [(short)13] [i_0] [(unsigned char)1])) != (((/* implicit */int) var_6))))))) | (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */int) ((917089960U) > (3999548612U))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((-2672297013193093487LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) ((var_15) == (((/* implicit */long long int) ((/* implicit */int) var_4))))))))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (var_7)))) != (((/* implicit */int) ((var_7) > (var_8)))))))));
}
