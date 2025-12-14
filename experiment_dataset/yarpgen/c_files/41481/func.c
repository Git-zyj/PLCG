/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41481
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
                    var_20 = ((/* implicit */unsigned long long int) ((long long int) min((arr_4 [i_2 + 3] [i_1 - 1] [(_Bool)1] [i_1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)5460);
                    arr_7 [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) arr_2 [i_0 - 2])), (((unsigned short) arr_0 [i_1])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) arr_4 [i_2 + 1] [i_1 + 2] [i_0] [i_0 - 1]))))))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (2U)));
        arr_9 [i_0] = ((/* implicit */unsigned int) ((_Bool) min((arr_4 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5]), (((/* implicit */unsigned short) ((short) -1))))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max((1291105108), (((/* implicit */int) (_Bool)0)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
        var_22 = ((/* implicit */long long int) (signed char)74);
    }
    var_23 = ((/* implicit */_Bool) var_2);
}
