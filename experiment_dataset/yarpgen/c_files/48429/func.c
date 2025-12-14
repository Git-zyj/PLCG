/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48429
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((max((1344055116U), (((/* implicit */unsigned int) arr_1 [i_0] [7])))) < (((/* implicit */unsigned int) (+(-153844125))))));
        var_16 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 16016955608681884907ULL))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) / (-5043947579071462231LL)))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_17 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_1])), (-153844137))))));
        var_18 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)29909))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = max((((/* implicit */int) min(((!(((/* implicit */_Bool) 3642626684U)))), (((((/* implicit */unsigned int) arr_4 [i_2])) < (503316480U)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> (((((/* implicit */int) var_7)) - (34))))));
        var_20 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        arr_6 [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_14)) | (((/* implicit */int) var_14)))) + (2147483647))) << ((((((~(((/* implicit */int) (short)3227)))) + (3249))) - (21)))));
        arr_7 [(signed char)13] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (_Bool)1))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 4956778565847056080ULL))))))))));
        var_21 = ((/* implicit */short) (~(max((var_3), (((/* implicit */long long int) arr_5 [i_2] [i_2]))))));
    }
    var_22 = ((/* implicit */unsigned int) var_14);
}
