/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245999
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
    var_11 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_12 ^= ((/* implicit */unsigned long long int) ((long long int) ((long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) * (((/* implicit */int) (signed char)-68))))));
            var_13 ^= ((/* implicit */unsigned char) (signed char)-109);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] = ((arr_5 [i_0] [i_1] [i_0] [i_3]) >= (((-7872984686157516980LL) & (((/* implicit */long long int) ((((/* implicit */int) (signed char)-109)) & (((/* implicit */int) (unsigned char)127))))))));
                        var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1688556166440274829LL)) ? (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_1] [i_2]) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) arr_7 [i_1] [i_3])) : (((/* implicit */int) var_7)))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-109)))))) : ((~(((/* implicit */int) (signed char)101))))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            arr_16 [i_0] [16LL] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) (_Bool)1))))) + ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) -7966698395791998302LL))))));
            var_15 = ((/* implicit */_Bool) ((unsigned short) var_5));
        }
        var_16 -= ((/* implicit */long long int) ((min((var_0), (arr_7 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))) : (((((/* implicit */_Bool) arr_8 [(unsigned char)12])) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */long long int) 0U)) : (-9223372036854775800LL)));
    }
    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_7])))) - (min((((/* implicit */int) arr_8 [i_7])), (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (10824071637638657915ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((3327708989U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (short)27565);
                                var_20 = ((((/* implicit */_Bool) 1898918702U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 3658621779029875843LL)) : (4062678239924460274ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (arr_27 [i_9] [i_8] [i_7] [(unsigned char)8] [i_8] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_8] [20U])))))))))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27544))))));
                            }
                        } 
                    } 
                    arr_32 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_5] [i_6]) ? (((/* implicit */int) (short)27544)) : (((/* implicit */int) max((arr_3 [i_5] [i_6]), (arr_30 [i_7] [i_7] [i_7] [i_7] [i_6] [i_5] [(signed char)5]))))))) ? (((unsigned long long int) arr_23 [i_5] [i_5] [i_7] [i_6])) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_5])) != (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (arr_7 [i_5] [i_7])))) : (((/* implicit */int) arr_13 [i_6])))))));
                }
            } 
        } 
        arr_33 [i_5] = ((/* implicit */unsigned long long int) ((min((((arr_18 [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_5]))))), (((/* implicit */unsigned int) ((short) arr_3 [i_5] [i_5]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5])) / (-1)))) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5])) ? (arr_23 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)4064)))))) ? (((/* implicit */int) arr_22 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_5] [i_5]))))) : (-2664109763019263665LL)));
    }
}
