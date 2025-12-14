/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224873
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_13), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) var_10)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_6)))))))) : (min((min((var_8), (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_7)) ? (var_3) : (var_12))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_15 -= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), (min((arr_1 [i_0]), (arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_16 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */unsigned short) arr_3 [i_1]))))) : ((+(((/* implicit */int) arr_4 [i_1])))))), (((/* implicit */int) max((min((((/* implicit */unsigned short) arr_4 [i_1])), (arr_5 [i_1]))), (((/* implicit */unsigned short) min(((short)-256), (((/* implicit */short) (signed char)-45))))))))));
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_1])), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))))) ? (((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */unsigned short) arr_4 [i_1]))))) : (min((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (_Bool)1)) : (491520)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min(((-(((/* implicit */int) arr_7 [i_2])))), (min((min((((/* implicit */int) arr_7 [i_2])), (arr_8 [i_2]))), (((/* implicit */int) arr_7 [i_2])))))))));
        var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((min((20), (((/* implicit */int) (signed char)72)))), (max((20), (20)))))), (((((/* implicit */_Bool) min((arr_8 [i_2]), (((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (min((35184372072448ULL), (((/* implicit */unsigned long long int) 56047150))))))));
    }
    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) (~(2147483628)))) : (min((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned int) 20)) : (4294967295U))), (max((var_1), (((/* implicit */unsigned int) var_3))))))));
}
