/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224755
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_6) : ((+(var_10)))))), (((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (var_12)))) : (((((/* implicit */_Bool) var_7)) ? (13573865679711293822ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    var_14 ^= ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0 + 1])))), ((~(13573865679711293828ULL)))))) ? ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) 2097152)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))) : (arr_0 [i_0]))))) : (max((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)22)))))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (2097152) : (((((/* implicit */int) arr_1 [i_0])) & ((+(((/* implicit */int) var_1))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_1])))) ? (((var_12) + (((/* implicit */long long int) arr_0 [i_1 + 1])))) : (((/* implicit */long long int) max((arr_0 [i_1 + 1]), (arr_0 [i_1 - 1]))))));
        var_18 = ((/* implicit */_Bool) max((min((arr_2 [i_1 + 1]), (((/* implicit */unsigned short) (unsigned char)192)))), (arr_2 [i_1 - 1])));
        arr_4 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_2 [i_1 + 1]), (arr_2 [i_1 - 1]))))));
    }
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2 + 1] = ((/* implicit */long long int) arr_6 [i_2]);
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-15763)), (-2097153))))));
            arr_12 [i_2] = ((/* implicit */unsigned char) ((int) arr_2 [(unsigned short)3]));
        }
    }
    var_20 *= ((/* implicit */signed char) ((var_11) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (4872878393998257788ULL) : (((/* implicit */unsigned long long int) 1751664270U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
    var_21 = ((/* implicit */signed char) max((min((((/* implicit */long long int) var_7)), (max((var_9), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) ((((var_11) ? (var_2) : (((/* implicit */int) var_5)))) == (((/* implicit */int) var_7)))))));
}
