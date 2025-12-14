/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245516
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (unsigned short)36645)) : ((-2147483647 - 1))))) | (1056964608U)));
        arr_3 [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) && (((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2]))));
    }
    for (int i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28891))) & (1331393371771444401ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2147483647)))))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned int i_3 = 3; i_3 < 9; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 1; i_5 < 8; i_5 += 2) 
                        {
                            var_15 ^= ((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) 5014568035138452464LL))));
                            arr_20 [i_4] [i_2] &= 5U;
                        }
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            arr_25 [(signed char)6] [i_3] [i_3] [i_4] [i_4] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) 36028796750528512LL));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-5014568035138452464LL)));
                            arr_26 [i_6 - 1] [i_4] [i_4] [i_4] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1 - 2] [i_1 - 2] [i_3 + 1] [i_4] [i_6])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36645))) < (var_12))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_3] [i_2] [i_3 - 3] [i_4] [i_6] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-36028796750528512LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned long long int) 5014568035138452447LL)) : (17115350701938107215ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1331393371771444390ULL)))) : (((long long int) (unsigned short)55963))))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 7; i_7 += 2) 
                        {
                            arr_29 [i_1] [i_1 - 2] [i_2] [i_3] [i_3] [i_7 - 1] [i_7] = ((unsigned short) (_Bool)0);
                            arr_30 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 2147483647))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (1796614501))))) : (2994665855270543282ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)42582))))) : (arr_5 [i_7 + 4] [(_Bool)0])));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_34 [i_8 - 1] [i_3] [i_3] [i_1] [i_3] [i_1] = ((int) var_8);
                            var_17 = ((/* implicit */signed char) ((unsigned short) 14169207060227358176ULL));
                        }
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_17 [i_3] [i_3] [4ULL] [i_3 - 1] [i_3])))))))));
                        arr_35 [i_1] [i_1] [i_3] [i_4] [i_4] [i_4] &= ((/* implicit */signed char) 3104837922399222628ULL);
                    }
                } 
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        arr_40 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_36 [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)20293))))))) ? (max((((((/* implicit */int) var_9)) % (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) : (((/* implicit */int) var_3))));
        var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_1)) : (min((-36028796750528512LL), (((/* implicit */long long int) (_Bool)1))))));
    }
    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                var_20 |= ((/* implicit */long long int) arr_43 [i_10] [12ULL]);
                arr_50 [i_10] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55963)) << (((((/* implicit */int) var_8)) - (48228)))))) >= (((((((/* implicit */_Bool) 2199103699U)) ? (((/* implicit */long long int) 3796664567U)) : (var_0))) % (((/* implicit */long long int) ((/* implicit */int) ((36028796750528511LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28808)))))))))));
            }
            var_21 = ((/* implicit */unsigned int) ((unsigned short) arr_42 [i_10]));
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
        {
            var_22 = ((/* implicit */long long int) arr_42 [i_10]);
            var_23 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3170594235438083030LL)));
        }
        /* vectorizable */
        for (unsigned short i_14 = 2; i_14 < 17; i_14 += 4) 
        {
            var_24 += ((/* implicit */unsigned int) ((-2351769432711562LL) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_43 [i_10] [i_14]))))));
            var_25 = (~(var_1));
            arr_55 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_41 [i_10] [i_14]);
        }
        for (unsigned int i_15 = 2; i_15 < 20; i_15 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -580392517724464607LL)) && (((/* implicit */_Bool) ((signed char) (signed char)11)))));
            var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7680))) % (3519687441U));
        }
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (arr_49 [i_10] [i_10] [(signed char)13] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54320))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_43 [15ULL] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (1324866074) : (((/* implicit */int) (!(((/* implicit */_Bool) 3320089871U)))))));
    }
    var_29 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((var_13) * (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (_Bool)0))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57856)) ? (36028796750528511LL) : (((/* implicit */long long int) (-2147483647 - 1)))))));
}
