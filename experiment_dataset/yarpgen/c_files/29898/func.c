/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29898
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_10))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (2147483647) : (max((2147483643), (((/* implicit */int) var_11))))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_14 = arr_2 [i_0 - 1];
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (short)-8192))) ? (((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 2])))))) : ((-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_1 - 1])))))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1]))))) >= ((+(var_7)))))) : (min((((/* implicit */int) min((arr_2 [i_2]), (((/* implicit */short) arr_0 [i_0] [(unsigned char)10]))))), (arr_11 [i_0] [i_1 - 1] [i_0] [i_2])))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((+(min((var_2), (((/* implicit */unsigned int) var_3)))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((_Bool) var_3))))))))));
                        arr_13 [i_3] [i_2] [i_1 - 1] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0] [i_0] [i_2]));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) var_5)))) >= (((/* implicit */int) ((short) arr_1 [i_1]))))));
        }
        arr_14 [i_0] [i_0] = ((/* implicit */short) min(((~(min((((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])), (var_8))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_4)) - (40687))))))))));
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])) - (((/* implicit */int) (unsigned short)23184)))) >= (((max((var_3), (var_11))) ? (((/* implicit */int) min((var_5), ((short)8191)))) : (((/* implicit */int) var_1))))));
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0])))));
    }
    var_22 = min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (var_0)))) > (min((var_8), (((/* implicit */unsigned long long int) var_12))))))), (((unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_5))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10)))));
}
