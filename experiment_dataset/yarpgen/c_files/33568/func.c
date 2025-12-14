/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33568
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2 + 1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) == (18287599503697206529ULL)));
                            var_10 += ((/* implicit */unsigned int) ((((arr_7 [i_1 + 1] [i_1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 3; i_4 < 22; i_4 += 4) 
                            {
                                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((_Bool) ((arr_1 [(_Bool)0]) ? (125829120) : (((/* implicit */int) ((((/* implicit */_Bool) 8116667551273077915ULL)) && (((/* implicit */_Bool) (short)-31136)))))))))));
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [(short)20] [i_3])) ? (((/* implicit */unsigned int) arr_5 [(unsigned char)8])) : (var_9))))));
                                var_13 = ((/* implicit */unsigned char) arr_8 [i_0] [9] [i_2] [i_3] [(_Bool)1]);
                                var_14 = ((/* implicit */int) ((unsigned char) max((((/* implicit */int) arr_1 [i_0])), ((((_Bool)1) ? (-1853102247) : (((/* implicit */int) (short)-31136)))))));
                                arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [(unsigned short)9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_0)) ? (max((var_2), (((/* implicit */int) (short)-19607)))) : (((/* implicit */int) ((_Bool) 1073741822)))))));
                            }
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */signed char) (((~(((((/* implicit */long long int) var_9)) & (arr_3 [9ULL] [i_0]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_4 [i_1 - 1] [i_0] [i_0] [i_1 - 2]) : (32764U))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [4U] [i_5 - 2] [i_5] [i_5 - 3])) ? (((/* implicit */int) arr_6 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 2])) : (((/* implicit */int) arr_6 [i_5 - 1] [i_5 + 1] [13] [i_5 + 1])))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19589)) | (((/* implicit */int) (short)19606))));
    }
    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        var_17 -= ((/* implicit */long long int) (unsigned char)128);
        arr_20 [7] [i_6] = var_9;
    }
    var_18 = max((((/* implicit */int) var_7)), (-488930188));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_9))));
}
