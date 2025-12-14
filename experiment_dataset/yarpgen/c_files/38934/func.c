/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38934
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [(_Bool)1] [i_2] [i_0]);
                        arr_8 [i_0] [i_0 - 2] [i_3] = ((/* implicit */unsigned short) (-(arr_2 [i_0 - 1] [i_2 - 1])));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? ((+(arr_0 [i_0 + 1] [i_1]))) : (arr_6 [16] [i_1] [16] [i_3] [i_3] [i_0])))) ? (max((((/* implicit */int) (short)-15779)), (max((111202911), (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (_Bool)1)))))));
                        var_16 = ((/* implicit */long long int) max(((~((~(((/* implicit */int) (unsigned short)0)))))), ((~((~(var_0)))))));
                    }
                } 
            } 
        } 
        arr_9 [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [(signed char)18] [i_0] [i_0] [(signed char)18] [2] [i_0])) == (max((((-1531269939) ^ (((/* implicit */int) (signed char)101)))), (((/* implicit */int) (_Bool)1))))));
        var_17 |= ((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)-20)), (min((((/* implicit */unsigned short) arr_7 [(signed char)6] [18] [i_0 - 2] [i_0] [6LL] [i_0 - 1])), (var_10)))));
    }
    var_18 += ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : ((+(((int) var_3)))));
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */int) (unsigned short)10390)), (2113728666))), (((((/* implicit */int) (unsigned short)65526)) >> (((880610480) - (880610460))))))))));
}
