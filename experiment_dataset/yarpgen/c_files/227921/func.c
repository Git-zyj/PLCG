/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227921
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
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_2 - 1]);
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)26843)), (-6128792379809091151LL)))) ? ((-(((/* implicit */int) arr_4 [i_0] [i_2])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0 + 1])) : (var_0))))))));
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) 1769521975)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)38719)));
    var_20 *= ((/* implicit */signed char) (unsigned char)214);
    var_21 = ((/* implicit */long long int) var_0);
    var_22 ^= (+(var_3));
}
