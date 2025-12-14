/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200846
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) var_2))))) ? (((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)71)))) : (((/* implicit */int) ((unsigned char) var_7))))) : ((~(((/* implicit */int) ((_Bool) (_Bool)1)))))));
    var_11 *= ((/* implicit */unsigned char) (-(min((((/* implicit */int) var_4)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)211))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_0] [i_0])))) > (((/* implicit */int) (_Bool)1))))) + ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_2 [i_0] [i_0])) << (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) min((((unsigned char) (_Bool)1)), (min((arr_1 [i_0]), (arr_2 [i_0] [i_0])))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!((_Bool)1)))), (((unsigned char) (unsigned char)125)))))));
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_1])))) % (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) min((arr_1 [i_1]), (arr_1 [i_1])))) : (((/* implicit */int) ((_Bool) arr_1 [i_1])))));
        var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
        arr_6 [i_1] = max((max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))), (min((arr_3 [i_1] [i_1]), (arr_2 [i_1] [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = (_Bool)1;
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_2] [i_3]))) ? (((/* implicit */int) min((((_Bool) arr_3 [i_3] [i_3])), (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_0 [i_2]))))))) : (((/* implicit */int) min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
        }
    }
    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)0)))))) | (max(((~(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)76))))))));
        var_20 &= ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned char)19), (((/* implicit */unsigned char) (_Bool)1))))) >= (((/* implicit */int) arr_9 [i_4 + 2])))) ? (min((((/* implicit */int) arr_3 [i_4] [i_4])), ((+(((/* implicit */int) (unsigned char)13)))))) : (((/* implicit */int) arr_0 [i_4 - 1]))));
    }
}
