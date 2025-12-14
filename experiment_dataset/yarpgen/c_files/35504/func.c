/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35504
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
    var_15 = var_0;
    var_16 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) var_13);
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))));
    }
    for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_10)) ? (var_7) : (var_7))) : (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))) : (var_10)));
        var_19 *= ((/* implicit */_Bool) var_7);
        var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))) : (var_3)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        var_21 = ((/* implicit */_Bool) var_6);
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) (unsigned char)71)) ? (-6491038829416548422LL) : (3684484750710496546LL));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_2))));
                            var_24 = ((/* implicit */signed char) ((var_2) ? (((((/* implicit */_Bool) ((var_5) ? (var_6) : (var_6)))) ? (var_10) : (((((/* implicit */_Bool) var_0)) ? (var_3) : (var_1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15240)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)233))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8675))) : (3072609995870334484LL))))))))));
            arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)));
            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3072609995870334484LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            arr_22 [i_1] [(short)11] = ((/* implicit */unsigned char) var_1);
        }
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) : (((var_5) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6))) : (var_10)))));
}
