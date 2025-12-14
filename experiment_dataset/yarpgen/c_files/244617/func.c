/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244617
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [13U])))) == (((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (arr_0 [11LL])))))), (((((/* implicit */_Bool) 7140904437409574563LL)) ? (arr_1 [i_0]) : (1084992913U)))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65531)) || (((/* implicit */_Bool) (signed char)0)))) ? (arr_5 [i_1 + 2]) : (((arr_5 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        var_17 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (unsigned short)65532)))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) 1850472400);
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65519)) | (((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2 + 1] [i_2])) ^ (((/* implicit */int) (unsigned short)65517))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65501)) >> (((7936U) - (7905U)))))) : (((arr_6 [i_2 + 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519)))))));
    }
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
    var_21 = ((/* implicit */int) ((3209974383U) != (((/* implicit */unsigned int) ((((var_10) + (2147483647))) << (((((/* implicit */int) var_12)) - (143))))))));
}
