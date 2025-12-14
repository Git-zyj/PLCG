/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229107
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50152)) ? (((/* implicit */int) (unsigned short)50147)) : (-2147483638)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)50153)) : (arr_3 [i_0]))) : (arr_3 [i_0 - 1])))) ? (arr_4 [i_2]) : (((/* implicit */int) (unsigned short)0)));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4445103395122594868LL)) ? (((/* implicit */int) (short)32765)) : (-13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (min((((3458764513820540928ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-2406)) + (2147483647))) << (((((((/* implicit */int) var_4)) + (122))) - (11))))))))));
                    arr_6 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (-(arr_0 [i_1])));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)46)) ? (813869897373334765ULL) : (((/* implicit */unsigned long long int) -2147483638)))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((unsigned int) 3458764513820540936ULL)) << ((((~(((/* implicit */int) (unsigned char)248)))) + (252)))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) -160858952)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))), (max((var_6), (((/* implicit */long long int) -1215826063))))))));
    var_14 = ((/* implicit */int) min((var_14), (var_9)));
    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (2147483640)))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) 3961936859952738973LL)) ? (((/* implicit */long long int) 4294967293U)) : (var_2)))))));
}
