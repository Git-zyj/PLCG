/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31558
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_10 [i_0] = 1151795604700004352ULL;
                    var_11 = ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_0 + 1] [i_0]) : (arr_4 [i_0] [i_0 + 1] [i_0]));
                    var_12 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_0 [i_2] [i_0 - 3]))) ? ((+(((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) var_5))))));
                    var_13 ^= ((/* implicit */short) (~((-(((/* implicit */int) (unsigned short)65535))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    var_14 ^= ((/* implicit */short) ((((/* implicit */int) ((0ULL) <= (0ULL)))) != (arr_12 [(signed char)5] [i_0] [i_0] [i_0 - 1])));
                    var_15 *= ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 3] [i_0 + 1] [i_3 + 1])) ? (((/* implicit */unsigned int) 255)) : (var_4));
                    var_16 = ((/* implicit */_Bool) arr_8 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        var_17 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-1))));
                        var_18 += ((/* implicit */unsigned short) var_4);
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((_Bool) var_7)))));
                        arr_18 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])))));
                        arr_19 [i_1] [i_3] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) arr_0 [i_5] [i_3 - 1]))))) : (((0ULL) >> (((((/* implicit */int) arr_11 [(unsigned short)4] [(unsigned short)4] [i_3])) + (1925)))))));
                        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -256)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_3 [i_1] [(unsigned short)4] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) : (arr_14 [i_0] [i_1] [i_3] [i_5 + 2])));
                    }
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    var_21 ^= (signed char)-72;
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((signed char) arr_23 [i_0] [i_8 + 1] [i_6] [i_1] [i_0 - 3] [i_0]));
                                var_22 = ((/* implicit */int) ((arr_23 [i_0 - 2] [i_0] [i_0 - 3] [i_1] [i_8 + 1] [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_7])) : (((/* implicit */int) arr_26 [i_8] [i_0] [i_6] [i_0] [i_0]))))) : (((((/* implicit */_Bool) (signed char)71)) ? (7565114147996647508ULL) : (18ULL)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((unsigned long long int) arr_20 [i_0] [i_0 - 3] [i_0] [i_0 - 3]));
                }
                var_24 = ((/* implicit */_Bool) min((((var_2) ^ (arr_3 [i_0] [i_0 - 3] [i_0]))), (arr_3 [i_0] [i_0 - 2] [i_0])));
                arr_30 [i_1] [i_1] |= ((/* implicit */unsigned short) 4294967293U);
                var_25 = ((((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) var_1)))) ? (arr_5 [i_0]) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) / (arr_7 [i_0] [i_0] [i_1])))), (max((((/* implicit */unsigned long long int) (signed char)118)), (18446744073709551615ULL))))));
            }
        } 
    } 
    var_26 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
}
