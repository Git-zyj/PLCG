/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226533
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = max((var_11), (((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_1])));
            arr_6 [i_1] = ((/* implicit */_Bool) (-(((arr_5 [i_0]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_5 [i_0]))))));
        }
        var_19 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)205))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min(((-((+(((/* implicit */int) var_14)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)168)))) : (((/* implicit */int) (unsigned char)232)))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_21 += (!(((_Bool) (unsigned char)6)));
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((/* implicit */int) var_12))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_2]))) : (((/* implicit */int) arr_0 [i_2])))))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        var_24 *= arr_2 [i_3] [i_3 + 1];
        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_3 [i_3 + 1] [i_3])))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)234)))))));
        var_26 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3])) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_3 + 1] [i_3])) : (((/* implicit */int) arr_7 [i_3]))))))));
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) max(((unsigned char)23), ((unsigned char)71)))) * (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))) / (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) ((_Bool) (unsigned char)8)))))) ? (((((/* implicit */int) (_Bool)1)) | (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned char)245)))))));
        var_29 *= ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) max(((unsigned char)235), ((unsigned char)125))))), (((((((/* implicit */int) arr_0 [i_4 + 1])) <= (((/* implicit */int) arr_2 [i_4 + 1] [i_4 + 1])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) arr_12 [i_4])))))));
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((min((((((/* implicit */int) (unsigned char)225)) << (((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))), (((/* implicit */int) min((var_3), (arr_12 [i_4])))))) ^ (((((/* implicit */_Bool) arr_11 [i_4])) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1])) << (((/* implicit */int) var_0)))))))))));
    }
    var_31 = ((/* implicit */unsigned char) var_4);
}
