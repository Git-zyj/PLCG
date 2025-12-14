/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20411
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
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_1] [i_0]);
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                }
                var_13 = ((/* implicit */short) ((max((((/* implicit */int) var_5)), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)28330)) - (28315))))))) | (((((/* implicit */_Bool) 8506047645183886923LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-28348)) : (((/* implicit */int) arr_6 [i_0] [i_1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) 0ULL);
    /* LoopSeq 1 */
    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_20 [(short)13] [i_4] [i_3] [(short)13] = ((/* implicit */short) min(((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_12 [i_3]))) - (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (8506047645183886923LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-2865)))))));
                    var_16 = ((/* implicit */long long int) ((unsigned char) ((unsigned char) ((arr_14 [i_3]) ? (((/* implicit */int) (short)23960)) : (((/* implicit */int) (short)32742))))));
                    var_17 = ((/* implicit */long long int) (short)-2865);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28331))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned short)11]))) : (var_6))))) : (min((9223372036854775807LL), (((((/* implicit */_Bool) (signed char)-3)) ? (-1915313432150892689LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25897)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) arr_19 [i_3 + 1] [i_3] [i_3 - 2])), (((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned char)144))))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -7007499478479839121LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (short)10132)) << (((((/* implicit */int) (short)-32766)) + (32773))))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_19 [i_3 + 1] [(short)8] [i_3])))))))))));
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) max(((_Bool)1), ((_Bool)0)));
    }
}
