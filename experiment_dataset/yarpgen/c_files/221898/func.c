/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221898
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) -1117060389))))) ? (((((-1117060370) + (2147483647))) << (((((((/* implicit */int) (signed char)-5)) + (25))) - (19))))) : (var_10)))) + (var_5)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [6ULL] [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55550)) | (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)15] [(unsigned short)15])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0])))) : (((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_0 - 4])) : (-1047763986))))) : (((((/* implicit */int) var_7)) % (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 4]))))));
        var_12 = ((/* implicit */long long int) ((unsigned int) (+(((((/* implicit */int) var_9)) >> (((1117060389) - (1117060378))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 - 3])) ? (min((arr_8 [i_0] [10U] [i_0] [i_0]), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_9)))))))));
                    arr_9 [i_0 - 3] [i_0] [10LL] = ((/* implicit */short) min((min((((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [(signed char)3] [(signed char)3])), (536805376)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) * (var_0))))), (min((((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_0 - 4] [i_0 - 4])), (-1117060389)))), (var_5)))));
                    arr_10 [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [(signed char)0] [i_0]);
                }
            } 
        } 
        arr_11 [13U] [i_0] = ((/* implicit */int) -1LL);
    }
    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3 - 2] [i_3] [i_3] = ((/* implicit */unsigned char) arr_14 [i_3 - 3] [i_4 - 3] [i_7 - 1]);
                                arr_24 [i_6] [i_6] [i_6] [i_6] [(unsigned char)1] = -1117060389;
                                arr_25 [12LL] [i_4] [14U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) max((408697273661841906LL), (((/* implicit */long long int) arr_14 [(_Bool)1] [(_Bool)1] [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3 + 2]))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) / (var_0)))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_5])), ((unsigned short)55559)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (var_6)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_3 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1117060389)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_3])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) var_3);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-56)) != (((/* implicit */int) (signed char)127))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) arr_18 [i_3]);
    }
}
