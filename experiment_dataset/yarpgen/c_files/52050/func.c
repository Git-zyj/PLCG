/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52050
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
    var_12 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_7)) : (var_0)))) > (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29269)))))))), (((((((/* implicit */long long int) ((/* implicit */int) (short)14724))) - (var_6))) * (((/* implicit */long long int) ((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [(short)9] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1]))))) % ((~(((/* implicit */int) arr_1 [i_1]))))))) || (((/* implicit */_Bool) (~((+(arr_2 [i_0]))))))));
                var_13 = ((/* implicit */_Bool) arr_1 [13ULL]);
                var_14 = ((/* implicit */int) max((var_14), (min((((((((/* implicit */unsigned long long int) arr_0 [i_0])) != (18446744073709551615ULL))) ? ((+(arr_2 [i_0]))) : (arr_4 [(short)0] [i_1] [(short)0]))), (((((((/* implicit */int) (short)30748)) / (arr_2 [i_0]))) + (arr_0 [i_1])))))));
                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) > (-1)))), ((~(arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13509932708857400083ULL)) ? (((/* implicit */int) (unsigned short)65517)) : ((~(((/* implicit */int) (_Bool)0))))))) : (((((unsigned long long int) arr_1 [i_0])) + (((((/* implicit */_Bool) 1380574736)) ? (((/* implicit */unsigned long long int) -1380574744)) : (4936811364852151535ULL)))))));
                var_16 |= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) * (min((((/* implicit */int) ((((/* implicit */unsigned long long int) -1380574744)) == (9925274762043700568ULL)))), (arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) arr_8 [12ULL]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_2] [i_3] [i_3] [i_5] [i_4 + 1] [i_3] [i_6] &= ((/* implicit */_Bool) ((int) ((unsigned char) (-(arr_11 [(unsigned short)3] [i_4])))));
                            var_18 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) arr_18 [i_2] [i_2] [i_4 - 1] [i_5] [i_6])))));
                        }
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((13509932708857400074ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1])))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_2]))))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1)))) | (((((/* implicit */long long int) 1380574749)) ^ (-8156993555171076148LL)))))));
                            arr_27 [i_2] = ((/* implicit */_Bool) (~(9223372036854775807LL)));
                            var_19 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) arr_0 [i_4])) : (arr_19 [i_2])))))))));
                            arr_28 [i_2] [i_3] [i_4 + 1] [i_2] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2]))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_20 &= ((/* implicit */long long int) arr_25 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_3] [i_3]);
                            var_21 = ((/* implicit */long long int) arr_3 [i_4 + 1] [i_2] [i_4 + 1]);
                        }
                        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_25 [i_2] [i_2] [i_4] [i_2] [i_2]))) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_14 [(short)10] [(short)4])))))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-121)) : (-1956826985)))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_30 [i_4] [i_3] [i_4] [(unsigned short)5] [i_9] [i_9] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)11596))))))));
                        arr_35 [i_4] [i_2] [5LL] = min(((+(4611686018427371520ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7355625520605365643ULL)) ? ((~(((/* implicit */int) arr_10 [i_2])))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)960))))))));
                        arr_36 [i_9] [i_4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((arr_16 [i_2] [i_2] [i_2] [i_2] [4LL] [i_2]) ? (((/* implicit */int) arr_3 [i_2] [i_2] [0])) : (((/* implicit */int) arr_15 [i_4] [i_9]))))))) % ((~(min((((/* implicit */long long int) arr_6 [i_2])), (arr_8 [i_2])))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_1 [i_3]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        arr_39 [i_2] [i_3] [i_4 - 1] [i_3] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((10929318096082075204ULL) / (((/* implicit */unsigned long long int) 1606943130))))) ? (((/* implicit */int) ((_Bool) arr_16 [i_3] [i_3] [i_4 + 1] [i_3] [i_3] [i_2]))) : ((+(((/* implicit */int) (signed char)-12)))))) << (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26561)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_3 [i_3] [i_2] [i_2]))))) / (3426503486010957879ULL)))));
                        arr_40 [4ULL] [(_Bool)1] [4ULL] [i_2] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) ((13835058055282180108ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2])))))), (min((((/* implicit */unsigned int) arr_22 [i_3] [i_2] [i_3] [i_2] [i_2])), (arr_19 [i_2])))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_4 [i_10] [14] [i_2])) == (4611686018427371507ULL))))));
                    }
                }
            } 
        } 
    } 
}
