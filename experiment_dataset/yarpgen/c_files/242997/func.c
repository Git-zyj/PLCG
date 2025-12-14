/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242997
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((var_3) << (((((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_11)))) ? (((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */long long int) 1554621429))))) : (((var_2) ? (2676632425867460277ULL) : (((/* implicit */unsigned long long int) var_1)))))) - (17150315388958925263ULL)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_15)))) | (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (short)14336)) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) ((short) 18446744073709551599ULL)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)14348))))) ? (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_5)))))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 4255689607U)), (6ULL))), (((/* implicit */unsigned long long int) (+(var_1))))))) ? (((((/* implicit */_Bool) min((2676632425867460277ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (18446744073709551612ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_6)))))) : (((((/* implicit */unsigned long long int) (~(2147483636)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_3))))))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((unsigned int) ((((/* implicit */_Bool) (short)-14346)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) 18446744073709551604ULL);
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)32452))))))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) var_10)) : (var_11)))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_15 [i_2] = ((/* implicit */int) arr_5 [i_1]);
                var_22 = ((/* implicit */signed char) ((((_Bool) (short)-9522)) ? (var_11) : (((/* implicit */int) (short)-23846))));
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_23 = var_11;
                    arr_19 [i_1] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_14);
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) : (7041717930419609ULL))))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_10))));
                    arr_22 [i_2] [i_2] [i_5] = (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) : (var_4))) / (1U));
                    arr_23 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) (~(var_12)));
                }
                for (int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_6 - 1] [i_6]))) % (((((/* implicit */_Bool) var_11)) ? (16115392431267754217ULL) : (((/* implicit */unsigned long long int) 3555956432U)))))))));
                    arr_26 [i_2] [i_2] [i_3] [i_6] = ((/* implicit */int) var_5);
                    var_27 = ((/* implicit */unsigned char) var_10);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((var_2) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_25 [i_2])) : (((/* implicit */int) (unsigned short)61755))))));
                        arr_31 [i_2] [i_2] = ((/* implicit */unsigned short) (-(arr_21 [i_7 - 3] [i_2] [i_1])));
                        arr_32 [i_6 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (1132687122U)))));
                    }
                }
                for (int i_8 = 1; i_8 < 16; i_8 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_1] [i_2] [i_3] [i_8 - 1])) ? (((/* implicit */int) (short)9526)) : (((/* implicit */int) var_13))));
                    var_30 = ((/* implicit */_Bool) arr_14 [i_8] [i_3] [i_2] [i_1]);
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_8 + 1])))))));
                    var_32 = ((/* implicit */unsigned int) min((var_32), ((~((~(var_1)))))));
                    arr_35 [i_1] [i_2] [i_3] [i_3] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294967291U)) - (((((/* implicit */_Bool) 18446744073709551589ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8] [i_3] [i_1]))) : (15770111647842091338ULL)))));
                }
            }
            for (signed char i_9 = 1; i_9 < 14; i_9 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22742)) ? (5053989890757690568LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14351))));
                var_34 = ((/* implicit */short) (+(arr_17 [i_9] [i_9 + 2])));
            }
        }
        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 13; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    {
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)113)), ((-((-(arr_1 [i_11] [i_12]))))))))));
                        var_36 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(13714712223824260590ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_10] [i_11 + 4] [i_12])) ? (((/* implicit */int) arr_14 [i_12] [i_11] [i_10] [i_1])) : (arr_33 [i_12] [i_11 - 1] [i_10] [i_1])))) : (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (var_5) : (((/* implicit */long long int) 1149803708))))))) ? ((((~(18446744073709551595ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) (~((+(var_4))))))));
                        var_37 |= (+(((((/* implicit */_Bool) (short)-32763)) ? (arr_34 [i_10 - 1] [i_11 - 3] [i_11]) : (2676632425867460260ULL))));
                        arr_44 [i_11] [i_10] [i_11] [i_11 + 2] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((((/* implicit */int) (signed char)11)), (7885598))) << ((((-(((/* implicit */int) (signed char)-85)))) - (84))))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36690)) ? (-7772381274266810539LL) : (((/* implicit */long long int) -30)))))));
            var_39 += ((/* implicit */unsigned char) 18446744073709551612ULL);
            arr_45 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_10 + 2] [i_10 - 1] [i_10 + 1]))))), (((((/* implicit */_Bool) arr_10 [i_10 - 2] [i_10 - 2] [i_10 - 2])) ? (7772381274266810538LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_10 - 2] [i_10 + 2] [i_10 - 1])))))));
        }
        for (long long int i_13 = 1; i_13 < 16; i_13 += 2) 
        {
            var_40 = ((/* implicit */unsigned long long int) 525358619U);
            arr_49 [i_13] = ((/* implicit */short) ((((min((((/* implicit */unsigned long long int) var_14)), (4732031849885291045ULL))) != (((/* implicit */unsigned long long int) arr_16 [i_1] [i_13] [i_1] [i_13])))) ? (((unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_2 [i_13 - 1] [i_1])) : (((/* implicit */int) (_Bool)1))))) : (18446744073709551593ULL)));
            var_41 = ((/* implicit */_Bool) max((var_41), ((((+(((/* implicit */int) ((((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) var_10))))))) <= (((/* implicit */int) (unsigned short)46471))))));
        }
        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((1149803708), (var_11)))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (-1149803730) : (((/* implicit */int) var_15))))))))))));
    }
    var_43 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (max((var_11), (var_11))) : (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)67)))))), (((/* implicit */int) max((max((var_9), (((/* implicit */short) var_15)))), (var_9)))));
    /* LoopSeq 1 */
    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            for (signed char i_16 = 1; i_16 < 19; i_16 += 2) 
            {
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    {
                        var_44 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_4)), (var_5)))))) ? (((/* implicit */unsigned long long int) 3769608679U)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) var_12)), (var_3)))))));
                        var_45 |= var_10;
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */_Bool) (-(((18446744073709551607ULL) | (14956724077093311096ULL)))));
    }
}
