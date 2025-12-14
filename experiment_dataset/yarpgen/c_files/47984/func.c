/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47984
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) 562949953421311ULL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) 13108569692854319729ULL))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
        }
        var_16 = ((/* implicit */unsigned char) var_0);
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_17 = ((/* implicit */signed char) arr_7 [i_2]);
        var_18 = ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (signed char)-19)) : (((((/* implicit */int) arr_6 [i_2])) + (((/* implicit */int) (signed char)126))))));
        arr_9 [i_2] [i_2] |= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_2]))))))));
    }
    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (562949953421302ULL)))) ? (((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (short)16288)))) : (((/* implicit */int) arr_8 [i_3 - 1])))));
        var_19 = ((/* implicit */unsigned short) (unsigned char)12);
    }
    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) var_12))) ? (arr_1 [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))))), (((/* implicit */unsigned long long int) var_9))));
        var_21 = arr_8 [i_4];
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_8))));
    var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)30764))))) ? (((18446181123756130305ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6876))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)61171)))))));
}
