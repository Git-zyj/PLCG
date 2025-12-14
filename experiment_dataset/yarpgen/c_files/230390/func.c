/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230390
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (14377891193127356873ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30643)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)3))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)-11)))), (((/* implicit */int) max((((/* implicit */short) (signed char)22)), (var_11))))))) ? ((~(((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)3)) << ((~(((/* implicit */int) (signed char)-22)))))))));
    var_18 &= ((/* implicit */signed char) min((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), (var_10)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((unsigned long long int) arr_2 [i_0] [i_1 + 3])), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)59272)) == (((/* implicit */int) (signed char)-22)))), ((!(((/* implicit */_Bool) arr_6 [i_0] [i_1 + 3]))))))))))));
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_4)))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [4] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_11)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 4) 
        {
            arr_12 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_3]))))), (arr_5 [i_3 + 4] [i_3 - 2] [i_3]))));
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-11)) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_5 - 3])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_2 [i_4 - 1] [i_5 + 4])))) : (min((((/* implicit */int) arr_5 [14ULL] [(short)19] [2ULL])), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)23))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-22)) ? (((((/* implicit */int) arr_17 [17ULL] [i_4 + 1] [i_4 - 1] [(signed char)4] [(_Bool)1] [i_4 - 1])) | (((/* implicit */int) arr_17 [(unsigned short)16] [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4 + 1])))) : (((/* implicit */int) var_3))));
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */int) min(((short)-6392), (((/* implicit */short) arr_6 [i_6] [i_5 - 2]))))) / (((((/* implicit */int) ((unsigned short) var_1))) << (((((/* implicit */int) arr_15 [i_4] [(unsigned short)17])) - (154)))))));
                        }
                    }
                } 
            } 
            var_24 = ((((/* implicit */_Bool) ((min((0U), (((/* implicit */unsigned int) var_13)))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-24720)))))) ? (11043714861848705339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-22)), ((short)-6391))))));
        }
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_25 [i_0] [9LL] = max((((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-14), (arr_22 [i_7] [i_0] [1LL] [i_0] [i_0]))))))), (((((/* implicit */int) arr_7 [i_0] [i_7])) << (((((/* implicit */int) var_7)) - (5631))))));
            var_25 &= ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-11)), (((((/* implicit */_Bool) max((((/* implicit */short) arr_24 [(short)11] [i_7] [1ULL])), (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-6422)) <= (((/* implicit */int) (short)6391))))) : (((((/* implicit */int) (unsigned short)7796)) % (((/* implicit */int) (signed char)-105))))))));
        }
        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (arr_19 [i_0] [7LL] [i_0] [0ULL] [i_0] [0LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */int) ((((/* implicit */int) (short)14327)) > (((/* implicit */int) var_1))))) : (((((/* implicit */int) arr_23 [i_0])) | (((/* implicit */int) (short)-7570))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [(signed char)18] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) max(((unsigned char)127), (arr_13 [(short)14] [i_8] [i_8])))))))));
        var_28 = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) arr_4 [i_8] [i_8])))));
    }
}
