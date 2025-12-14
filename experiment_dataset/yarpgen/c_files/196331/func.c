/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196331
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3859411868U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-6), (var_6)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)63174)))), (((int) (~(arr_8 [(signed char)20] [i_1] [i_2]))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64033))) : (min((((/* implicit */unsigned int) var_5)), (min((arr_4 [i_0]), (((/* implicit */unsigned int) var_4))))))));
                    arr_10 [i_2] [i_2] = ((/* implicit */_Bool) max(((((!(arr_7 [5LL] [5LL] [i_2]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) arr_3 [i_1] [i_0]))))))), (((/* implicit */int) ((((((/* implicit */int) var_4)) == (((/* implicit */int) (signed char)127)))) || (((/* implicit */_Bool) ((int) arr_7 [i_0] [i_1] [(signed char)13]))))))));
                }
                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1373321577)) && (((/* implicit */_Bool) 144115188075855868LL))));
                var_17 = ((/* implicit */signed char) ((-1113618951) / (((/* implicit */int) (unsigned short)49152))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned short) var_5)), (var_8))), (((/* implicit */unsigned short) (_Bool)1)))))));
            }
        } 
    } 
}
