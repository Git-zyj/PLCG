/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243485
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
    for (long long int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1])))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1])))) : (((((/* implicit */int) (unsigned char)143)) - (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (unsigned char)222)))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_20 *= ((unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1] [i_1]))) ? (((/* implicit */int) (unsigned short)26081)) : (((/* implicit */int) max(((unsigned short)65442), (((/* implicit */unsigned short) (_Bool)1)))))));
        var_21 *= (!(((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) 3068643645U)), (arr_6 [i_1]))))));
        var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(14315084061807639088ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [3LL]))))) || (((/* implicit */_Bool) arr_0 [i_1]))))) : ((-(((/* implicit */int) arr_2 [i_1]))))));
    }
    for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        arr_10 [(unsigned char)3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)222))));
        var_23 = ((/* implicit */_Bool) (unsigned char)254);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        arr_15 [i_3] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_3 - 1])) ? (((((/* implicit */_Bool) arr_4 [4U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_3]))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((/* implicit */int) (unsigned char)1))))) ? (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) arr_3 [i_3] [i_3]))));
        var_25 = ((unsigned char) (unsigned char)241);
        arr_16 [i_3] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)165))))));
    }
    var_26 = var_14;
}
