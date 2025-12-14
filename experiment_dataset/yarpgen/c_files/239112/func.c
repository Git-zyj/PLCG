/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239112
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), ((+(var_1)))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_13)), (4616969173901144329LL))), (((/* implicit */long long int) (!((_Bool)0))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (max((((/* implicit */unsigned short) (short)-4096)), (var_13)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
        var_16 = min((1768676648U), (2829035833U));
        arr_3 [i_0] = ((/* implicit */_Bool) var_12);
        var_17 = max((((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 3315975927312003213LL)) ? (((/* implicit */int) (unsigned short)58102)) : (((/* implicit */int) (unsigned short)16383))))))), (max((1502621592U), (((/* implicit */unsigned int) (unsigned short)34328)))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        arr_6 [(unsigned short)14] [(unsigned short)9] = ((/* implicit */unsigned short) var_11);
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((+(((/* implicit */int) var_8)))) - (((/* implicit */int) var_11)))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)1))) != (((4125352770U) >> (((/* implicit */int) (_Bool)1)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) var_6)) : ((~(var_14)))));
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = max((((4113682699U) & (((2093056U) + (var_9))))), (max((max((181284596U), (((/* implicit */unsigned int) (unsigned short)41371)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */int) (unsigned short)1783)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31202)) && (((/* implicit */_Bool) 4113682710U))))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
    {
        var_21 *= ((/* implicit */_Bool) min((max((9223372036854775784LL), (((/* implicit */long long int) min((2243832518U), (((/* implicit */unsigned int) var_8))))))), (((/* implicit */long long int) max(((+(1692006142U))), (var_1))))));
        arr_15 [i_3] = ((/* implicit */long long int) 1465931466U);
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_5)))) - (((/* implicit */int) var_4))))))))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_23 = ((/* implicit */long long int) (!(max(((_Bool)1), ((_Bool)1)))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (unsigned int i_6 = 2; i_6 < 20; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_24 += ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (short)-31079)), (2829035833U))), (((/* implicit */unsigned int) (!((!(var_2))))))));
                            arr_25 [i_3] [i_4] [i_7] [i_4] [i_4] = ((/* implicit */_Bool) var_9);
                            arr_26 [i_5] [i_7] [i_5] [i_5] [i_4] [i_7] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)31235))))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) var_3)) ? (181284587U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18799)))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_9 = 1; i_9 < 19; i_9 += 1) 
        {
            for (unsigned int i_10 = 1; i_10 < 19; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        var_25 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)13086)), (4294967295U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)30331))))) : (min((((/* implicit */unsigned int) var_3)), (var_6)))))), (max(((-(var_14))), (((/* implicit */long long int) min((var_8), ((_Bool)1))))))));
                        arr_39 [i_9] [(unsigned short)1] [i_9] [i_9] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (var_14))), (((/* implicit */long long int) (+(((var_10) + (var_6))))))));
                        arr_40 [i_9] [i_9] [i_9] [i_11] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 181284590U))))), (var_7)))) / (min((2631275087254179091LL), (((/* implicit */long long int) ((var_14) != (((/* implicit */long long int) var_0)))))))));
                    }
                } 
            } 
        } 
        var_26 &= ((/* implicit */unsigned int) min(((unsigned short)34328), (((/* implicit */unsigned short) (_Bool)0))));
        arr_41 [i_8] [i_8] = ((/* implicit */unsigned int) min(((unsigned short)34350), (((/* implicit */unsigned short) (short)24547))));
    }
    var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (35184372088831LL) : (-1045218810920065272LL)))) && ((!((_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            {
                var_28 = ((/* implicit */unsigned short) min((max(((((_Bool)1) ? (var_6) : (3645663472U))), (max((((/* implicit */unsigned int) (_Bool)1)), (var_9))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((1190618130U), (((/* implicit */unsigned int) (unsigned short)52351)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43222)))))))));
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-839779031579897019LL)))) ? (((/* implicit */int) (_Bool)1)) : ((+((+(((/* implicit */int) (_Bool)1)))))))))));
                /* LoopSeq 4 */
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    arr_49 [i_14] [i_13] [i_12] [i_12] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_8))))) : (max((var_6), (((/* implicit */unsigned int) var_11)))))));
                    var_30 = ((/* implicit */unsigned int) (!((_Bool)1)));
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_16 = 3; i_16 < 11; i_16 += 1) 
                        {
                            arr_57 [i_12] [i_12] &= ((/* implicit */_Bool) var_7);
                            var_31 = (-(min((((/* implicit */unsigned int) min((var_5), ((_Bool)1)))), ((~(var_7))))));
                            var_32 *= ((/* implicit */long long int) (_Bool)1);
                        }
                        var_33 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (792822790U)))) == (((var_11) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)31235)))))) ? (var_7) : (((((((/* implicit */_Bool) 2067981457U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14360))) : (3357321610U))) / (2226985839U)))));
                        var_34 -= ((/* implicit */unsigned short) var_8);
                    }
                    for (unsigned int i_17 = 1; i_17 < 10; i_17 += 4) 
                    {
                        arr_61 [(unsigned short)10] [i_12] [8U] [i_12] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (402653184U)));
                        var_35 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) min(((unsigned short)34301), (((/* implicit */unsigned short) (_Bool)1))))), (4125352769U)))));
                        var_36 = ((/* implicit */unsigned int) var_2);
                        var_37 *= ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24306))) : (var_10))) - (max((var_10), (var_10)))))));
                    }
                }
                for (short i_18 = 0; i_18 < 12; i_18 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        for (unsigned int i_20 = 2; i_20 < 10; i_20 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)24568)))) - (((/* implicit */int) (unsigned short)52513))));
                                var_39 = ((/* implicit */unsigned int) min((var_39), (var_12)));
                                var_40 = ((/* implicit */unsigned int) (!(min(((!(var_11))), (var_2)))));
                                var_41 = ((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                                var_42 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) 3203006495685953440LL))))), (((2749282667867159116LL) - (((/* implicit */long long int) 4071974352U))))))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) var_13))))) : (min((var_10), (var_1))))), (min((((/* implicit */unsigned int) var_8)), (2067981457U)))));
                }
                for (short i_21 = 0; i_21 < 12; i_21 += 1) /* same iter space */
                {
                    arr_71 [i_12] [i_13] [i_12] &= (+(max((3346118818U), (((/* implicit */unsigned int) var_3)))));
                    arr_72 [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (2679576538557134279LL)))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (unsigned short)14453)))))) : (((/* implicit */int) ((937645686U) >= (1258250719U))))));
                }
                /* vectorizable */
                for (short i_22 = 0; i_22 < 12; i_22 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                    arr_76 [i_22] = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                }
                arr_77 [i_13] = ((/* implicit */short) max((596523224U), (((/* implicit */unsigned int) (_Bool)1))));
                arr_78 [i_12] &= ((/* implicit */short) ((((/* implicit */_Bool) max((min((2518399268U), (((/* implicit */unsigned int) var_8)))), (((((/* implicit */_Bool) (unsigned short)6723)) ? (3844687465U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? ((+(3844687465U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((4125352760U), (((/* implicit */unsigned int) (_Bool)0)))))))))));
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned short) max((var_45), (var_4)));
}
