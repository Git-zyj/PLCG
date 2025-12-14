/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225971
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    var_13 = (!((!(((/* implicit */_Bool) 14610218704423844952ULL)))));
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_8);
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)-27)), (5238682861348126658ULL)));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    arr_11 [i_0] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0 - 2] [i_3]))));
                    arr_12 [(signed char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0 - 2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_4] [i_4 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0 - 1] [i_4 + 1]))));
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [(short)5])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) arr_4 [i_1])))))));
                    arr_16 [i_0] [i_1] [i_4 + 2] [(unsigned char)4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32766)) || (((/* implicit */_Bool) arr_4 [i_0]))));
                    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 - 4] [i_0 - 4] [i_0 - 1])) | (((/* implicit */int) var_4))));
                }
                arr_17 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((short)32754), (((/* implicit */short) (_Bool)0))))) | (((/* implicit */int) (_Bool)1)))))));
                var_16 *= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0])), (var_11)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1083976843U)) ? (((/* implicit */int) ((short) (signed char)112))) : (((/* implicit */int) (short)15562))))) : (((((/* implicit */_Bool) min((1083976846U), (((/* implicit */unsigned int) (short)-11009))))) ? (max((((/* implicit */unsigned int) var_8)), (1394370969U))) : (2900596337U)))));
}
