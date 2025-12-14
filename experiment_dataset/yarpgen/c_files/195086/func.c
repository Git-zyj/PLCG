/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195086
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2117420595))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (3568388263497582219ULL)))))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) var_6)))) << (((((/* implicit */int) var_13)) - (147))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (var_16) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((-(max((((/* implicit */unsigned int) var_18)), (var_14))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)67))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) : (((/* implicit */int) (unsigned short)16128)))))));
        var_21 = ((max((((/* implicit */int) (signed char)-57)), (((((/* implicit */_Bool) -107011223)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (short)-31511)))))) / (((/* implicit */int) arr_1 [i_0 + 2])));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [(signed char)0] [(signed char)0])) : (((((/* implicit */_Bool) -447605284214308074LL)) ? (((/* implicit */int) (unsigned short)49408)) : (((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 4294967295U))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) 1125831187365888LL))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_11))));
            var_26 = ((/* implicit */signed char) var_13);
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */signed char) (+(var_17)));
            /* LoopNest 3 */
            for (unsigned int i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((arr_11 [i_4 + 2] [i_4 - 1] [i_4 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_11 [i_1] [i_3] [i_4]))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(1040948873))), (((/* implicit */int) max((arr_1 [i_7]), (((/* implicit */unsigned short) (signed char)24)))))))) ? (((/* implicit */int) arr_15 [i_7] [i_7] [i_7])) : (((((/* implicit */_Bool) (short)3072)) ? (((/* implicit */int) arr_9 [i_7])) : (((/* implicit */int) arr_9 [i_7]))))));
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)14169))))) ? ((+(((((/* implicit */_Bool) var_3)) ? (10898089751073636604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) (+(arr_10 [i_7] [i_7]))))));
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) arr_19 [i_7])) ? ((+(2581007052174309751LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-11884)))))))))))));
        var_33 = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_7])) || (((/* implicit */_Bool) (unsigned short)16376))))));
        var_34 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)61900))));
    }
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_35 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_13 [i_8] [i_8] [(_Bool)1] [(signed char)8]), (arr_13 [i_8] [i_8] [(_Bool)1] [i_8]))))));
        var_36 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)255), (arr_20 [i_8] [i_8])))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */int) arr_14 [i_8] [(short)0] [i_8]))))))))));
        var_37 ^= ((/* implicit */signed char) (((((+(((/* implicit */int) (signed char)97)))) * ((+(((/* implicit */int) (short)-32755)))))) != (((/* implicit */int) var_3))));
    }
    var_38 = ((/* implicit */long long int) min((var_38), (max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_6))) == (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_10)))))))), ((-(-574698766900027405LL)))))));
}
