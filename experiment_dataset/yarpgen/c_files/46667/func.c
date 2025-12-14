/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46667
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) (_Bool)1);
        var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_2 [i_0 - 1] [i_0])))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) 3976426206U)), (((long long int) (-(((/* implicit */int) (unsigned char)106)))))));
                        arr_12 [i_2] [i_1] [i_1] [i_1] [0U] |= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (281474976702464ULL)))))) ? (((/* implicit */int) (unsigned short)30998)) : (((/* implicit */int) max(((unsigned char)95), ((unsigned char)105)))));
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (+(max((arr_5 [2] [i_1] [i_2] [i_3 - 1]), (arr_5 [i_0 + 1] [9U] [(unsigned char)10] [i_2])))));
                        arr_14 [i_2] [i_1] |= ((/* implicit */signed char) (unsigned char)253);
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) var_2);
    var_18 = ((/* implicit */long long int) var_10);
}
