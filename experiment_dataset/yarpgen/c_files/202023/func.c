/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202023
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
    var_17 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 1] [(unsigned short)2] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 14616242071566473303ULL)) ? (3223784141U) : (3588532164U)))));
                var_18 = ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_9))))) / (((/* implicit */int) arr_1 [i_0] [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) max(((-(((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)55)))))), (((/* implicit */int) var_10))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((var_12) / (((/* implicit */int) arr_20 [i_2 - 2] [i_4] [i_4 + 1] [i_6])))))) ? (((/* implicit */int) (short)-4394)) : (((var_15) ? (((/* implicit */int) (short)-4412)) : (((/* implicit */int) (signed char)-55))))));
                            arr_22 [i_2] [i_3] [i_4 - 2] [i_2] [i_6] = ((/* implicit */_Bool) (-(706435132U)));
                        }
                        for (short i_7 = 2; i_7 < 23; i_7 += 1) 
                        {
                            arr_27 [1ULL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)8751)) > (((/* implicit */int) (short)-4391))));
                            var_21 = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) arr_20 [i_5 + 4] [i_3] [i_2] [i_3 + 1])))));
                            arr_28 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((8079688427459335639ULL) / (2147483392ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41623))) : (8079297204656863244ULL)))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_7 [i_2]))));
                        }
                        arr_29 [i_3] [i_3] [i_4] [i_4] [17ULL] [i_3] = ((/* implicit */unsigned short) ((signed char) var_15));
                        arr_30 [i_4] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-8745)) / (((/* implicit */int) (unsigned short)37877))))) >= (((long long int) var_15))))), (arr_14 [(unsigned char)3] [i_4] [i_2])));
                    }
                }
                arr_31 [i_2] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4394))) : (arr_7 [i_2])));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        var_23 -= max(((-(((arr_17 [i_9 + 1] [i_2] [i_2] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_19 [i_2] [i_3] [i_8] [i_9 + 1] [i_8]))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_0), (var_0))))) : (var_3)))));
                        var_24 = ((/* implicit */unsigned char) (~(3696897563084010691LL)));
                        var_25 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)8762)))));
                    }
                    for (long long int i_10 = 4; i_10 < 23; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_11 = 3; i_11 < 22; i_11 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_16), (((/* implicit */unsigned long long int) ((_Bool) var_4)))));
                            var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(arr_16 [i_3])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) : (arr_9 [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_16 [i_3]))))))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_35 [i_2] [i_3 + 1] [i_8] [i_11])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)14))))))) ? (max((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)43347))), (((unsigned long long int) 6509394224721041882ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60491))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((var_7) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))))))))));
                            arr_42 [i_3] = ((/* implicit */unsigned int) arr_39 [i_3] [i_3] [i_8] [i_8] [i_12]);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) var_4);
                            var_31 = ((/* implicit */long long int) max((arr_21 [i_3] [i_3] [i_8] [i_10] [i_13]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_32 [i_3])))))));
                        }
                        var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((long long int) arr_44 [i_2] [i_2] [i_3] [i_8] [i_10] [i_2])), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-126)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [(_Bool)1] [i_8] [i_2] [i_2]))) : ((~(arr_36 [i_2])))));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_4)), (1050837752524100049LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_10]))))))))) ? (var_6) : (min((((/* implicit */unsigned int) ((int) arr_34 [18U] [i_2] [i_3 - 1] [i_2] [i_2] [16U]))), (arr_23 [i_2] [i_3] [i_3] [i_10] [i_8] [i_3]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1744493673)) ? (((/* implicit */long long int) 540787747U)) : (7010540555648009961LL)))) <= (((unsigned long long int) (unsigned short)60493)))))));
                            var_35 = ((/* implicit */unsigned short) (~(((unsigned long long int) ((_Bool) var_8)))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-4397)) - (((/* implicit */int) (unsigned short)5051))));
                        }
                        var_37 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) ((arr_46 [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_2])))))), (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (arr_26 [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_14 [i_2 + 1] [i_3] [i_8]))))))));
                    }
                    for (long long int i_15 = 4; i_15 < 23; i_15 += 4) /* same iter space */
                    {
                        arr_50 [i_2] [i_2] [i_8] [i_3] = ((/* implicit */short) min((((/* implicit */long long int) var_10)), ((-(max((var_3), (((/* implicit */long long int) var_15))))))));
                        var_38 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) <= (14591819885956976437ULL)))) / (((/* implicit */int) ((_Bool) var_9)))))));
                        var_39 = ((/* implicit */int) max((2727773399U), (((/* implicit */unsigned int) (signed char)38))));
                    }
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        var_40 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) ((unsigned short) var_13))))));
                        arr_53 [i_3] = ((/* implicit */long long int) var_16);
                        /* LoopSeq 2 */
                        for (signed char i_17 = 2; i_17 < 22; i_17 += 1) 
                        {
                            arr_58 [i_3] [i_16] [i_16] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-26188)) > (1478634950))))) / (((((/* implicit */unsigned int) -419706534)) / (4102130U)))));
                            var_41 = ((/* implicit */unsigned int) 10959562860950544695ULL);
                            arr_59 [i_3] = ((/* implicit */unsigned short) var_11);
                            arr_60 [i_2] [i_3] [i_8] [i_3] [i_2] = ((/* implicit */unsigned int) (signed char)-122);
                        }
                        for (signed char i_18 = 1; i_18 < 22; i_18 += 4) 
                        {
                            arr_63 [i_2] [i_3] [i_8] [i_3] [i_3] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_19 [16ULL] [16ULL] [i_8] [16ULL] [i_8]))))));
                            var_42 *= ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / ((~(5199028566400858227LL))))));
                            var_43 = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (unsigned short)27549)))));
                            var_44 -= ((/* implicit */short) ((int) (!(((/* implicit */_Bool) var_7)))));
                        }
                        var_45 ^= (!(((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_16]))));
                        var_46 ^= ((/* implicit */unsigned long long int) arr_49 [i_16] [i_3] [i_2] [i_3] [i_8]);
                    }
                    var_47 = (signed char)119;
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_66 [i_2] [i_3] [i_3] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(4102125U)))) ? (arr_25 [i_2 + 2] [i_3] [i_8] [i_3] [i_3]) : (max((arr_25 [i_19] [i_3 - 1] [i_3 - 1] [(signed char)0] [i_2]), (arr_25 [i_2] [i_2] [i_2] [i_2 - 2] [i_2 - 1])))));
                        var_48 = ((/* implicit */short) 3690702103U);
                        var_49 = ((/* implicit */signed char) min((9223372036854775807LL), (5199028566400858227LL)));
                    }
                }
            }
        } 
    } 
    var_50 = ((/* implicit */unsigned int) var_13);
}
