/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233996
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
    var_14 = ((/* implicit */unsigned int) ((((3816936124491434982ULL) << (((16173659391729711046ULL) - (16173659391729711042ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17075)))));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_12)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (max((var_6), (((/* implicit */unsigned int) (short)-26007)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6224011535384368264LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11633)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                arr_9 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5504)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)14218)))) : (max((5156471077890055624ULL), (((/* implicit */unsigned long long int) 2518073360U))))));
                arr_10 [(short)12] [i_1 - 1] [i_0] = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (short)26007)) : (((/* implicit */int) (short)-10007))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
            }
            for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                arr_14 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25999)) ? (11204550382363457995ULL) : (((/* implicit */unsigned long long int) -8335141756373135043LL)))))));
                var_16 = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_8) : (3544730429U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
            }
            var_17 = ((/* implicit */short) (!((_Bool)1)));
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_18 &= ((/* implicit */short) (_Bool)1);
        var_19 &= ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))));
        var_20 = ((/* implicit */long long int) (_Bool)1);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4] [(unsigned char)4])) && (((/* implicit */_Bool) (short)-25998))))) : (((/* implicit */int) ((_Bool) var_4))))))));
    }
}
