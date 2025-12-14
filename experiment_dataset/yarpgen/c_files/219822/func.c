/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219822
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
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [19ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)36549)))) ^ (((/* implicit */int) max((var_8), (var_8))))))) != (min((2367691063656233793ULL), (((/* implicit */unsigned long long int) 308333623))))));
        arr_4 [i_0] = ((/* implicit */int) max((((((var_16) || (((/* implicit */_Bool) 308333617)))) ? (3880063228042939682LL) : (((/* implicit */long long int) min((var_14), (-1846268209)))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58661)) - (((/* implicit */int) (!(((/* implicit */_Bool) -308333614))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */int) (unsigned short)58661)) != (((/* implicit */int) var_6))))) / ((~((-2147483647 - 1)))))), (((/* implicit */int) (_Bool)1))));
    }
    for (short i_1 = 4; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((var_10) == (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_2)))) ? (((unsigned long long int) (unsigned short)496)) : (min((18015190362878881423ULL), (((/* implicit */unsigned long long int) var_4))))))));
        var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 659174258))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-93))))) | (max((var_1), (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    }
    var_20 = ((/* implicit */_Bool) ((long long int) 16079053010053317816ULL));
    var_21 = ((/* implicit */unsigned short) max((max((((((/* implicit */int) (signed char)1)) / (((/* implicit */int) (unsigned short)65512)))), ((-2147483647 - 1)))), (((int) (-(((/* implicit */int) var_0)))))));
}
