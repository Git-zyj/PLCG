/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28709
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-95)), (var_12)));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-31279)) : (((/* implicit */int) var_7))))))), (max((arr_5 [7ULL] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 2] [i_0 + 4]))))));
                    arr_6 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */int) var_14)) % (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_2])))) ^ (((/* implicit */int) max(((unsigned short)64863), (((/* implicit */unsigned short) var_5))))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -6826153675993556002LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 4])) * (((/* implicit */int) var_1))))) : (var_15))))));
                }
                for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) var_11)))));
                                var_22 = ((/* implicit */short) min((((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (18446744073709551588ULL)))), (((((/* implicit */_Bool) max((arr_11 [i_0] [i_1] [i_3] [i_4] [i_3]), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_3]))))) : ((+(9223372036854775804LL)))))));
                                arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_0 [i_4]))) ? (((((/* implicit */_Bool) (-(0ULL)))) ? (6826153675993556016LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) != (-877730906561259979LL))))))) : (((((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))))) ? (3924315291751066138LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4109410772U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5)))))))));
                                arr_15 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_1]);
                            }
                        } 
                    } 
                    arr_16 [i_0 + 4] [i_0] [i_0] = ((/* implicit */short) var_16);
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_0 [i_0 + 2]))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    arr_19 [(short)1] [(short)1] [i_6] = ((var_1) || (((/* implicit */_Bool) (signed char)-48)));
                    arr_20 [i_0] [1ULL] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) : (((((/* implicit */_Bool) 4880211827447073867LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) : (var_12)))));
                    arr_21 [(signed char)11] |= ((/* implicit */long long int) (~(((185556525U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                    var_24 = ((/* implicit */unsigned int) ((14689289792196085971ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_10);
    var_26 = min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned int) 267911168)) : (185556525U)))) ? (((((/* implicit */_Bool) var_11)) ? (9246226864126404543ULL) : (((/* implicit */unsigned long long int) 718851976)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))));
    var_27 = ((/* implicit */unsigned short) 2895133983843083930ULL);
}
