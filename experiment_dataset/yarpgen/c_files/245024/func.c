/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245024
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (unsigned char)110))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = ((((/* implicit */int) (_Bool)1)) - (max((arr_3 [i_1 + 1] [i_1 + 2] [i_0]), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned char)102)))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        var_13 ^= ((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned char)22)), ((-(((/* implicit */int) (unsigned char)102)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 - 2] [i_1 - 1] [i_1 - 1] [i_1])))))));
                        arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-3)))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)212)))))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) max((((arr_4 [i_1 + 1] [i_1 + 4]) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 4] [i_1])) : (((/* implicit */int) (unsigned short)42274)))), (((((/* implicit */_Bool) arr_8 [i_1 + 4] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))))));
                    }
                    var_14 = ((/* implicit */short) max((((max((-2879170337094033351LL), (((/* implicit */long long int) arr_5 [i_2])))) % (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))), ((+(-2879170337094033351LL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)255)) | (((/* implicit */int) (unsigned short)16256))))) ? (((/* implicit */int) (short)24798)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53229))))));
        arr_18 [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)148)) + (((/* implicit */int) (unsigned char)44)))))));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_15 ^= ((/* implicit */long long int) (!(min(((!(((/* implicit */_Bool) (unsigned short)20469)))), ((!(((/* implicit */_Bool) (short)19002))))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) 16U)))))));
    }
    var_17 *= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)90))))), (((((/* implicit */_Bool) min((477021436), (((/* implicit */int) (unsigned char)81))))) ? ((-(((/* implicit */int) (unsigned char)165)))) : (((/* implicit */int) min((var_10), (((/* implicit */short) var_5)))))))));
}
