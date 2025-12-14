/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190752
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
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_1))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (((arr_1 [i_0] [i_0]) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))))))));
        var_23 += ((((/* implicit */int) var_0)) == (((/* implicit */int) ((short) (signed char)-11))));
        var_24 = ((/* implicit */_Bool) 7307173516394350804ULL);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-11)))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (arr_7 [(unsigned short)7] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-74)) && ((_Bool)1)))))));
            var_26 += ((/* implicit */unsigned short) arr_1 [19] [i_2]);
            var_27 = ((/* implicit */unsigned long long int) (!(arr_1 [(unsigned char)1] [i_2])));
            var_28 *= ((/* implicit */int) (~(((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))));
        }
        var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        var_30 = ((short) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) : (arr_7 [i_1] [i_1])));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3])))));
        var_32 |= ((/* implicit */unsigned short) (+(var_11)));
    }
    var_33 = (~(((/* implicit */int) (signed char)124)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        arr_13 [i_4 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))));
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) var_15))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            var_35 = ((/* implicit */unsigned char) ((int) (short)(-32767 - 1)));
            var_36 = ((/* implicit */unsigned char) var_13);
        }
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (-9200761803702397962LL))))));
    }
}
