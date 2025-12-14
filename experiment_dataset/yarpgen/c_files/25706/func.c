/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25706
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3094715698U)) + (((5134993887467049864ULL) ^ (var_2)))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) 2083716836U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1491148823933902958LL)) : (arr_2 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1962249579))));
                            var_18 = ((/* implicit */unsigned long long int) (unsigned char)221);
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((unsigned char) 4921891499332372627ULL));
                arr_12 [i_0] [i_2] = ((/* implicit */long long int) ((short) 34359738367ULL));
            }
            var_20 = ((/* implicit */unsigned int) var_12);
        }
        var_21 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (arr_8 [10ULL] [i_0 - 1] [i_0 - 1] [6U]) : (((/* implicit */int) (unsigned char)3))))));
        arr_13 [i_0 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_22 = ((/* implicit */short) var_6);
        arr_16 [i_5] = ((/* implicit */_Bool) 2083716828U);
        var_23 += ((/* implicit */short) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_17 [i_5] = ((/* implicit */long long int) (~(var_14)));
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 8; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((!((!(((/* implicit */_Bool) var_5)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-5564)))))))) : (arr_9 [12ULL] [12ULL] [i_5] [(signed char)0]))))));
                    var_25 = ((/* implicit */unsigned int) var_10);
                    var_26 = ((/* implicit */unsigned char) max((((unsigned int) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) arr_6 [(short)12] [(short)12])) : (((/* implicit */int) var_6))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (unsigned char)77)))), (var_12))))));
                }
            } 
        } 
    }
}
