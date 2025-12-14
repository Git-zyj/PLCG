/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246206
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
    var_11 = ((/* implicit */signed char) ((unsigned int) var_3));
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -630956565)) : (-1097997936982915447LL))), (((/* implicit */long long int) var_8))))), (max((((((/* implicit */_Bool) -8261024697317911149LL)) ? (18332957413717908746ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (+(758349935))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 |= ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_1 [i_0] [i_1])), (((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_2 [i_1])))))), (((/* implicit */int) ((unsigned short) 5781747553897795381LL)))));
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483638)) ? (arr_7 [i_0] [i_0 + 2] [i_0]) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)48685)) > (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */unsigned long long int) min((arr_4 [i_0] [11LL]), (((/* implicit */unsigned int) (_Bool)1))))) & (arr_3 [i_0])))));
                    var_14 = ((/* implicit */unsigned short) min((-9223372036854775801LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [(unsigned short)2] [i_0]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */int) (signed char)-127)) | (arr_7 [i_0] [i_1] [i_2]))) : (((((/* implicit */int) (signed char)-53)) | (arr_7 [i_1] [i_1] [i_0]))))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */int) (unsigned char)44);
                    arr_10 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2] [i_1])) | (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((~(arr_6 [i_1]))) : (arr_6 [i_0 + 2])))), ((-(max((((/* implicit */unsigned long long int) arr_7 [i_2] [(_Bool)1] [i_0])), (arr_3 [i_0])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_4)) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-8290691170339122428LL) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)88)), (1935055403)))) : (((((/* implicit */_Bool) 12224816700467153668ULL)) ? (724732694295613435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59355))))))))))));
    var_16 += ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-77)), ((unsigned short)0)));
}
