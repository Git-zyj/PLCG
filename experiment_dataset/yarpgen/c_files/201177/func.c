/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201177
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
    var_14 = ((/* implicit */_Bool) var_6);
    var_15 = var_7;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [7LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)25244))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? ((-((~(-1162276730))))) : ((-(((((/* implicit */_Bool) var_10)) ? (-925370199) : (var_2)))))));
        arr_4 [i_0] [(short)12] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))));
        arr_9 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (-4358629703802762463LL) : (-3571417682705348823LL)))));
        arr_10 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1960389865)) ? (14194397376307839259ULL) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(arr_6 [i_2] [i_1])))) ? (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */long long int) 65535U)))) : (((/* implicit */long long int) (+(arr_5 [i_1] [i_1]))))))));
            arr_14 [i_2] [i_2] [(unsigned char)23] = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(480669920)))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (arr_13 [i_1] [20LL]))) : ((((_Bool)1) ? (var_5) : (((/* implicit */int) var_8))))))) : ((~(var_4)))));
        }
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -3531037828460393530LL)) ? (((/* implicit */int) arr_18 [i_3])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_3]))))) : (((((/* implicit */_Bool) (short)11762)) ? (arr_7 [i_3]) : (289903765)))))));
        arr_20 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        arr_24 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(-11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1840036690U)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-25232)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(arr_11 [(unsigned char)8] [(unsigned char)8] [i_4]))))))) : (((((/* implicit */_Bool) (-(-625440304348124040LL)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 33553920U)) : (arr_6 [i_4] [i_4])))) : ((+(arr_21 [(unsigned short)3])))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_23 [i_4])))) ? ((~((+(917504U))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (1901827814) : (((/* implicit */int) var_0))))))))))));
        arr_25 [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 6167745476267828094LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(signed char)2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) -1309119706)) ? (arr_6 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4])))))))));
    }
}
