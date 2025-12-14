/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44328
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = min((((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)32393)) : (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (unsigned short)33142)))))), ((~(((/* implicit */int) (unsigned short)33123)))));
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (unsigned short)33150)))));
        var_21 = ((/* implicit */_Bool) (unsigned char)248);
    }
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)8))))), (max((var_4), (-5826369125843642524LL)))))), (max((2251799813685248ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32412))) : (8521385354411566739LL))))))));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)24232)) ^ (((/* implicit */int) (_Bool)1))));
            var_23 &= ((/* implicit */unsigned int) ((((_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33121))) : (2130881908773177030LL)));
            arr_9 [i_1] = ((/* implicit */unsigned int) (((+(arr_7 [i_2 + 2] [i_2 + 2] [i_2 - 2]))) / (((arr_7 [i_2 + 2] [i_2 + 1] [i_2 - 2]) / (var_6)))));
            var_24 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (short)13154)))));
        }
        arr_10 [i_1] = 1064561953U;
        var_25 = ((/* implicit */_Bool) min((var_25), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (var_3))))))));
        arr_11 [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) (short)13160)))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)33123)) >> (((var_13) - (4169630435343534356LL)))))), (((((/* implicit */_Bool) arr_7 [(unsigned char)3] [(unsigned char)3] [i_1])) ? (16949999333032707293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))))) - (16949999333032707272ULL)))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (short)-13155))));
        arr_14 [i_3] = ((/* implicit */unsigned char) var_16);
        var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_8)) : (arr_3 [5LL] [i_3])))));
        var_28 = (_Bool)1;
    }
    var_29 = ((/* implicit */long long int) (-(((/* implicit */int) (short)13155))));
}
