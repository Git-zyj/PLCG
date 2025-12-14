/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201905
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_1) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) -4028615571728320940LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) 1624826960852251285ULL)))))) : (max((((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0] [2LL]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)25))))), (70368744177663LL)))));
                arr_4 [i_0] = (+(((long long int) arr_0 [i_0])));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) max((var_0), (var_9))))))));
                            arr_10 [i_2] [i_2] [5ULL] [(signed char)9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_8 [i_2] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 - 1]), (arr_8 [(signed char)1] [i_2 - 1] [i_2] [i_2 + 1] [6ULL] [i_2 + 1]))))));
                            arr_11 [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2 - 1])) ? (var_11) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    arr_14 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((long long int) -7369983642970019696LL));
                    arr_15 [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_8 [i_4] [i_4] [i_1] [i_0] [15LL] [i_0]));
                }
                /* vectorizable */
                for (long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    arr_18 [i_0] [i_1] [i_0] [i_5] &= ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) (signed char)-86)));
                    var_19 = ((/* implicit */signed char) (+((-(var_2)))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((unsigned long long int) var_15));
    var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-7369983642970019696LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)86))))))))), ((~(min((((/* implicit */unsigned long long int) (signed char)-86)), (10606764750786555923ULL)))))));
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 2) 
        {
            {
                arr_23 [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((8589659764761352580LL) ^ (arr_20 [(signed char)7]))), (((/* implicit */long long int) ((signed char) (signed char)85)))))) ^ (((unsigned long long int) (~(var_6))))));
                arr_24 [i_7] = ((/* implicit */unsigned long long int) ((signed char) max((((long long int) 5134912441410397796LL)), (var_7))));
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_21 [i_6] [i_6] [i_8]), (arr_25 [i_6] [i_6] [i_6])))) ? (5134912441410397796LL) : (((((/* implicit */_Bool) 5134912441410397796LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_8]))) : (8635557782094422344LL)))))) ? (((long long int) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))) : (arr_26 [i_6])))) : (max(((+(var_13))), (arr_25 [i_7] [i_7 + 1] [i_8]))));
                    var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6])) ? (-5134912441410397796LL) : (arr_25 [i_8] [i_7] [i_6])))) ? (max((((/* implicit */long long int) arr_22 [i_6])), (arr_25 [i_8] [i_7 - 1] [i_6]))) : (((((((/* implicit */_Bool) 15966279666063872484ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_17))) * (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_3))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_20 [(signed char)10]))));
                            arr_34 [i_6] [20ULL] [i_6] [i_7] [i_6] = ((/* implicit */long long int) 12933504734103547660ULL);
                            var_26 = -5134912441410397796LL;
                        }
                        arr_35 [i_6] [18LL] &= max((((unsigned long long int) 2480464407645679132ULL)), (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) (signed char)85)), (4296202104828453004LL)))))));
                        arr_36 [i_9] [i_6] [i_7] &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 5134912441410397796LL)))))) ^ (((/* implicit */int) arr_22 [i_7]))));
                    }
                }
                for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    arr_40 [i_6] [i_6] [2ULL] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_31 [(signed char)16] [(signed char)18] [i_7] [6LL] [i_11]) + (((/* implicit */long long int) ((/* implicit */int) arr_38 [11ULL] [i_7]))))), (((/* implicit */long long int) max((arr_38 [i_6] [i_7]), (var_3))))))) ? (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)111)), (var_8)))) - ((+(5500570267132220587ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_33 [i_6] [i_7 + 2] [i_11]), (arr_21 [i_6] [i_7] [i_11])))) ? (((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)80))) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))))));
                    arr_41 [i_7] = ((/* implicit */long long int) arr_22 [18LL]);
                    var_27 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_33 [i_7 - 1] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)112))))));
                }
                var_28 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-90))) < (min((((/* implicit */long long int) var_4)), (5134912441410397796LL)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (1296957144609376585ULL)))));
                arr_42 [i_7] [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [i_7 + 2] [i_6] [1ULL] [i_6] [i_6]))));
            }
        } 
    } 
}
