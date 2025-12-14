/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242140
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
    var_10 += ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-42713539), (((/* implicit */int) (signed char)-22))))) ? (min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1]))) : (((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0 + 2])), (((((((/* implicit */int) (signed char)-22)) + (2147483647))) >> (((((/* implicit */int) (signed char)127)) - (114))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) 42713539))))))));
                    var_13 -= ((/* implicit */long long int) arr_4 [i_0 - 1] [i_1] [i_2] [i_2]);
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_14 *= ((/* implicit */int) (((!((!(((/* implicit */_Bool) arr_8 [i_3])))))) && ((((!(((/* implicit */_Bool) (short)-24513)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_2))))))));
        arr_10 [(signed char)14] |= ((/* implicit */short) arr_9 [2U] [2U]);
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) ((signed char) (short)5033)))))) ? (((unsigned long long int) 16056762002470859299ULL)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-2956327969348209614LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
            arr_13 [i_3] [4U] [i_3] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_8 [i_4 + 1])) & (((/* implicit */int) (_Bool)1))))));
            var_16 |= ((/* implicit */signed char) min((((/* implicit */long long int) arr_8 [i_4 - 1])), (((((/* implicit */_Bool) 8052940288899119005ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) : (9223372036854775807LL)))));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_17 += ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) 16056762002470859299ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (9223372036854775807LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
        var_18 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (signed char)-117)))));
    }
    var_19 += ((/* implicit */unsigned int) var_6);
    var_20 |= ((/* implicit */short) var_7);
}
