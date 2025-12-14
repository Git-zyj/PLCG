/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41574
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [(short)14] = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(signed char)3] [(short)18] [i_2] [i_1 + 2])) && (((/* implicit */_Bool) 3982540204U))))), (var_4));
                    arr_8 [i_0] [(signed char)22] [i_1 + 3] [(short)19] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_1 + 1] [i_2]), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) 622103025U)) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1 + 1]) >= (var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18016543917720991674ULL)) ? (((/* implicit */int) arr_14 [i_2] [i_1 + 1] [i_2] [i_3] [(signed char)18] [i_1 - 1] [13LL])) : (((((/* implicit */int) arr_14 [8] [(signed char)18] [(short)16] [16LL] [i_4] [i_1 + 2] [(signed char)17])) << (((((/* implicit */int) var_2)) - (5946)))))));
                                var_11 = ((/* implicit */unsigned short) max((8553679000850935755LL), (5320900856496775776LL)));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2] [4U] [i_1 + 3] [i_0] [(unsigned short)18] [(unsigned short)12] [(short)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1] [i_0]))) : (3398328089U)))) == (min((arr_15 [i_0] [i_1 + 3] [i_1 - 1] [i_1 + 3]), (((/* implicit */long long int) 1564475914U))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_2)), (var_7))), (var_7)))) ? (min((max((9251306070107202592ULL), (((/* implicit */unsigned long long int) var_2)))), (((unsigned long long int) 7633529209795236599LL)))) : (((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((-2630716473395832232LL) < (var_4)))), (var_8)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)32753))))) : (var_4)));
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        arr_20 [i_5] [2U] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) max((10488361301506326050ULL), (((/* implicit */unsigned long long int) (unsigned short)49916))))) && (((/* implicit */_Bool) arr_13 [i_5] [i_5] [6ULL] [(unsigned short)4] [5] [(signed char)5] [i_5])))));
        var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min(((signed char)66), (arr_16 [i_5] [i_5])))), ((-(7795226715747614222ULL)))));
        arr_21 [i_5] = ((/* implicit */int) max((((/* implicit */short) (signed char)-60)), ((short)-30805)));
        arr_22 [(signed char)5] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (-3103312713475273891LL) : (var_4))));
    }
}
