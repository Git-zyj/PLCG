/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32409
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
    var_15 = ((/* implicit */signed char) min((416837692231594189LL), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_7))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_16 = ((((/* implicit */_Bool) min((-416837692231594168LL), (((((/* implicit */_Bool) var_7)) ? (-3882964417218367208LL) : (((/* implicit */long long int) arr_0 [i_0] [4]))))))) ? ((-((+(((/* implicit */int) arr_1 [i_0 - 3])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) -5609843084566729815LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (108086391056891904LL))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_6)) : (416837692231594211LL)))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(416837692231594189LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_1 [i_0]))))) > (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) : (((((((/* implicit */_Bool) arr_0 [(signed char)4] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned char)9])) : (((/* implicit */int) var_10)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((int) (-(arr_0 [i_0 - 1] [i_1 - 4]))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (arr_3 [i_0] [i_1 + 2] [i_0 + 1]) : (arr_3 [i_0] [i_1 - 2] [i_0 - 2]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_8 [i_0] = ((/* implicit */int) arr_4 [i_0]);
            var_20 = ((/* implicit */unsigned char) (~(max((arr_6 [i_0 - 1]), (((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 3]))))));
        }
    }
    var_21 = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1504208934U))))));
    var_22 &= ((/* implicit */int) ((var_9) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8)))))))));
}
