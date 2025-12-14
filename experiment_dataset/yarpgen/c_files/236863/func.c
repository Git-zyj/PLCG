/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236863
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) (short)32312)) : (((/* implicit */int) (unsigned short)46880)))) : (((((/* implicit */_Bool) ((long long int) (short)5696))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min((var_7), (var_13))))))));
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_14))))) || (var_15))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_4)) : (12010153436204657299ULL))))))));
    var_19 = ((/* implicit */unsigned long long int) (~(((long long int) var_2))));
    var_20 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)17794)) & (((/* implicit */int) arr_4 [i_0] [12LL]))))) ? (((/* implicit */unsigned long long int) 5781889685964775280LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15799))) ^ (13076450908072876286ULL)))))) ? (((((/* implicit */_Bool) ((int) var_7))) ? (((unsigned long long int) 5423123004629828132ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32311))))) : (((/* implicit */unsigned long long int) var_4))));
                    var_22 = ((/* implicit */short) (+(min((max((var_11), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_13 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)12809))))) ? (arr_12 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)224)))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11188543414784032273ULL)) || (((/* implicit */_Bool) (unsigned char)255))));
                        arr_14 [i_0] [i_1] [i_0] = arr_12 [(short)3] [i_1 - 1] [i_2] [0LL];
                    }
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2]))))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [8ULL]))))))))));
                }
            } 
        } 
    } 
}
