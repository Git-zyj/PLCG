/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230228
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_0])))));
        var_17 = ((/* implicit */unsigned char) max((((unsigned long long int) (~(65535U)))), (arr_0 [i_0])));
        var_18 *= ((/* implicit */short) 112435386);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] &= ((/* implicit */int) max((arr_5 [i_1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((6880474186811866137ULL) >> (((arr_0 [i_1]) - (8626393023293925803ULL)))))) || (((/* implicit */_Bool) var_11)))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+((+(11566269886897685490ULL))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_7))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1328932094)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((((/* implicit */_Bool) arr_0 [i_2])) ? (6880474186811866127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))))) * (arr_8 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)231)) - (((/* implicit */int) (signed char)(-127 - 1))))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)6209)))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 6880474186811866145ULL)))))));
        var_23 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))));
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-6209))));
        arr_14 [i_3] = ((/* implicit */unsigned char) (!(((arr_9 [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3])))))));
        arr_15 [i_3] = max((((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)60559))))), ((short)0)))), (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3]))))));
    }
    var_24 += ((/* implicit */unsigned short) (+((~(max((((/* implicit */int) var_7)), (var_5)))))));
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (unsigned short)8))));
}
