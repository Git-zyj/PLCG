/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23170
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
    var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_15), (((/* implicit */int) var_0))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)14633))))))));
    var_19 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)(-32767 - 1)))));
        var_20 = var_15;
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-38)) >= (((((/* implicit */_Bool) var_0)) ? (arr_9 [i_0] [i_1] [i_2] [i_3 - 1]) : (((/* implicit */int) (short)32767))))))) : ((+(((/* implicit */int) (short)(-32767 - 1)))))));
                        arr_15 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((-(18446744073709551615ULL))) < (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_3 - 1])))))) < (((((/* implicit */long long int) 324669575)) | (var_10)))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((arr_8 [i_0] [i_1] [6LL] [i_3]), (((/* implicit */long long int) var_9)))))));
                        var_23 = ((/* implicit */unsigned int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98)))));
                    }
                } 
            } 
        } 
        var_24 &= ((/* implicit */short) (-(0U)));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) max((13ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))));
        var_26 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (arr_8 [i_4] [(short)14] [(unsigned short)4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [(unsigned short)0])))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))));
        var_27 = ((/* implicit */unsigned short) ((_Bool) (unsigned char)27));
    }
    var_28 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_9)) : (324669567))) != (((/* implicit */int) min(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */int) var_9)) >= (var_15))))))));
}
