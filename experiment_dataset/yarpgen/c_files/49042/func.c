/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49042
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
    var_18 ^= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) -1500525829)) ? (((/* implicit */int) (short)16356)) : (-1562283831))));
    var_19 &= ((/* implicit */signed char) max((((/* implicit */int) var_3)), (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)231)))), (((/* implicit */int) ((-1342910201) >= (((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_4 [2] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-18955))))) : (((arr_0 [i_0] [(_Bool)1]) >> (((/* implicit */int) var_10))))))));
        var_20 = (~(((((/* implicit */int) ((unsigned char) (_Bool)1))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        arr_5 [(signed char)8] [i_0] = ((/* implicit */short) min(((+(((((/* implicit */int) (short)-32748)) | (((/* implicit */int) (short)-19708)))))), (((/* implicit */int) (signed char)11))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_0))))));
        arr_9 [i_1] [i_1] = min((((((/* implicit */int) max((((/* implicit */short) (unsigned char)210)), ((short)-15239)))) << (((min((-4213704139656607494LL), (((/* implicit */long long int) -1562283831)))) + (4213704139656607505LL))))), (((/* implicit */int) (short)-25633)));
        var_21 *= ((/* implicit */unsigned long long int) ((short) ((min((6291456), (((/* implicit */int) (signed char)7)))) | (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))));
        arr_10 [i_1] = ((/* implicit */_Bool) (~(((((4213704139656607463LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))))) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (-878086835)))))));
    }
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */_Bool) var_9)) ? (536870912ULL) : (((/* implicit */unsigned long long int) 4213704139656607476LL)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44))))))))))));
    var_23 = ((/* implicit */unsigned short) var_8);
}
