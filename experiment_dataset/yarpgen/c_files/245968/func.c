/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245968
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
    var_10 = ((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (unsigned short)41921))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) && (((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned char)158)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) arr_1 [i_0] [i_0])))))))));
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */int) var_0)))))));
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))), (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))));
        var_14 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) arr_4 [i_1] [i_2] [i_3]);
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_5 [i_1] [i_2] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) arr_3 [i_2] [i_3]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_1 [i_2] [i_3]))) & (((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)158))))))) : ((((_Bool)1) ? (max((arr_8 [i_1] [i_1]), (((/* implicit */long long int) 640304587)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_3] [i_1])))))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_3))));
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_18 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_10 [i_1])))), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (arr_3 [i_1] [i_1]))) / (((/* implicit */int) arr_10 [i_1]))))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((max((((/* implicit */long long int) arr_7 [i_4] [i_4] [i_1] [i_1])), (arr_8 [i_1] [i_1]))) < (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5)))))), ((-(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_4] [i_1]))) + (arr_8 [i_1] [i_1]))))))))));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) - (((((/* implicit */_Bool) (unsigned char)97)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4])))))))) ? (((/* implicit */unsigned int) arr_3 [i_1] [i_4])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_4] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1]))))) : (((unsigned int) var_1))))));
            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_7)))))) * ((-(((/* implicit */int) arr_9 [i_1] [i_4] [i_4]))))));
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((((((arr_4 [i_5] [i_5] [i_1]) && (var_2))) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) var_1))));
            var_23 = ((/* implicit */unsigned int) min((var_23), ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_1]))) / (arr_7 [i_5] [i_5] [i_5] [i_5])))))));
            var_24 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (max((((/* implicit */int) arr_5 [i_1] [i_5] [i_1])), (640304587))) : (((/* implicit */int) ((unsigned short) var_4))))), ((((-(((/* implicit */int) var_0)))) - (((/* implicit */int) max((arr_10 [i_1]), (((/* implicit */signed char) var_2)))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                var_26 = ((_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_7 [i_1] [i_6] [i_7] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
            }
            var_27 -= ((/* implicit */long long int) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1] [i_6] [i_1])), (var_1))))));
        }
        var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [i_1] [i_1] [i_1]), (arr_12 [i_1] [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_5)))))));
    }
    var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) var_4))) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_2))) + (-968798652662246821LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))))));
}
