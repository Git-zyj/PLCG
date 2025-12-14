/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242042
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
    var_10 = ((/* implicit */unsigned short) (unsigned char)230);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [(short)2]))))) << ((((-(((/* implicit */int) var_0)))) + (128))))), (((/* implicit */int) ((_Bool) var_2)))));
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 - 1])), (16761743348087537011ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_0 [i_0] [i_0 - 3]))));
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((unsigned short) (unsigned short)55083)))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)31494)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (unsigned short)32640)))))), (((((/* implicit */_Bool) arr_9 [i_0 - 4] [(short)3] [i_0 - 1] [i_0 - 4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)17057)))))))));
    }
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [(unsigned short)9])), (var_5)))) ? (((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2564535624U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) var_3))))))))) ? (((/* implicit */int) ((unsigned char) ((unsigned short) var_9)))) : (((/* implicit */int) (unsigned char)90))));
        var_15 = ((/* implicit */short) 2564535633U);
        arr_17 [i_4 + 4] [i_4] = ((/* implicit */long long int) var_1);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_6))) != (((((/* implicit */int) var_0)) - (((/* implicit */int) var_4))))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13594))) != (1730431652U))))));
    }
    var_17 |= ((/* implicit */unsigned char) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (unsigned short)40230)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)25))))));
    var_18 = ((/* implicit */unsigned long long int) var_4);
}
