/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53205
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
    var_11 = ((/* implicit */unsigned short) (unsigned char)248);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18436))) < (((max((((/* implicit */long long int) (unsigned short)18436)), (-9082212432730742766LL))) >> (((var_3) - (4398760647838668145ULL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_1] [i_0]), (arr_2 [i_0] [i_1])))))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47099)) || (((((/* implicit */_Bool) (unsigned short)18436)) && (((/* implicit */_Bool) 15000305453414333576ULL))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(3446438620295218039ULL))) / (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [15ULL] [15ULL]))))))) ? (arr_0 [(unsigned char)18]) : (((-2415782283292954739LL) / (((/* implicit */long long int) 2113739267))))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18436)) ? (((/* implicit */long long int) ((int) (~(var_5))))) : (arr_0 [i_0])));
                arr_6 [i_0] [i_0] [(unsigned char)19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((int) (-(((/* implicit */int) (unsigned short)26859)))))) : (arr_5 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_1))))))), (((var_6) / (var_5)))));
}
