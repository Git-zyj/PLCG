/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217925
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) max(((~(0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65509)))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
        /* LoopSeq 4 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -1386032456612980557LL))))) >> (((((var_4) >> (((/* implicit */int) var_11)))) - (3232289283363731711ULL)))))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1386032456612980550LL)))))));
            arr_7 [i_0] [i_1] = ((/* implicit */_Bool) var_6);
            arr_8 [i_0] [i_0] [i_1] = min((((/* implicit */int) (signed char)48)), ((~(((/* implicit */int) var_6)))));
        }
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            var_15 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) var_12))), ((-(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
            var_16 = ((/* implicit */short) max((max((((var_4) | (var_4))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (-(min((-8), (((/* implicit */int) (signed char)-48)))))))));
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)65523)))))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
            var_19 *= ((/* implicit */long long int) (!(var_0)));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        arr_22 [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_7)) <= (var_2)));
                        var_20 = (unsigned short)29430;
                        arr_23 [(unsigned char)6] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_8);
                        arr_24 [i_0] [i_0] [(unsigned short)0] [i_0] = ((/* implicit */long long int) (((-(var_7))) > (((/* implicit */int) ((unsigned short) var_7)))));
                        var_21 = ((/* implicit */long long int) (+(var_10)));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned short) (signed char)73);
            var_23 = ((/* implicit */short) ((((/* implicit */int) var_11)) / (var_7)));
        }
        var_24 = min(((+(1386032456612980556LL))), (((/* implicit */long long int) var_1)));
    }
    for (unsigned int i_7 = 3; i_7 < 17; i_7 += 2) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */signed char) var_8);
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) min((max((var_5), (var_2))), (min((var_5), (((/* implicit */long long int) var_3))))));
        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_5)))) > (var_10)));
        arr_30 [i_7 - 2] = ((/* implicit */unsigned char) var_9);
    }
    for (unsigned int i_8 = 3; i_8 < 17; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_9 = 1; i_9 < 18; i_9 += 3) 
        {
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (+(((long long int) var_8)))))));
            arr_36 [i_9] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)14542)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), ((~(max((((/* implicit */unsigned long long int) (signed char)-1)), (var_4)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 4) 
            {
                arr_39 [i_8 - 1] [i_8 - 1] [i_9] = ((/* implicit */unsigned short) min((((unsigned int) var_12)), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) == (var_10))))));
                var_27 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            }
            for (int i_11 = 1; i_11 < 16; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 3; i_12 < 18; i_12 += 3) 
                {
                    for (unsigned int i_13 = 2; i_13 < 17; i_13 += 3) 
                    {
                        {
                            arr_47 [i_8 - 3] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(var_11))))));
                            var_28 = (+(max((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_5))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_10)) ? ((~(var_2))) : (max((((/* implicit */long long int) var_3)), (var_5)))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))) > ((~(((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))))));
                            arr_55 [i_9] [i_9 + 1] [i_11 - 1] [i_8 + 2] [i_8 + 2] [i_9 + 1] = ((/* implicit */short) ((unsigned char) var_0));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-22631)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))))));
                            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_0)), (18446744073709551607ULL))), (((/* implicit */unsigned long long int) var_3)))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) var_10))));
            }
            arr_56 [i_9] = ((/* implicit */long long int) var_3);
        }
        arr_57 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 33554432))));
    }
    for (unsigned int i_16 = 3; i_16 < 17; i_16 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) (short)22630);
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (((~(((/* implicit */int) var_9)))) > (((/* implicit */int) max(((!(((/* implicit */_Bool) (short)-22620)))), (var_0)))))))));
        arr_61 [i_16] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_6)), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 1386032456612980556LL)) : (var_10))), (((/* implicit */unsigned long long int) (~(var_2))))))));
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) - ((((-(((/* implicit */int) (short)22624)))) + ((-(-33554441))))))))));
    }
    var_37 -= ((/* implicit */unsigned char) (~(max((var_7), (((/* implicit */int) var_3))))));
    /* LoopSeq 4 */
    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
    {
        arr_65 [i_17] = ((/* implicit */unsigned int) (~(33554432)));
        /* LoopSeq 1 */
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            var_38 = ((/* implicit */unsigned short) (~(min((var_2), (((/* implicit */long long int) var_7))))));
            arr_68 [i_18] [i_17] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)43823)))) * (((int) var_0))));
        }
        var_39 *= ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned char)197))))));
    }
    for (short i_19 = 0; i_19 < 10; i_19 += 3) 
    {
        var_40 = ((_Bool) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
        arr_71 [i_19] = ((/* implicit */signed char) (+(((min((((/* implicit */unsigned long long int) var_3)), (var_4))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        var_41 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))))));
        var_42 = ((/* implicit */signed char) (((((-(var_2))) < (((/* implicit */long long int) ((/* implicit */int) var_6))))) ? (((1386032456612980556LL) | (((/* implicit */long long int) -33554441)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-6)) > (max((var_7), (((/* implicit */int) var_0))))))))));
    }
    for (long long int i_20 = 3; i_20 < 23; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 24; i_21 += 4) 
        {
            for (unsigned long long int i_22 = 4; i_22 < 23; i_22 += 2) 
            {
                {
                    var_43 = ((/* implicit */unsigned short) min((max((((/* implicit */int) (signed char)-49)), (715971582))), (((/* implicit */int) (unsigned short)51287))));
                    var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_11)))))))));
                }
            } 
        } 
        var_45 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) -33554441)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_12))))));
        arr_79 [i_20] = ((/* implicit */unsigned char) (~(((((-1386032456612980557LL) + (9223372036854775807LL))) >> (((var_10) - (12981176939966928576ULL)))))));
        var_46 = ((/* implicit */unsigned char) max((((unsigned long long int) var_4)), ((((~(var_10))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49)))))));
        /* LoopSeq 1 */
        for (unsigned char i_23 = 0; i_23 < 24; i_23 += 2) 
        {
            arr_82 [i_20] = ((/* implicit */long long int) (!((!(var_0)))));
            arr_83 [9] [i_20] [i_23] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551607ULL)))))))), (((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) (signed char)-46))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
            var_47 |= ((/* implicit */unsigned long long int) ((((_Bool) min((((/* implicit */long long int) var_6)), (1386032456612980556LL)))) ? (((((/* implicit */_Bool) -5106207051644133144LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) : (((int) max((((/* implicit */long long int) (signed char)18)), (var_2))))));
            arr_84 [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((33554432) - (((/* implicit */int) var_11)))))))) / (((/* implicit */int) (unsigned char)63))));
        }
    }
    for (long long int i_24 = 0; i_24 < 23; i_24 += 1) 
    {
        arr_87 [i_24] &= ((/* implicit */unsigned char) min((((/* implicit */int) var_8)), ((~((+(-33554438)))))));
        arr_88 [7LL] = min((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_11))))), (max((((/* implicit */int) (_Bool)0)), (-33554453))));
        arr_89 [i_24] = ((/* implicit */int) var_1);
    }
}
