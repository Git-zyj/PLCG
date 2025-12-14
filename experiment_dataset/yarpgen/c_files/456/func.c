/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/456
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
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */int) (unsigned short)65535);
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)1)))))) | (((var_7) / (((/* implicit */unsigned int) var_5)))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                {
                    arr_9 [i_0 + 3] [i_1 + 1] |= ((/* implicit */unsigned char) var_13);
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ^ (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) var_11)))))))) ? (((/* implicit */int) (unsigned char)5)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (-1) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) var_8)))))))));
                    var_19 = ((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_1 - 2]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_4))) % (((min((((/* implicit */int) (unsigned char)255)), (var_5))) / ((+(((/* implicit */int) var_12))))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) arr_6 [i_3])))))) / (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_5 [i_0 + 3] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */int) arr_0 [i_1 - 2])) & (((/* implicit */int) (unsigned char)178)))) : (((/* implicit */int) var_2))));
                    }
                    for (int i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        arr_14 [i_5 - 1] = ((/* implicit */int) ((unsigned short) max((arr_8 [i_0 - 2] [i_5 + 1] [i_1 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 750420513U)) && (((/* implicit */_Bool) var_6))))))));
                        var_22 -= ((/* implicit */long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (arr_8 [i_5 + 2] [i_3] [(unsigned char)14]))) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) * (((unsigned int) (unsigned char)178))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) 2478131685527013223ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((var_3) > (((/* implicit */int) var_6)))))));
                        var_24 = ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0] [i_6]);
                    }
                }
                for (unsigned int i_7 = 3; i_7 < 16; i_7 += 4) 
                {
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1 - 2] [i_1 - 2] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) -1119621956)) : (arr_16 [i_7] [i_7 - 1] [6U])))) : (((unsigned long long int) 13139889456461138997ULL))))) ? (max((((/* implicit */unsigned int) var_8)), (1245129418U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1245129418U)))))))))));
                    var_26 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((_Bool) (short)31724))), ((+(var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) != (((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_4)))))))));
                    var_27 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)251)) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (1119621955)))))), (max((((/* implicit */int) ((4438248775255549551ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121)))))), (((int) var_4))))));
                }
                arr_21 [(unsigned char)9] |= ((/* implicit */int) arr_8 [i_0] [(short)7] [7]);
            }
        } 
    } 
    var_28 = ((/* implicit */short) var_12);
    var_29 |= ((/* implicit */unsigned int) (unsigned char)8);
}
