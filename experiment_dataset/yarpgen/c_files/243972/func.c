/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243972
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (unsigned char)14)))))) : (((12559630208746193534ULL) ^ (13581814094242385477ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((((+(16917533325330218804ULL))) << (((((var_0) - (((/* implicit */unsigned long long int) var_6)))) - (8402812474571681198ULL))))));
    var_17 = ((/* implicit */short) var_8);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13581814094242385477ULL)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((-735796638) + (2147483647))) << (((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)2829))))) * (((/* implicit */int) var_15)))))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 ^= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_15)) : (var_12))), (((((/* implicit */_Bool) (short)27365)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (unsigned char)46))))))) ? (((max((var_0), (((/* implicit */unsigned long long int) var_9)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_4))))))) : (max((((/* implicit */unsigned long long int) (~(524287)))), (((((/* implicit */_Bool) var_2)) ? (7912073530691422521ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)17]))))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4864929979467166158ULL)) ? (((/* implicit */int) arr_3 [i_0] [10ULL])) : (((/* implicit */int) (unsigned char)46)))), (((/* implicit */int) (unsigned char)139))))) ? (max((18446744073709551595ULL), (((/* implicit */unsigned long long int) (short)32481)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551595ULL))))));
                var_21 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)40427)) ? (((/* implicit */int) (short)13091)) : (((/* implicit */int) (unsigned char)159)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)14)) : (var_8)))));
            }
        } 
    } 
}
