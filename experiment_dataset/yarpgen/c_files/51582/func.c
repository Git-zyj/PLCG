/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51582
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
    var_19 = ((/* implicit */signed char) var_16);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((max((arr_1 [i_0]), (arr_1 [i_0]))) % (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_18))), (((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned short) var_10))))))))));
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0]))))));
        var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) (~((-((-(arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((unsigned int) (-(12357189600134142469ULL)))) % (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) var_14)))) % (((((/* implicit */int) (unsigned char)240)) * (((/* implicit */int) (unsigned char)77)))))))));
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_16)), (min((max((((/* implicit */unsigned long long int) var_10)), (var_4))), (((/* implicit */unsigned long long int) (~(3140727835860296048LL))))))));
    }
    var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) var_4)))));
    var_25 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) | (((/* implicit */int) max((((/* implicit */short) var_9)), (max(((short)31136), (((/* implicit */short) var_10)))))))));
}
