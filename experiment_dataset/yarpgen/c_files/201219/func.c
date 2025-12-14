/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201219
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
    var_19 = ((/* implicit */unsigned short) (short)32767);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)121)))))) ^ (((((/* implicit */unsigned int) 2147483639)) % (arr_5 [i_1 - 1] [i_1]))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (-6834537833377881477LL))) & (((/* implicit */long long int) arr_3 [i_1 - 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15)) % (((/* implicit */int) (unsigned short)65521))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)-21))))) : (0LL)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))));
    var_21 = ((/* implicit */long long int) (signed char)-22);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (((-8LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-63)))))))) || (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 936721732U)) ? (936721732U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18)))))))));
}
