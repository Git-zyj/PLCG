/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19393
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
    var_16 = ((/* implicit */unsigned int) (-(min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))), (((/* implicit */long long int) var_8))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) 84129229U);
        var_17 ^= ((/* implicit */unsigned char) ((unsigned int) (-(((arr_1 [i_0]) ? (((/* implicit */int) (unsigned short)45255)) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) arr_4 [i_1] [i_2]);
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0 + 1] [i_1 + 3] [i_1 + 3] [i_1 + 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) (signed char)7))))))))) : (arr_5 [i_0 + 2] [i_3]))))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min(((~(min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [4ULL])), (var_9))))), (((/* implicit */unsigned long long int) min((((unsigned int) arr_6 [i_1] [i_1] [i_1] [(short)4])), (((/* implicit */unsigned int) ((arr_9 [i_1] [8U] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2] [(short)2])) : (((/* implicit */int) arr_9 [8U] [6U] [i_2] [i_3] [i_3] [i_2])))))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) 
            {
                {
                    var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)-22))) ? (((long long int) arr_9 [i_0 + 2] [i_4] [i_0 - 1] [i_5 - 1] [i_0 + 2] [i_0 + 2])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245)))));
                    var_22 = ((/* implicit */unsigned int) (unsigned short)12840);
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned short)45499))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)9)) << (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) 2710370188617951151LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_0]))))))) : (14838291223201229336ULL))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            {
                var_24 = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) 2519836855U)));
                var_25 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6 - 1]))))));
                var_26 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_16 [i_6 + 1])) ? (((/* implicit */int) arr_16 [i_6 + 1])) : (((/* implicit */int) arr_16 [i_6 + 1]))))));
                var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (79360321127325881LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6]))))))) ? ((-(((/* implicit */int) (unsigned short)45499)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))))), (arr_16 [i_6 + 1]))))));
            }
        } 
    } 
    var_28 &= ((/* implicit */signed char) var_4);
}
