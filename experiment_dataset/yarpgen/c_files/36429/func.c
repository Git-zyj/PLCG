/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36429
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
    var_10 = ((/* implicit */_Bool) (unsigned short)0);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) < (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_6)) : (max((max((1596262842), (((/* implicit */int) (unsigned short)54903)))), (var_8)))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) ((long long int) var_5))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : ((~(arr_1 [i_1])))));
        arr_9 [i_1] = ((((/* implicit */int) arr_5 [i_1])) << ((((-(((/* implicit */int) arr_6 [i_1] [i_1])))) + (95))));
        arr_10 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65530))));
        arr_11 [i_1] = ((/* implicit */int) (+(8086574576026484720ULL)));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */short) var_7)), ((short)32756))));
        arr_16 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((10360169497683066895ULL) ^ (((/* implicit */unsigned long long int) 2147483647))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2])))))) : (((unsigned int) ((((-1596262830) + (2147483647))) >> (((((/* implicit */int) arr_7 [(unsigned short)3])) - (36160))))))));
        arr_17 [i_2] [i_2] = ((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) (short)-29930)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2])))))))) : (((((-1470214506) + (2147483647))) << (((((((((/* implicit */_Bool) 4177482327U)) ? (((/* implicit */int) (short)-29930)) : (((/* implicit */int) (short)29929)))) + (29960))) - (30))))));
    }
}
