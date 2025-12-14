/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205856
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_13))));
    var_17 -= ((((/* implicit */long long int) ((/* implicit */int) var_11))) & (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) | (2029935211774824380LL))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 *= ((/* implicit */long long int) arr_2 [i_0]);
        var_19 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */_Bool) ((((long long int) min((((/* implicit */signed char) arr_0 [i_1])), ((signed char)0)))) << (((/* implicit */int) arr_5 [i_0] [i_0]))));
            var_20 *= ((/* implicit */_Bool) arr_6 [i_1]);
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) var_3);
                            var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) 684362747765331077ULL)) ? (855432511095823133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 855432511095823133ULL)) ? (((/* implicit */int) (short)-3761)) : (((/* implicit */int) (signed char)0))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_13 [i_0] [(unsigned short)14] [i_2] [(short)5]) : (((/* implicit */long long int) arr_2 [i_0 - 1]))))))) / (min((((unsigned long long int) 653203359)), (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) arr_15 [i_4] [i_3] [(signed char)6])))))))));
                        }
                        arr_18 [i_1] [i_1] [9] [i_1] [i_1] [13] = (+(((((((/* implicit */int) var_2)) != (((/* implicit */int) arr_7 [i_0] [i_0])))) ? ((+(var_15))) : (((/* implicit */unsigned long long int) ((arr_13 [i_3] [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(684362747765331083ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_4))))) : (arr_9 [i_0 - 1] [i_0 - 1]))))))));
        }
        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            arr_22 [i_0] [i_0] &= max((((arr_12 [i_0 - 1] [i_5] [i_0 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) arr_6 [i_0 - 1]))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_5]))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) / (((18446744073709551610ULL) % (18446744073709551594ULL)))))));
        }
        for (short i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            arr_26 [i_0 - 1] [i_0 - 1] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)25))) | ((-9223372036854775807LL - 1LL)));
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                var_26 += ((/* implicit */long long int) max((max((((arr_24 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_10))), (((/* implicit */unsigned int) arr_2 [i_0 - 1])))), (((/* implicit */unsigned int) (((-(((/* implicit */int) var_5)))) != (((/* implicit */int) ((((/* implicit */int) arr_6 [i_6])) < (((/* implicit */int) var_0))))))))));
                var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551594ULL)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) 653203359)))) >> (((/* implicit */int) (signed char)25))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */int) ((arr_24 [i_7]) && (((/* implicit */_Bool) var_7))))) >> (((((((/* implicit */_Bool) arr_12 [5] [5] [i_7])) ? (arr_10 [i_0] [i_0] [i_7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (1109422261967373129LL)))))))));
                var_28 = (~(((arr_9 [i_6 + 1] [i_7]) | (arr_9 [i_6 - 1] [i_6 + 1]))));
            }
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                var_29 = ((/* implicit */_Bool) (+((+(((((/* implicit */int) arr_27 [i_0] [i_0] [i_8] [i_6])) & (-800060458)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    arr_36 [i_0] [i_6 - 1] [i_6] [i_9] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_5 [i_0] [i_6 - 1])) | (((/* implicit */int) var_8))))));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_5) ? (((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_8] [i_9])) : (var_6)))))) / (min((var_9), (max((((/* implicit */long long int) 492263189)), (var_9))))))))));
                }
            }
            for (short i_10 = 3; i_10 < 19; i_10 += 4) 
            {
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-6216316167444805817LL) + (9223372036854775807LL))) >> ((((+(9223372036854775807LL))) - (9223372036854775802LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_6 + 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0 - 1])))) : ((+(((/* implicit */int) var_11))))))))))));
                var_32 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32644))) : (var_10)))), (((((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                arr_41 [i_6] [i_6 + 1] [i_6] [i_6] = ((long long int) ((((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6 - 1])) & (((((/* implicit */int) var_13)) - (var_3)))));
            }
        }
    }
    for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
    {
        var_33 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_11])) ? (arr_43 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (9223372036854775807LL) : (-6216316167444805817LL)))) ? (((/* implicit */int) (short)-32644)) : (((int) (((_Bool)1) ? (10408462132593753857ULL) : (((/* implicit */unsigned long long int) var_14))))));
        var_34 = ((/* implicit */signed char) (+(((/* implicit */int) arr_44 [i_11]))));
        var_35 = ((/* implicit */int) var_7);
    }
    for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 3) 
    {
        var_36 ^= ((/* implicit */unsigned char) ((_Bool) arr_44 [(signed char)22]));
        var_37 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(arr_45 [i_12 - 1] [(unsigned short)17])))), (((max((var_15), (var_6))) & ((~(1660842464562545822ULL)))))));
        arr_48 [i_12] [i_12] = ((/* implicit */unsigned short) var_10);
        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)-53)), ((short)-32654))))));
        arr_49 [i_12] = ((((/* implicit */_Bool) 1056964608)) && ((_Bool)1));
    }
}
