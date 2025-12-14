/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207336
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
    var_20 = ((/* implicit */unsigned short) ((long long int) (unsigned short)65534));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_22 ^= (~(((((/* implicit */int) arr_0 [i_0 + 1])) << (((((/* implicit */int) (unsigned short)65523)) - (65518))))));
        var_23 = ((/* implicit */unsigned char) (!(((((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (_Bool)0)))) <= (((((/* implicit */int) var_11)) >> (((arr_2 [i_0]) - (2048923269985613836ULL)))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_2] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -489181770)) || (((/* implicit */_Bool) -2147483647))))), ((+(arr_2 [i_2 + 2]))));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_5 [i_1] [4] [12LL] [(unsigned short)2]))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) (short)-5354))) ^ ((-9223372036854775807LL - 1LL)))) % (arr_4 [i_0] [i_0]))) * (((arr_4 [i_0 - 1] [i_0 - 1]) ^ (arr_4 [i_0 - 1] [i_0 + 1])))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            var_26 = ((((/* implicit */int) ((arr_12 [i_3]) < (((/* implicit */long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) (unsigned char)120)))))))) > (((/* implicit */int) max((arr_9 [i_4]), (min((arr_3 [i_3] [i_4] [i_3]), (var_13)))))));
            arr_13 [(signed char)8] [i_4] = ((/* implicit */short) ((6994848864847437913ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))));
        }
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) min((arr_0 [(unsigned short)18]), (((/* implicit */unsigned short) arr_9 [i_3]))))) * (((/* implicit */int) arr_10 [(unsigned char)8]))))), ((+((-9223372036854775807LL - 1LL)))))))));
    }
}
