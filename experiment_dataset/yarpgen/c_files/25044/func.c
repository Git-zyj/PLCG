/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25044
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((4095U) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)8192)))) : (((var_16) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))) - (1243618092ULL)))));
        arr_4 [i_0] = ((/* implicit */long long int) (+((-((+(4095U)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
        var_18 -= ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_2 [i_1])))))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57343))) : (var_11)))))));
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) >= (var_11))))));
        arr_8 [i_1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_7)))))))), ((-(((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((unsigned int) 4095U)), (4294963200U))))));
        var_21 = ((((_Bool) ((arr_9 [i_2] [i_2]) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [(_Bool)1])) ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2] [i_2])))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43701))) : (arr_10 [(unsigned char)12] [i_2])))) - (((long long int) 6465857380971752517ULL)))));
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)21428))));
    var_23 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (var_4)))), (max((((/* implicit */unsigned int) var_12)), (1623350141U)))))));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7763170006331466959ULL)))) ? ((-(var_11))) : (var_11)))) ? (((/* implicit */int) ((unsigned short) (+(8207321281889841244LL))))) : (((/* implicit */int) var_10))));
}
