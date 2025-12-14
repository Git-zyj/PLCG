/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24838
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-29884))))) ? (((var_6) / (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0]))))))) ? (((arr_2 [i_0 + 2] [i_0]) << (((max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_14)))) - (11594325320842090925ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14729132716449318752ULL)))))) <= (((arr_2 [i_0] [(short)7]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170)))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (_Bool)0);
        var_17 = ((/* implicit */unsigned long long int) ((10561946196396858534ULL) < (((((/* implicit */unsigned long long int) 9223372036854775807LL)) / (2778350036773232745ULL)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_1] [(short)5]))) ? (3442582599U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1] [(signed char)3])))))));
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            arr_8 [i_2] [4U] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)3268)) * (((/* implicit */int) (signed char)64))))));
            arr_9 [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_7 [i_2]))))));
            arr_10 [i_2] [i_1] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_2]))));
            arr_11 [(unsigned char)5] [i_2] [i_1] = ((/* implicit */long long int) (unsigned char)170);
        }
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_15 [i_3] [13U] = (signed char)54;
            var_19 = ((/* implicit */long long int) min((var_19), ((~((-(4243181237556223308LL)))))));
        }
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)21)) && (((/* implicit */_Bool) (unsigned char)95))))) : (((/* implicit */int) (signed char)122))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 979420404))));
                var_22 = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5]))) : (((((/* implicit */_Bool) arr_21 [i_1] [i_4])) ? (((/* implicit */long long int) 1999631433)) : (var_14)))));
            }
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                arr_24 [i_1] [i_4] [i_6] = arr_12 [i_1] [i_1] [(unsigned char)13];
                arr_25 [i_1] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) 0LL));
            }
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned char) arr_18 [i_4] [i_1])))));
        }
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (3676570068063349802LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))));
        arr_26 [i_1] [i_1] = ((/* implicit */short) var_1);
    }
    var_25 = ((/* implicit */unsigned int) (_Bool)1);
    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-5602365767139080644LL)))) ? ((-(var_5))) : (((unsigned long long int) (+(((/* implicit */int) var_13)))))));
}
