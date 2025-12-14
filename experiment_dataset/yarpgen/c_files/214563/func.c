/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214563
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (short)-13013)), (var_8)))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) min(((short)13017), (var_3)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_14) : (((/* implicit */unsigned int) var_10)))) << (((((/* implicit */_Bool) ((short) (unsigned short)0))) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) arr_0 [i_0]))))) : (((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] [i_0] = (((_Bool)1) ? (((/* implicit */int) (short)-22486)) : (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned char)4] [i_1])) ? (((/* implicit */int) arr_5 [22U] [i_1])) : (((((/* implicit */_Bool) arr_5 [(unsigned char)8] [(unsigned char)8])) ? (((((/* implicit */int) arr_0 [(signed char)0])) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) min((var_3), ((short)13021)))))))))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_0))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_5 [i_0] [i_2]))))) ? (arr_8 [i_0 - 1] [i_2 + 2] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])))));
            var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0] [i_2 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [(unsigned char)14])) ? (arr_1 [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))) / (arr_8 [i_2] [i_2] [i_0])))))))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7)) || (((/* implicit */_Bool) (short)-13010))));
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_2 + 1])) / (((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_2 + 2]))));
        }
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            var_22 = ((((long long int) arr_11 [(_Bool)1] [i_3 - 1])) * (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_0)))))));
            arr_13 [i_0] [i_0] [i_3 + 3] = arr_11 [i_0 - 1] [(_Bool)1];
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned int) 1300757051U)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -864772510)) || (((/* implicit */_Bool) arr_12 [i_0] [i_3 + 1])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_1 [i_0]))))))) : (((/* implicit */int) (_Bool)1))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 + 1])) ? (var_4) : (((/* implicit */int) var_6)))) > ((-(((/* implicit */int) arr_5 [10U] [i_4])))))))));
        arr_18 [i_4 + 1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)72)), (1904073084)));
        arr_19 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (-370096965) : (((/* implicit */int) arr_7 [i_4 + 1] [i_4] [i_4 + 1])))) & (((((/* implicit */int) var_15)) | (((/* implicit */int) arr_16 [i_4]))))))) % (min((5823624786496183646ULL), (((/* implicit */unsigned long long int) (unsigned char)98))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5 + 1] = ((/* implicit */int) var_9);
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [14U])), (((((/* implicit */_Bool) min((arr_1 [i_5 + 1]), (((/* implicit */unsigned long long int) (unsigned char)111))))) ? ((+(((/* implicit */int) (unsigned char)175)))) : (((/* implicit */int) var_15)))))))));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_8 [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (arr_8 [i_5 + 1] [i_5 + 1] [i_5 + 1])))) ? (((((/* implicit */_Bool) (-(arr_1 [i_5])))) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) arr_7 [i_5 + 1] [7U] [i_5])))) : (((/* implicit */int) ((unsigned short) var_5))))) : (((/* implicit */int) (short)13010)))))));
        arr_23 [i_5] [i_5 + 1] = ((/* implicit */short) ((min((arr_1 [i_5 + 1]), (((/* implicit */unsigned long long int) var_10)))) | (((/* implicit */unsigned long long int) min((min((arr_11 [i_5] [i_5]), (arr_8 [i_5] [i_5 + 1] [i_5]))), (arr_20 [i_5 + 1]))))));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
    {
        var_26 -= ((/* implicit */short) (((-(((((/* implicit */int) var_13)) & (((/* implicit */int) arr_27 [i_6])))))) & (min((min((((/* implicit */int) arr_0 [(unsigned char)22])), (var_10))), (((/* implicit */int) min((((/* implicit */short) var_15)), (arr_26 [i_6]))))))));
        arr_28 [i_6] [i_6] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_5 [14] [14])) ? (((/* implicit */int) ((signed char) arr_0 [(short)20]))) : (((/* implicit */int) ((var_2) <= (((/* implicit */int) (unsigned char)136))))))));
    }
    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_27 = ((/* implicit */unsigned int) min((var_27), (min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */int) arr_7 [i_7] [i_7] [(short)19]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) var_0))))) : (arr_11 [i_7] [i_7])))))));
        var_28 &= ((/* implicit */short) min((min((arr_1 [i_7]), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-21029)) + (2147483647))) << (((((/* implicit */int) (short)21028)) - (21028)))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7]))))), (((/* implicit */unsigned int) ((var_11) / (((/* implicit */int) arr_27 [i_7]))))))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -931382940)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_7]))) : (arr_8 [i_7] [i_7] [i_7])))) ? (((/* implicit */int) min((var_3), ((short)-13010)))) : (((((/* implicit */int) arr_26 [i_7])) / (((var_5) ? (1600384174) : (((/* implicit */int) (short)-13010))))))));
    }
}
