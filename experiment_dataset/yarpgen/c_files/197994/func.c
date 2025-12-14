/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197994
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = max((((/* implicit */unsigned int) -38025691)), (((((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))))));
        var_20 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_1])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7)))))) ? (((arr_4 [i_1 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 2]))) : (384410781U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1])))));
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */short) (unsigned short)65535);
        var_21 = (((-(-7LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (short)-2139)) ? (((/* implicit */int) var_14)) : (var_10))) : (((((/* implicit */_Bool) -8404290568582470497LL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)65525))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [13U])) | (((/* implicit */int) arr_1 [i_2] [i_2]))))) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [11LL] [11LL])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3105070109U)) ? (-1923250032) : (((/* implicit */int) (unsigned short)51968))))) ? (min((var_4), (arr_3 [(unsigned char)21] [(unsigned char)21]))) : (((/* implicit */unsigned int) ((-38025701) | (((/* implicit */int) arr_4 [i_2]))))))) : (((((/* implicit */_Bool) 2255169711U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))) : (var_4)))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 38025691))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) var_14))))) ^ (((((2593575985U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [14]))))) ? (((/* implicit */long long int) ((unsigned int) var_2))) : ((~(9223372036854775807LL)))))));
                    arr_16 [13ULL] [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) ^ (4001452849U)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_4 - 1] [i_4]))))) && (((/* implicit */_Bool) var_12))));
                    arr_17 [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((365966235U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */int) var_9)), (var_15))) : (((/* implicit */int) ((-9223372036854775806LL) == (((/* implicit */long long int) 1915817469U)))))));
    var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) 0U)) ? (4294967295U) : (((/* implicit */unsigned int) -38025690))))));
    var_25 = ((/* implicit */int) var_0);
}
