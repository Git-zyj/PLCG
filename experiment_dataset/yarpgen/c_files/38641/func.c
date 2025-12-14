/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38641
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) min((var_7), (var_16)))) ? (max((var_9), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((var_5), (var_5)))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */long long int) var_2))))) ? (var_9) : (((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (var_3)));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9925)) ? (((/* implicit */int) (short)-4391)) : (((/* implicit */int) (short)-20367))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_11))) : (max((var_18), (((/* implicit */long long int) var_8))))))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~((+(((((/* implicit */_Bool) var_12)) ? (var_9) : (var_17))))))))));
                    arr_9 [i_0] [i_0] = max((((/* implicit */short) var_0)), (min((var_3), (var_19))));
                    var_24 = ((/* implicit */unsigned char) var_5);
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] [i_3] |= ((/* implicit */_Bool) var_14);
        var_25 = ((/* implicit */short) max((var_25), (var_1)));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */short) var_18);
            arr_17 [i_3] [i_3] = ((/* implicit */short) var_17);
            /* LoopSeq 1 */
            for (signed char i_5 = 4; i_5 < 19; i_5 += 2) 
            {
                arr_20 [i_3] [i_4] [i_5] = var_4;
                arr_21 [(short)1] [(short)1] [10U] = ((/* implicit */unsigned char) var_2);
                var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))));
            }
        }
        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_11) : (var_18)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
            arr_25 [(short)10] [i_6] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_12)))) : ((~(((/* implicit */int) (_Bool)1))))));
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_10)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_2)) ? (var_11) : (var_9))))))));
            arr_26 [i_6] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))));
        }
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
    {
        arr_30 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_19)))))) : (var_14)));
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (((/* implicit */long long int) var_16))))) ? ((+(var_17))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))) ? ((+(var_14))) : (max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_19)))))))))));
        var_33 = ((/* implicit */short) (~((~((+(((/* implicit */int) var_16))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_33 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_19))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (var_14))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))))));
        /* LoopSeq 3 */
        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_18))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_11)))))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_4))))) ? (var_14) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (short)3584)) ? (1216063072U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20383))))) : (3078904224U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_11)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (var_9)))));
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_17))));
            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (~(((/* implicit */int) var_4)))))));
            arr_41 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) (+(var_14)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))) : (968789783U)))));
        }
        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                var_39 = ((/* implicit */_Bool) var_9);
                arr_46 [i_8] [i_11] [7U] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (max((((/* implicit */int) var_6)), (var_14))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) var_6))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_40 = max(((short)-3584), (((/* implicit */short) (_Bool)1)));
                var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (-(((/* implicit */int) var_16)))))));
                var_42 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)9992)) ? (((/* implicit */int) max((var_4), ((short)25719)))) : (((/* implicit */int) (short)12417))))));
            }
            arr_50 [i_8] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9110)) ? (-7478037837515189977LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_19)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_19))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_19))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_9)))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), (var_1)))) : ((~(((/* implicit */int) var_13)))))))));
        }
        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_17)))) ? (((((/* implicit */_Bool) var_19)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_0)), (var_19)))))))) ? (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))), (((/* implicit */int) max((var_5), (var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))))));
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3078904202U)))))));
        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) var_0))));
    }
}
