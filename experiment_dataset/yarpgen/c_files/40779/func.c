/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40779
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
    var_10 = ((/* implicit */int) min((((/* implicit */unsigned int) var_3)), (var_0)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), ((unsigned char)192)));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_0);
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((signed char) (signed char)-4))) ? (((/* implicit */unsigned int) var_5)) : (3840705072U)))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */int) arr_0 [i_1])), (min((2147483647), (((/* implicit */int) var_3)))))), (((/* implicit */int) (unsigned char)192))));
            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */int) arr_6 [10])) != (min((((/* implicit */int) ((signed char) (signed char)-81))), (max((var_5), (((/* implicit */int) var_9)))))))))));
            var_13 = var_9;
            var_14 = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)168)))))) ? (min((((/* implicit */int) var_2)), (((1462947655) << (((arr_5 [i_2]) - (1785910281))))))) : (((((-1008332274) & ((-2147483647 - 1)))) + (((/* implicit */int) arr_6 [i_1])))));
        }
        arr_11 [i_1] = max((max((((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (var_4) : (((/* implicit */unsigned int) 8388607)))), (((/* implicit */unsigned int) ((int) -1253110153))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -436931701)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_9 [i_1] [i_1])))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6)))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)6))));
        var_16 = -62067802;
    }
    var_17 = var_9;
}
