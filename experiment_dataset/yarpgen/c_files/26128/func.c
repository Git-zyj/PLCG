/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26128
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
    var_15 = ((/* implicit */short) var_4);
    var_16 = max((((_Bool) var_1)), ((_Bool)1));
    var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) / (9034059018282449840LL)))) ? (((/* implicit */int) min(((short)-2614), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((_Bool) var_1)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((/* implicit */int) ((10ULL) != (9223372036854775808ULL)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [8U])))))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((var_8), (((/* implicit */unsigned long long int) arr_0 [2U] [i_0]))))))) / (((((unsigned long long int) arr_2 [(short)9])) + ((+(9223372036854775811ULL))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((int) ((arr_8 [i_1] [i_2 + 1] [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [(short)10] [i_2 + 1] [i_1])))));
            arr_11 [i_1] [i_2] = ((/* implicit */short) 35166307U);
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3])) ^ (((unsigned long long int) 9223372036854775819ULL)))) * (9223372036854775811ULL))))));
            /* LoopSeq 4 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_20 [17] [i_3] [i_4] = max((((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */unsigned long long int) arr_14 [i_3])) : (9223372036854775789ULL))), (max((9223372036854775814ULL), (9223372036854775834ULL))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) (((_Bool)1) ? (9223372036854775784ULL) : (9223372036854775821ULL))))), (((unsigned long long int) ((unsigned int) var_2))))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_23 [i_1] [i_3] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_21 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0)))) ? (((((/* implicit */_Bool) 9223372036854775773ULL)) ? (9223372036854775835ULL) : (((/* implicit */unsigned long long int) arr_14 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_22 [i_1]))))))))) || (((/* implicit */_Bool) ((unsigned int) var_7))));
                var_22 ^= ((arr_12 [i_1] [i_1]) == (((/* implicit */int) arr_5 [i_1] [i_1])));
                var_23 = ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) 8388607U)), (arr_6 [i_1] [i_3] [i_3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(_Bool)1])))));
                arr_24 [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_5 [i_1] [i_5]))))))) ? (((/* implicit */int) (!(((_Bool) 68719476735ULL))))) : (((/* implicit */int) var_6))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_27 [i_1] [i_6] [i_6] [i_3] = ((/* implicit */_Bool) ((max((var_3), (arr_25 [i_1] [i_1] [i_1] [i_6]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_6])) > (((/* implicit */int) var_6))))))));
                var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(var_14)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_3))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [22LL] [i_3]))) : (9223372036854775808ULL)))));
                arr_28 [i_6] [i_6] [i_3] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_17 [i_1] [i_6] [i_6]))) - (((((/* implicit */int) arr_26 [i_6])) + (((/* implicit */int) arr_26 [i_6]))))));
                var_25 = max((arr_21 [i_3]), (((arr_17 [i_1] [i_6] [8ULL]) > (arr_17 [i_6] [i_6] [i_6]))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_35 [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_0))))));
                    arr_36 [(short)10] [20LL] [i_8] [6LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_29 [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_1] [i_8] [i_7] [i_8]))))) ? (((/* implicit */int) ((_Bool) arr_29 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */int) ((short) var_6)))));
                }
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned int) -1998506743)) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775800ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_9))))))))) : ((+(var_13)))));
                    arr_39 [i_1] [i_7] [i_1] = ((/* implicit */short) var_0);
                    arr_40 [i_7] [i_3] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_9] [i_1]))))) * (arr_34 [i_1] [i_1] [i_3] [(_Bool)1] [i_1] [i_7])));
                }
                arr_41 [12] [(_Bool)1] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_0) : (((/* implicit */unsigned int) ((int) 131040U)))))), ((((_Bool)1) ? (3978983886526908798ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7)))))));
                var_27 &= ((/* implicit */int) max((max((arr_18 [i_3] [i_3] [2]), (((/* implicit */unsigned long long int) arr_16 [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >= (arr_12 [i_1] [i_7]))))));
            }
            arr_42 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775815ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19940))) : (18446744004990074890ULL))))));
        }
        arr_43 [i_1] = ((9223372036854775772ULL) << (((((/* implicit */int) (short)-20593)) + (20627))));
    }
}
