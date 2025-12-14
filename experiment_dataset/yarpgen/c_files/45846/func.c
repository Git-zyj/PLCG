/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45846
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
    var_10 &= ((/* implicit */short) var_1);
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) 503316480U))));
        arr_3 [i_0] = ((/* implicit */short) (unsigned short)52142);
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (unsigned short)13394);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (~(arr_1 [i_1])));
        arr_8 [i_1] = ((/* implicit */long long int) max((min((arr_5 [i_1]), (((int) arr_2 [i_1])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-1212994057977094290LL))))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned char) arr_12 [i_2]);
        arr_13 [1LL] [i_2] = ((/* implicit */unsigned short) arr_5 [i_2]);
        var_14 = ((/* implicit */unsigned int) max((864871118), (((arr_2 [i_2]) ^ (arr_2 [i_2])))));
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 864871111)))))));
    }
    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
}
