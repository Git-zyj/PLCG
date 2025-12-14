/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39372
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8)))) ? ((((((_Bool)1) ? (((/* implicit */long long int) var_8)) : (-5230321692161215440LL))) | (((/* implicit */long long int) ((1933567546U) >> (((5230321692161215438LL) - (5230321692161215435LL)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_8))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) || (((/* implicit */_Bool) var_5)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                var_14 |= ((/* implicit */unsigned char) arr_9 [(signed char)11] [(unsigned short)13]);
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_3 - 2] [i_3] [i_0 + 2])) - (((/* implicit */int) var_1))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0 + 3] [i_3 + 1]))) ? (((((var_6) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_4 [i_0 + 2])) - (192))))) : (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((/* implicit */int) var_5)))))))))));
            }
            var_17 = ((/* implicit */unsigned char) arr_2 [i_0]);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_0 - 1] [i_0 + 1]))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0]))) <= (var_6))))));
            arr_11 [10] [i_2] [i_0] = ((/* implicit */long long int) var_8);
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2361399749U)))) == (var_8)))) - (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) || (((/* implicit */_Bool) 5230321692161215459LL))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_6]))) == (9221120237041090560ULL))))))));
                            var_20 &= ((/* implicit */unsigned char) (_Bool)1);
                            arr_21 [i_0] [i_0] [i_4] [i_5] [i_6 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_0] [(unsigned char)4])) ^ (((/* implicit */int) arr_7 [i_0 + 3] [i_2] [i_2])))) >> (((((((/* implicit */int) arr_14 [i_5] [i_4])) << (((arr_20 [i_0 + 1] [(unsigned short)3] [i_4] [i_5] [i_0]) + (54826744592960538LL))))) - (256)))))), (min(((~(var_9))), (((/* implicit */long long int) 16776192))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) arr_12 [i_7 - 1])))));
            var_22 = ((/* implicit */unsigned long long int) var_1);
            arr_25 [i_7] [i_7] [i_7 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) arr_3 [i_0] [i_7 + 2] [i_7 - 1])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_15 [i_0] [i_7 + 2] [i_0 + 1])) : (var_4)));
        }
    }
    var_23 -= ((((/* implicit */int) var_5)) == (((/* implicit */int) (((+(((/* implicit */int) var_1)))) > (((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))))))))));
    var_24 = ((/* implicit */unsigned char) ((int) var_0));
}
