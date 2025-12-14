/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25082
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
    var_10 = ((/* implicit */unsigned short) var_7);
    var_11 = ((/* implicit */unsigned int) 297431323);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_12 ^= arr_0 [i_0];
        arr_3 [i_0 - 1] [i_0 + 3] = ((/* implicit */short) (~((~(((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)1))))))));
        var_13 &= ((/* implicit */unsigned int) ((var_8) & (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (arr_1 [13ULL]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_0)))))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (((unsigned int) arr_6 [21])))));
        var_14 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_6 [i_1])) & (((/* implicit */int) (_Bool)1)))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) var_4)) | (((/* implicit */int) (_Bool)1)))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -297431322)) ? (((-1461054017) - ((-(((/* implicit */int) var_6)))))) : (min((((/* implicit */int) ((((/* implicit */int) arr_4 [(unsigned short)6])) == (((/* implicit */int) (_Bool)1))))), (297431314)))));
        arr_9 [i_1] [i_1] = max((min(((-(((/* implicit */int) arr_6 [i_1])))), ((+(((/* implicit */int) arr_4 [i_1])))))), ((+(((/* implicit */int) var_5)))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) var_7);
                var_16 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_2])) || (((/* implicit */_Bool) arr_15 [i_2])))) && ((!(((/* implicit */_Bool) arr_15 [i_2]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((2147483647) - (((/* implicit */int) (_Bool)1))))) - ((((_Bool)1) ? (-3643561890781288319LL) : (((/* implicit */long long int) 297431324)))))), (((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (unsigned short)8035)))))))));
}
