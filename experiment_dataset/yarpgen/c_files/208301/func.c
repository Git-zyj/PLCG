/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208301
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [11U])) != (((/* implicit */int) arr_1 [i_0] [i_0])))))))), (((arr_0 [i_1] [i_0]) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_7 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0]);
                    arr_8 [i_2] = ((/* implicit */short) (((~(arr_5 [9U] [i_2] [9U]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [10ULL]))) == (((arr_0 [i_0] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    arr_9 [i_2] [i_1] [(unsigned short)19] [i_2] = max((((/* implicit */long long int) (signed char)-70)), (-828670884475730279LL));
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
                    var_12 = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */int) arr_2 [13U] [13U])) % (((/* implicit */int) arr_3 [(unsigned short)16]))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) / (arr_6 [(short)19]))))) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-3295936924199790524LL)));
                    arr_13 [i_0] [i_1] [i_3] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39945))) / (828670884475730278LL));
                    var_14 = ((/* implicit */unsigned long long int) (((~(arr_11 [21ULL] [i_1] [i_0]))) % (arr_11 [i_3] [i_1] [i_0])));
                    arr_14 [i_0] [i_1] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                    var_15 = ((/* implicit */unsigned int) ((arr_5 [i_0] [i_1] [i_3]) / (arr_5 [i_0] [i_0] [i_3])));
                }
                var_16 = ((/* implicit */short) max(((-(((/* implicit */int) ((arr_0 [i_0] [(_Bool)1]) <= (((/* implicit */unsigned long long int) arr_5 [6LL] [i_1] [i_1]))))))), (((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_7);
}
