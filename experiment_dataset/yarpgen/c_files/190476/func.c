/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190476
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
    var_12 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        arr_9 [18U] [18U] [18U] [i_3] [i_3] = ((/* implicit */signed char) ((3582156447U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225)))));
                        arr_10 [i_3] [i_2 - 1] [(short)7] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 712810846U)) ? (712810848U) : (891641316U)));
                        var_13 ^= ((((((/* implicit */_Bool) 219768137U)) ? (4294967295U) : (891641316U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))));
                        arr_11 [i_3] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (3464578547808489305LL) : (((/* implicit */long long int) 3403325993U))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        var_14 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) < (14982164290730137203ULL));
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(563708694U))))));
                        arr_14 [(unsigned char)9] [i_1] [i_2] [i_2] [(unsigned char)9] = ((/* implicit */int) ((var_2) ? (586470408U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 3403325998U))));
                        arr_17 [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3464579782979414412ULL))));
                        arr_18 [i_2] [i_5] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) 586470408U);
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 563708694U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) : (4294967295U)));
                    }
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        arr_23 [(unsigned short)18] [i_0] [i_1] [i_0] |= ((/* implicit */short) max((((/* implicit */unsigned int) (!((_Bool)1)))), (min((891641312U), (((/* implicit */unsigned int) (_Bool)1))))));
                        var_18 = ((/* implicit */signed char) (~(3731258590U)));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_26 [i_6] [i_6] [9LL] [(unsigned char)11] [16LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (2400843451U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))))));
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8324410849544447523LL)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned short)50528)))))));
                            var_20 -= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                            arr_27 [i_7] [i_7] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((1991745212U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52)))))) << (((((13491294615590920058ULL) << (9U))) - (8460559615178765298ULL))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 2; i_8 < 24; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) 4955449458118631557ULL)))))));
                            arr_30 [i_8] [i_6] [i_2] [i_1] [(unsigned char)19] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_0)));
                        }
                        for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-((((_Bool)1) ? (((2251799813423104ULL) - (((/* implicit */unsigned long long int) 452409569U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
                            var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)20253)) && (((/* implicit */_Bool) (signed char)3)))) ? (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_24 = ((/* implicit */_Bool) (signed char)-4);
                        }
                    }
                    var_25 = ((/* implicit */unsigned int) min((var_25), (1991745214U)));
                }
            } 
        } 
    } 
}
