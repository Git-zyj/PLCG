/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25811
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
                var_15 += ((/* implicit */long long int) var_4);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) /* same iter space */
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */int) var_13);
                    var_16 *= ((/* implicit */short) ((((((/* implicit */int) (short)6983)) >= (((/* implicit */int) (_Bool)1)))) ? (var_4) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) var_1)))))) >= (((((/* implicit */_Bool) 1273372116)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9))))))));
                    arr_11 [i_0] [(short)16] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 878297267)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_2 - 2] [i_2 - 2]))))) ? (((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-10765)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])))) + (2147483647))) >> ((((((_Bool)1) ? (15137720216722242161ULL) : (((/* implicit */unsigned long long int) 914798210)))) - (15137720216722242133ULL))))) : (((var_7) ? (((((/* implicit */_Bool) var_12)) ? (-1) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (var_7)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_13 [(unsigned short)20] [(unsigned short)20] [i_2] [i_3 - 1] [i_3]) + (((/* implicit */int) (signed char)-29))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned short)4] [0] [i_1]))) : ((-(var_0))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)-7010), (((/* implicit */short) (signed char)-110))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 2])))))));
                        arr_14 [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7010))) & (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7011)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))) & (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766)))))))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */int) (short)-6988)) - (-2147483641)));
                        arr_15 [i_1] [15U] [15U] [i_2] [i_3 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1777381004)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 940092233)) ? (((((/* implicit */int) (_Bool)0)) & (704537934))) : (532676608)))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)12)) ? (-940092233) : (((/* implicit */int) (short)6975))))) % ((+(2372941231U)))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_18 [i_0] [(short)4] [(short)17] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-48))));
                        var_19 -= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)123)) && (((/* implicit */_Bool) 9223372036854775807LL)))))));
                        arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35967)) ? (-33554432) : (2080768)))) ? (((/* implicit */int) (unsigned short)26232)) : (((/* implicit */int) (short)-19100))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
                {
                    arr_22 [(signed char)6] [i_1] [i_1] = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) : ((-(3191686038592048030ULL)))));
                    var_20 += ((/* implicit */unsigned long long int) 1041661192);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (+((-(min((((/* implicit */int) (unsigned char)21)), (-940092233)))))));
}
