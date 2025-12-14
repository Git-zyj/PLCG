/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207297
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (unsigned short)44951)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned char)145)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) == (min(((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))), (((/* implicit */int) (unsigned short)20548))))));
                        var_12 = ((/* implicit */short) max((var_12), (var_4)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (_Bool)0);
                            arr_16 [i_1] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_0])) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            var_13 ^= min((3973576465U), (((/* implicit */unsigned int) arr_17 [i_0 + 2] [i_3] [i_2] [(unsigned char)11] [i_0 + 2])));
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_7)))));
                        }
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (((unsigned char) max((arr_18 [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_0 - 3] [i_0] [i_0 - 3] [i_0])))))))));
        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 795591361U)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned short)40418))))) ? (((((/* implicit */_Bool) (unsigned short)26773)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 1]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0 + 2])))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) arr_20 [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) ((signed char) arr_13 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]))) ? (((/* implicit */int) arr_14 [(short)12] [i_6] [(short)12] [i_0 - 2])) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned char)121))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 16; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        arr_30 [(_Bool)1] [(_Bool)1] [i_7 + 2] [i_0] = ((/* implicit */short) (signed char)40);
                        arr_31 [i_0] [i_6] [i_7 + 1] [i_7] [i_7 + 1] [i_0] = ((((/* implicit */_Bool) min((min(((unsigned short)57264), (((/* implicit */unsigned short) (unsigned char)255)))), (arr_10 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7 - 1] [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) arr_4 [i_0] [(signed char)16] [i_0]))))) : (min((((var_8) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [(unsigned char)7]))))), (((/* implicit */long long int) ((unsigned char) (_Bool)0))))));
                        var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_17 [i_0] [i_6] [i_7] [i_6] [i_8]))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_4)))))) : (((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= ((+(arr_28 [i_0] [i_7] [i_7] [i_8]))))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 8574365671010324475ULL))));
        }
        arr_32 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)50151)) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_18 [i_0 - 1] [i_0] [i_0 - 1] [(unsigned char)11])))), (((/* implicit */int) arr_18 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0]))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_8))));
    var_20 |= ((/* implicit */_Bool) ((unsigned char) (+((+(((/* implicit */int) var_4)))))));
}
