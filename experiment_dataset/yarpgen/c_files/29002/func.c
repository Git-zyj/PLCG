/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29002
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
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) max((var_0), ((_Bool)1)))), (((int) (signed char)124))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = var_4;
        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((_Bool) var_1)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_17 = var_12;
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)32763)) ? ((-(arr_10 [(unsigned char)17]))) : (16911433728LL)))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [i_1 + 2]), (arr_6 [i_1 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 20)) || (var_7)))) : (var_12)));
        }
        /* vectorizable */
        for (long long int i_3 = 3; i_3 < 18; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) 3383276068341937327ULL);
            var_20 = ((/* implicit */unsigned char) arr_13 [i_1 + 1]);
        }
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -16911433727LL)) ? (var_8) : (((/* implicit */int) arr_2 [i_1 + 1]))))) ? (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) arr_1 [i_1 + 2]))));
        var_22 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((signed char) (signed char)31))), (var_11))), ((+((-(var_4)))))));
    }
}
