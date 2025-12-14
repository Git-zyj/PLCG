/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228430
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((1767743947U) >> ((((~(((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2 + 1])))) - (14436))));
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-67)), (max((2581651070U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]))))))), (var_0)));
                    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */unsigned int) var_16)) : (arr_2 [(signed char)19] [i_2 - 1] [i_1]))), (min((2527223348U), (arr_0 [i_2 - 1] [i_2 + 2])))));
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (min((min((2527223327U), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2 + 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_2 + 3] [i_2 + 3]) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))))));
                        var_22 = ((/* implicit */unsigned long long int) (!(((3103157335U) <= (((/* implicit */unsigned int) ((int) (signed char)-50)))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 + 3] [i_3 + 2] [i_3 + 3] [i_2]))) > (arr_9 [i_3 + 1] [i_3 + 1] [(signed char)16] [i_2] [i_3 - 2]))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 1) 
                    {
                        var_24 += ((/* implicit */unsigned long long int) arr_8 [i_4 + 4] [i_1] [i_2 - 1]);
                        var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_26 += ((((/* implicit */_Bool) ((int) -312430324))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) -312430333)), (arr_14 [i_1] [i_2 - 1] [i_4 + 2] [i_1] [i_0] [i_4 + 4] [i_4])))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [(signed char)6] [i_1] [i_2] [i_0] [i_5]))))), ((+(7192972601796106966LL))))));
                            var_27 = ((((((/* implicit */_Bool) var_8)) ? (arr_14 [i_0] [12ULL] [i_2 + 1] [i_4] [i_2] [i_5] [i_0]) : (arr_14 [i_0] [i_1] [i_2 - 1] [i_5] [i_2] [i_0] [i_5]))) / ((-(var_8))));
                            var_28 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) (unsigned char)107)), (1191809947U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)10236)), (2527223348U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 + 2] [i_2 + 1])))))))));
                            var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((12513675612467939123ULL) + (arr_10 [18ULL] [i_1] [i_0])))) ? (((((/* implicit */_Bool) -312430324)) ? (var_9) : (arr_6 [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))))) ? ((((_Bool)1) ? (3103157362U) : (3103157357U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_21 [i_4 + 3] [i_4 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_4 + 3] [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) arr_4 [i_4 - 1] [i_2 + 3] [i_2 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4 + 2] [i_2 + 3] [i_2 + 2]))))) : (max((((/* implicit */int) arr_4 [i_4 - 2] [i_2 + 3] [i_2 + 3])), (arr_20 [i_4 + 3] [i_4 - 2] [i_4 + 1] [i_4 + 2] [i_2 + 2] [i_2 - 1])))));
                            var_30 = max((((/* implicit */int) arr_3 [i_1] [i_4 - 1])), (((int) 3103157349U)));
                            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_9 [i_0] [i_2 + 2] [i_2 + 2] [i_2] [i_4 + 1])))));
                        }
                        for (unsigned long long int i_7 = 4; i_7 < 19; i_7 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) var_0);
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_2] [i_4 + 2] [i_7 - 2]))))) % (((int) var_12))));
                        }
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned int) var_11);
}
