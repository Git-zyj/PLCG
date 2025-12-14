/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211526
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
    var_17 += min((((/* implicit */unsigned short) (unsigned char)16)), (var_0));
    var_18 = ((/* implicit */_Bool) var_3);
    var_19 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [(short)2]))));
        arr_2 [7LL] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 1) /* same iter space */
    {
        arr_5 [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)22));
        var_21 = ((/* implicit */unsigned short) min(((-((+(((/* implicit */int) arr_3 [i_1])))))), ((-(((/* implicit */int) ((_Bool) 1991175744601425900ULL)))))));
        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_4 [i_1]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-1)))) ^ (min((((/* implicit */unsigned long long int) var_2)), (var_6)))))));
        var_23 -= ((/* implicit */short) ((var_16) ? (min((var_14), (((/* implicit */int) (unsigned char)92)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (signed char)37))) && (((/* implicit */_Bool) (short)24070)))))));
    }
    for (short i_2 = 2; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_6 [i_2] [i_2 - 2])))), (((/* implicit */int) arr_6 [i_2] [i_2]))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-27676))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)3)))))) : (((/* implicit */int) (short)24101))));
            var_26 |= ((/* implicit */short) arr_3 [i_2 + 1]);
        }
    }
    var_27 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)24091)) : (var_5)))) ? (var_5) : (((/* implicit */int) var_9))))));
}
