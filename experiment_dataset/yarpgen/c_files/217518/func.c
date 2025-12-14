/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217518
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
    var_16 = max((36028797018963967ULL), (min((var_0), (var_11))));
    var_17 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 9223372036854775788LL)))) ^ (max((868480010U), (((/* implicit */unsigned int) -697689433)))))), (868480029U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) arr_3 [(unsigned char)3] [i_1]);
            var_19 = ((/* implicit */unsigned char) var_10);
            arr_4 [i_0] = ((var_9) + (((/* implicit */int) ((3426487286U) <= (((/* implicit */unsigned int) 1617035243))))));
        }
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0 + 3] [i_2 + 2]))));
            var_21 = ((/* implicit */unsigned char) (~(var_9)));
        }
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1931881600610760087ULL)) ? (((/* implicit */int) (_Bool)1)) : (-697689433)))) ? (((((/* implicit */_Bool) (unsigned short)25492)) ? (((/* implicit */unsigned long long int) 633359843410555070LL)) : (16148903337814578578ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 571957152676052992LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))))))));
                    var_23 = ((/* implicit */unsigned short) ((arr_10 [i_0 + 2]) && (arr_10 [i_0 + 2])));
                    arr_12 [7U] = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
        var_24 = ((/* implicit */short) var_12);
    }
}
