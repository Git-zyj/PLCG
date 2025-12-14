/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228944
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
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (arr_0 [i_0]))))))));
        var_20 -= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_22 *= ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_19))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_4)) ? (((arr_3 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
            arr_7 [i_1] [15U] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)10357))) == (var_5))), ((_Bool)1))))));
            var_25 = ((max((((_Bool) (_Bool)1)), ((_Bool)1))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)75)))) : (((/* implicit */int) ((unsigned char) (unsigned short)28942)))))));
            var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((+(2492510016U)))))), (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_6 [4U] [4U]))))))))));
        }
    }
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 4; i_2 < 12; i_2 += 4) 
    {
        var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
        arr_10 [i_2] [i_2 - 4] = ((/* implicit */unsigned int) arr_5 [i_2]);
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (unsigned int i_6 = 3; i_6 < 8; i_6 += 4) 
                {
                    {
                        arr_21 [i_6] [i_4] [i_4] [4U] = ((/* implicit */_Bool) arr_19 [i_6 + 1] [i_5] [(unsigned char)3] [i_3]);
                        arr_22 [i_6] = ((/* implicit */_Bool) 2554605681U);
                        arr_23 [i_6] [(unsigned short)0] [i_6 + 2] [i_6] [i_6 - 2] = ((/* implicit */_Bool) ((max((1618266013U), (((/* implicit */unsigned int) (signed char)90)))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-77)))))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [3U] [3U] [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (2676701275U))))))), ((+(((((/* implicit */_Bool) 1618266015U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8578170369630856969ULL)))))));
    }
}
