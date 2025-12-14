/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231910
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
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_7)) != (min((min((((/* implicit */unsigned int) var_7)), (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_4)))))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (short)-565))))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) < (max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))))))));
        /* LoopSeq 3 */
        for (short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            var_20 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) != (var_4)))), (var_7)));
            arr_6 [i_0] = ((/* implicit */int) max(((((!(((/* implicit */_Bool) var_4)))) ? ((-(arr_5 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2688170841926166717LL)))))))), (((/* implicit */long long int) 3967395732U))));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 4; i_3 < 18; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 += ((/* implicit */int) ((short) arr_12 [i_0]));
                        arr_15 [i_0] [i_2] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) (-(arr_3 [i_0] [i_2])));
                        var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) arr_5 [i_2]))))));
                        arr_16 [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-93))))) ? (((unsigned int) arr_10 [i_0] [i_2] [i_0] [i_4])) : (min((var_3), (var_15)))))) ? ((~(((/* implicit */int) arr_10 [i_3 - 4] [i_0] [i_0] [i_3 - 4])))) : (((/* implicit */int) var_1)));
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */int) ((_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-565))) | (var_6)))));
            var_23 &= ((/* implicit */unsigned int) ((((unsigned int) var_13)) > (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [1LL] [i_0] [i_0]))))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((arr_8 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (var_8))))))));
            arr_21 [i_0] = min((((/* implicit */unsigned long long int) ((signed char) var_7))), (max((((/* implicit */unsigned long long int) var_15)), (arr_8 [i_0]))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((long long int) arr_11 [13U] [i_5] [i_0] [i_0])))) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (((unsigned int) -1615966608)))) : (((/* implicit */unsigned int) 1615966596)))))));
            var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)-565)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) : (max((((/* implicit */long long int) var_16)), (var_6)))))));
            var_27 = ((/* implicit */signed char) var_13);
        }
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            arr_29 [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 693074834U)) ? (((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_7])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_6])))) : (((/* implicit */int) var_16))))), (min((max((((/* implicit */long long int) arr_11 [i_7] [i_7] [i_7] [i_7])), (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (var_9))))))));
            arr_30 [i_6] [i_6] = ((/* implicit */unsigned int) ((min((var_6), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)26825)), (var_15)))))) | (((/* implicit */long long int) ((/* implicit */int) min((var_14), (var_14)))))));
            arr_31 [i_6] [i_7] [i_7] &= ((/* implicit */int) var_5);
            var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)1174))))), (((((/* implicit */_Bool) arr_25 [i_6])) ? (arr_8 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -2688170841926166717LL))))))));
        }
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) -1030543332949624961LL)) ? (var_2) : (((/* implicit */int) arr_0 [0U])))), (((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (unsigned short)64880)) : (((/* implicit */int) var_0))))))) / (var_3)));
            var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_23 [i_6] [i_6])))) ? (((unsigned int) arr_23 [i_6] [i_6])) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) || ((!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_7))))))));
            arr_34 [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_19 [i_8]))) ? ((((~(arr_4 [i_6] [i_6]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */int) var_0)))))))) : (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_14 [i_8] [(signed char)6] [i_6] [i_6] [i_6] [i_6]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_8]))) - (var_15)))))));
        }
        arr_35 [i_6] = arr_24 [i_6];
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) min((min((1030543332949624952LL), (((/* implicit */long long int) var_9)))), (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))))));
        var_32 = ((/* implicit */long long int) ((_Bool) ((((var_10) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */long long int) var_15)) != (-9038350020916328851LL)))))));
    }
}
