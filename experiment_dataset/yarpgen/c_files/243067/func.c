/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243067
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
    var_20 = ((/* implicit */short) (unsigned char)68);
    var_21 = ((/* implicit */long long int) var_4);
    var_22 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0]) & (arr_1 [i_0] [(unsigned short)17])))) ? (arr_1 [19U] [i_0]) : (((/* implicit */int) ((arr_1 [(short)7] [20LL]) < (arr_1 [i_0] [i_0])))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            var_24 = (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)68)) : (arr_1 [15] [i_1]))));
            var_25 = ((((arr_3 [i_1]) == (((/* implicit */unsigned int) arr_0 [17ULL])))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -1)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) arr_0 [(unsigned char)19])))));
            var_26 = ((/* implicit */short) ((unsigned char) (unsigned short)3));
            arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1])) ? (511U) : (arr_3 [16ULL])));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_0])) : (arr_0 [i_0])));
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) && (((/* implicit */_Bool) arr_6 [i_2] [i_2] [(unsigned short)3])))))));
            var_29 = ((/* implicit */unsigned short) var_13);
        }
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [16LL])) ? (((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0] [20ULL]) : (arr_2 [i_0] [(unsigned char)14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) < (var_10)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                {
                    arr_16 [(unsigned char)16] [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4 + 1] [(unsigned short)14] [(short)17])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22543))) > (8641368434639615740ULL)))) : (((/* implicit */int) ((short) var_9)))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), ((unsigned short)65518)));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_32 &= (+(arr_18 [13LL] [i_4] [i_4 + 1]));
                        arr_21 [i_0] [i_0] [i_3] [i_4] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_4 + 1])) ? (((/* implicit */unsigned long long int) (~(arr_11 [i_3])))) : (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_5])))));
                        var_33 = 1704202886;
                        var_34 = ((((/* implicit */long long int) 1447647596)) ^ (-4990668962498032789LL));
                    }
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)15] [i_0])) ? (arr_11 [i_0]) : (((/* implicit */int) arr_15 [i_0] [14LL] [10U]))))) < (((((/* implicit */_Bool) (unsigned short)22054)) ? (arr_12 [(_Bool)1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
    }
    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) 9223372036854775807LL))));
}
