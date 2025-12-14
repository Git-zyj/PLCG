/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235496
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [4ULL] [i_0 + 1])) ? (((/* implicit */int) arr_6 [(short)11] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 1])))))));
                    arr_7 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0 + 1]), (((/* implicit */int) arr_5 [i_0 + 1]))))) ? ((-(((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_2])))) : ((~(((/* implicit */int) (unsigned short)41405))))));
                    arr_8 [i_2] = ((/* implicit */short) min(((+(arr_3 [i_0 + 1] [(unsigned char)4]))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -846176587964892612LL)) ? (-846176587964892612LL) : (67108863LL)))) || (((/* implicit */_Bool) arr_5 [i_0 + 1])))))));
                    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_3 [(unsigned char)0] [i_2]) : (((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) 2645959494130410407ULL)) ? (arr_3 [(unsigned short)17] [i_1]) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))) : ((~(((/* implicit */int) arr_5 [i_0 + 1]))))))), (max((((/* implicit */long long int) arr_5 [i_0 + 1])), (arr_0 [(unsigned char)11] [i_1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) var_6)))))));
    var_21 = ((/* implicit */unsigned short) var_17);
}
