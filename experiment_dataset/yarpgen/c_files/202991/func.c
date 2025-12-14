/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202991
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
    var_12 = ((/* implicit */_Bool) ((((max((36026597995708416LL), (36026597995708416LL))) >= (var_8))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) & (var_8)))) ? ((-(-36026597995708416LL))) : (((long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_13 += ((/* implicit */unsigned int) 5LL);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_14 = var_10;
                        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (((+(var_3))) < (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0]) > (((/* implicit */long long int) 2950464961U))))))))), (1287345305U)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (5LL) : (((/* implicit */long long int) arr_0 [i_0])))) - (((((/* implicit */_Bool) 844424930131968LL)) ? (((/* implicit */long long int) 1740562299U)) : (-36026597995708433LL)))))) ? (((/* implicit */long long int) max((440578084U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0])) && (((/* implicit */_Bool) 2146186228U)))))))) : (min((((long long int) arr_17 [i_5] [i_6])), (max((5652464743781343287LL), (((/* implicit */long long int) (_Bool)1)))))))))));
                        var_17 = ((/* implicit */_Bool) (((-(arr_13 [i_5 - 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (((~(arr_1 [i_5] [i_0]))) != (((((/* implicit */_Bool) -1LL)) ? (8097383107969867808LL) : (((/* implicit */long long int) 3854389212U))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_18 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? ((+(-36026597995708422LL))) : (9070623294102939084LL))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1353596689U)) & (var_1)));
                        }
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_4] [i_5 + 2] [i_8] [i_0] [i_8 - 1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_20 [i_0] [0LL] [i_4] [i_5 + 2] [i_5] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5 + 1] [i_8 - 1]))) < (5LL))))) : (max((arr_11 [i_4] [(_Bool)1] [i_0]), (((/* implicit */long long int) arr_12 [i_5] [i_0]))))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1LL), (72053195991416832LL)))) ? (min((((/* implicit */long long int) (_Bool)0)), (-36026597995708416LL))) : (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) 3346816012U))))))) ? ((~(-5652464743781343267LL))) : (((/* implicit */long long int) (-(var_7)))));
                        /* LoopSeq 4 */
                        for (long long int i_9 = 2; i_9 < 14; i_9 += 1) /* same iter space */
                        {
                            var_21 &= arr_9 [i_5];
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 2667427008U)))))) || (((/* implicit */_Bool) (~(((unsigned int) 0LL)))))));
                            var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [(_Bool)1] [i_0]))));
                        }
                        for (long long int i_10 = 2; i_10 < 14; i_10 += 1) /* same iter space */
                        {
                            var_24 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (-36026597995708416LL) : (((/* implicit */long long int) var_5)))) <= (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))))) != (36026597995708410LL)));
                            var_25 = ((/* implicit */_Bool) 9168571939177187825LL);
                        }
                        /* vectorizable */
                        for (long long int i_11 = 2; i_11 < 14; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] [i_4] [i_5] [i_8] [i_0] [i_11 + 2] = ((_Bool) arr_2 [i_0]);
                            var_26 = ((/* implicit */long long int) (_Bool)1);
                        }
                        /* vectorizable */
                        for (long long int i_12 = 1; i_12 < 13; i_12 += 1) 
                        {
                            var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 1164192631982915492LL))) && (((/* implicit */_Bool) 2539731213U))));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (-(arr_11 [2LL] [i_5] [2LL]))))));
                            var_29 = ((((/* implicit */long long int) 4294967295U)) / (6LL));
                            var_30 = ((/* implicit */_Bool) (((-(6604062433760225465LL))) - (((/* implicit */long long int) 268419072U))));
                        }
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                            var_31 = ((/* implicit */long long int) 1240727310U);
                        }
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            var_32 = arr_1 [i_5 + 2] [i_0];
                            var_33 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(arr_48 [8LL] [i_4] [i_4] [i_13] [i_15])))) : (((/* implicit */int) ((((/* implicit */long long int) 3072831847U)) == (-8LL)))))), (((/* implicit */int) ((((((/* implicit */_Bool) -36026597995708411LL)) ? (arr_34 [i_15] [i_13] [i_5] [13LL] [i_0] [5U]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */long long int) arr_51 [i_5] [i_0] [i_5 + 2] [i_15] [i_0] [i_15] [i_15])))))));
                        }
                        arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3854389224U)) ? (17583596109824LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) << (((/* implicit */int) ((_Bool) arr_33 [4LL] [i_0] [i_13 - 1] [i_0] [12U])))));
                        arr_53 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) (_Bool)1)), (min((var_9), (arr_9 [i_13]))))));
                    }
                    for (long long int i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
                    {
                        var_34 *= ((/* implicit */long long int) (_Bool)1);
                        var_35 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_5)), (-654104808247439191LL)));
                        arr_56 [i_0] [i_5 + 2] [i_4] [i_0] = ((/* implicit */_Bool) (+(((long long int) 0LL))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3854389191U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_16] [i_5] [i_0] [i_4] [i_0])) ? (-8574057019594060414LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((1073479680U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (-5519580856544339488LL))) : (((/* implicit */long long int) 4294967295U))));
                    }
                    /* vectorizable */
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) ((arr_58 [i_5 + 1] [i_5 - 1]) - (-36026597995708410LL)));
                        /* LoopSeq 1 */
                        for (long long int i_18 = 0; i_18 < 17; i_18 += 1) 
                        {
                            var_38 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 2058046059U)) && (((/* implicit */_Bool) arr_57 [i_5 + 2] [i_5 - 1] [i_5 + 2]))));
                            var_39 = (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3054239985U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_5 - 1] [i_5 + 2] [1U] [i_5 + 1] [i_5 - 1]))));
                        }
                    }
                    for (long long int i_19 = 0; i_19 < 17; i_19 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 36026597995708398LL)) ? (1448190773126009791LL) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) -7417983535549452286LL)) && (((/* implicit */_Bool) 4342014434649778418LL))))), (-4342014434649778419LL))))))));
                        var_41 -= ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 1 */
                        for (long long int i_20 = 1; i_20 < 16; i_20 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_64 [i_0] [i_19] [i_5 + 1] [i_0] [i_20 + 1])) > (((/* implicit */int) (_Bool)0)))) ? ((+((+(21LL))))) : (((arr_45 [i_20 + 1] [i_19] [i_4] [i_4] [i_5 + 1] [i_4] [i_0]) - ((((_Bool)1) ? (140737488355328LL) : (((/* implicit */long long int) var_10))))))));
                            var_43 = min((0LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_40 [i_4] [i_5 + 2] [i_19] [i_20 + 1] [i_20 - 1]))))));
                        }
                    }
                }
            } 
        } 
    }
    var_44 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 267386880U)) ? (((/* implicit */long long int) (-(var_5)))) : ((+(8763338477087036089LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
}
