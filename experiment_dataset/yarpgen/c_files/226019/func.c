/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226019
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) 7511745494042686638LL)) : (9635074381506513444ULL)))) && (((/* implicit */_Bool) var_0))));
                        arr_9 [(unsigned short)4] [i_2] [(unsigned short)4] [i_1] [(unsigned short)4] |= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_0] [(unsigned short)2] [(signed char)2] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) : (var_5)));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10385))) == (14074880961132486402ULL)));
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) var_3);
            var_14 = ((/* implicit */unsigned short) arr_11 [i_0] [i_4]);
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) arr_2 [i_0] [(short)0]);
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(signed char)8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_0]))))) ? (((arr_6 [i_0] [2U] [i_5] [i_0]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10381))) % (var_7)))))))));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            arr_21 [i_0] = ((/* implicit */signed char) ((arr_8 [i_0]) * (arr_8 [i_0])));
            arr_22 [i_0] [i_0] = ((((((/* implicit */_Bool) 14074880961132486387ULL)) && (((/* implicit */_Bool) 4371863112577065208ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_20 [i_6]) : (((/* implicit */long long int) 8388608)))) : (((/* implicit */long long int) var_5)));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (signed char)-94)) : (374983337)));
        }
    }
    for (short i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (arr_25 [i_7] [i_7]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10))))))));
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_25 [i_7] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_23 [i_7])))) : (((arr_25 [i_7] [i_7]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_23 [i_7]))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7128121635653513250ULL)));
        var_19 = ((/* implicit */unsigned long long int) var_10);
        var_20 = ((/* implicit */short) arr_27 [i_8]);
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64512))) : (var_11)))) ? (((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned long long int) var_10)), (var_11))) : (((/* implicit */unsigned long long int) var_10)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_27 [(signed char)8])))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_8])))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)25916)) : (arr_19 [i_9] [i_9] [i_9]))), (((/* implicit */int) ((((/* implicit */_Bool) -630647529)) || (((/* implicit */_Bool) 4U)))))));
        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_9] [(unsigned short)0])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) (unsigned short)58954)) ? (16379518911369240584ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 713672802U)) ? (((/* implicit */int) (unsigned short)65535)) : (630647518)))))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_9] [(short)8])) > (((/* implicit */int) var_6)))))));
    }
    var_24 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2405)) ? (((/* implicit */int) (_Bool)1)) : (630647538))))));
        var_26 = var_11;
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((min((1803896197), (((/* implicit */int) var_3)))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)80))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)23)) & (((/* implicit */int) arr_32 [i_10]))))) : ((((_Bool)1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [15U] [i_10]))))))))))));
        var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (0ULL))), (((/* implicit */unsigned long long int) arr_28 [i_10] [i_10]))));
    }
    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 4) 
        {
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)59)), ((unsigned short)32768))))));
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((max(((signed char)100), (((/* implicit */signed char) arr_32 [i_12 + 2])))), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-93)) && (((/* implicit */_Bool) 4294967295U))))))))));
        }
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 9223372036854775799LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_40 [i_16] [i_15] [(_Bool)1] [(_Bool)1])) ? (arr_42 [i_11] [19] [(unsigned short)6] [i_15]) : (((/* implicit */unsigned long long int) 1631177490))))));
                            arr_47 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_2))))) | (((((/* implicit */_Bool) arr_37 [i_11] [i_13] [i_16])) ? (((/* implicit */unsigned long long int) var_9)) : (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((9223372036854775774LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)56140), ((unsigned short)60837))))))))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
            } 
            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_11] [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_11] [i_13]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_40 [8] [i_13] [i_13] [i_13])))) : (((((/* implicit */_Bool) arr_34 [i_11] [i_13])) ? (((/* implicit */int) arr_34 [i_11] [i_11])) : (((/* implicit */int) arr_34 [i_11] [i_13])))));
        }
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (1886748680U))))));
    }
}
