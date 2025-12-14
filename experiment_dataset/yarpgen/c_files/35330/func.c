/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35330
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
    var_13 = ((/* implicit */short) var_4);
    var_14 = ((/* implicit */long long int) ((max((((/* implicit */int) ((short) var_2))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)14096)) : (((/* implicit */int) (signed char)12)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)159))))))))));
    var_15 += ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) var_10);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_17 = (((-(((/* implicit */int) ((((/* implicit */int) arr_1 [16ULL])) == (((/* implicit */int) (unsigned char)68))))))) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) max((max((45464305486455864ULL), (((/* implicit */unsigned long long int) (signed char)12)))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))));
    }
    for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_10))))), (((long long int) ((2123923132) >> (((1386403566U) - (1386403538U))))))));
        var_19 = ((unsigned short) ((((-8814668499328018487LL) + (9223372036854775807LL))) >> (((15107865709277399973ULL) - (15107865709277399940ULL)))));
        var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 2]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 1]))))));
        var_21 = max((((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))))), ((((_Bool)1) ? (max((((/* implicit */unsigned int) var_11)), (965946745U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))))));
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 14; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */long long int) var_9);
                        arr_18 [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_5]))));
                    }
                } 
            } 
            var_23 &= ((/* implicit */long long int) (-(((((/* implicit */int) arr_1 [i_3])) / (((/* implicit */int) (signed char)8))))));
            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_3] [i_3])) % (((/* implicit */int) (unsigned short)46777))));
        }
        var_25 -= ((/* implicit */unsigned short) ((arr_10 [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_16 [i_3] [i_3] [9U] [(short)8]))))));
        arr_19 [i_3] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)65535))));
        arr_20 [i_3] [i_3] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) (unsigned char)232)))))) / (max((((/* implicit */unsigned long long int) arr_1 [i_3])), (arr_13 [(short)13] [(unsigned char)6]))))), (((/* implicit */unsigned long long int) max((-475692765), (((/* implicit */int) (unsigned short)41162))))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)94)), ((unsigned short)34055)))) > (((/* implicit */int) arr_1 [i_3]))))))))));
    }
    var_27 = ((/* implicit */short) var_8);
}
