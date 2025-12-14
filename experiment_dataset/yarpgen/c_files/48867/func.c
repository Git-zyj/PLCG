/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48867
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
    var_16 = ((max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (max((var_4), (((/* implicit */unsigned long long int) 2143107258)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22541)) ? (-1151492479) : (((/* implicit */int) (unsigned char)142))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            var_17 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 17653753214984539283ULL))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) 1151492466)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */int) (signed char)-119)) > (((/* implicit */int) (_Bool)1))))))))));
            var_19 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1]);
            var_20 = ((/* implicit */unsigned short) (((-(arr_5 [i_0] [i_1 + 1]))) << (((((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [10U])))))) >> ((((((_Bool)1) ? (-2927347913953494920LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)13] [i_1]))))) + (2927347913953494932LL)))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [(short)8] [i_2] [i_2])), (-2927347913953494920LL)))) == (max((16298798865566806145ULL), (arr_5 [i_2] [i_2])))))), (var_4))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) * (var_11))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [(unsigned char)3] [i_2] [i_2])))))));
        }
        for (int i_3 = 3; i_3 < 10; i_3 += 2) /* same iter space */
        {
            arr_12 [i_3 + 4] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_2 [i_3 + 2] [i_3 - 1])))) | (((/* implicit */int) ((unsigned short) arr_2 [i_3 + 2] [i_3 + 4])))));
            var_23 ^= ((/* implicit */unsigned long long int) (+(1284101014830500407LL)));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_3 - 2] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)127)), (arr_18 [i_4 - 1] [i_3 + 1] [i_4]))))) - (max((((((/* implicit */_Bool) arr_10 [i_4] [6])) ? (arr_0 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19013))))), (((/* implicit */unsigned long long int) arr_17 [i_4] [i_4 - 1] [i_4 + 3] [i_6] [i_4 - 1]))))));
                            arr_21 [i_0] [i_6] [(signed char)6] [(unsigned short)4] [i_6] = ((/* implicit */long long int) max((arr_17 [i_0] [i_3] [(_Bool)0] [i_6] [i_6]), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-120)))))));
                            var_24 = ((/* implicit */_Bool) 3477637524U);
                        }
                    } 
                } 
                arr_22 [i_0] [(_Bool)1] [(unsigned char)6] = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned short)19034)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1327))) : (5206880376369302693LL))) ^ (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-112))))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46502)))));
                arr_23 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)127)) + (arr_15 [i_4] [i_0] [i_0])))))) : (min((((((/* implicit */unsigned long long int) arr_19 [i_0] [i_3] [(unsigned char)10] [i_0] [i_0])) + (var_3))), (((/* implicit */unsigned long long int) (unsigned short)52736))))));
                arr_24 [i_3 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3 + 4] [i_3 + 1] [i_3 - 1])) + (arr_13 [i_0] [i_4 + 1] [i_3 + 3])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_4 + 1] [i_3] [(_Bool)1])) % (((/* implicit */int) max((((/* implicit */unsigned short) (short)0)), (arr_9 [i_0] [0LL] [i_0])))))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(967234635)))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_8)), ((short)-30481)))), ((-(2365504344644769042ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_0] [i_0]))) : (1594295866U)))) : (((((/* implicit */_Bool) 133474692U)) ? (var_6) : (((/* implicit */long long int) arr_15 [i_0] [8ULL] [8ULL])))))))));
            }
            var_26 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)25577)), ((-9223372036854775807LL - 1LL))));
            arr_25 [i_0] [i_3] = var_0;
        }
        for (int i_7 = 3; i_7 < 10; i_7 += 2) /* same iter space */
        {
            var_27 = (unsigned short)65533;
            var_28 = ((/* implicit */short) ((max(((+(arr_17 [i_0] [(_Bool)1] [i_0] [i_7] [(_Bool)1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)30468))))))) <= (var_9)));
            arr_30 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_17 [4LL] [i_7] [i_7] [i_7] [i_7 + 3]))))));
        }
        var_29 = ((/* implicit */unsigned short) arr_17 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_8 = 2; i_8 < 10; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            arr_36 [i_8] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) var_13)))));
            arr_37 [i_9] [i_8] [i_8] = ((/* implicit */signed char) 1182571400U);
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (unsigned char i_11 = 3; i_11 < 10; i_11 += 3) 
                {
                    {
                        arr_43 [i_8] [(short)2] [i_10] [i_8] = ((/* implicit */unsigned long long int) arr_39 [i_8]);
                        arr_44 [i_8] [i_8] [(signed char)2] [i_8] = ((/* implicit */unsigned short) -1596871747);
                        var_30 *= ((/* implicit */unsigned int) ((long long int) (unsigned char)31));
                    }
                } 
            } 
        }
        arr_45 [i_8] = ((((/* implicit */_Bool) (~(10960069941941921392ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35031))) : (((var_6) + (((/* implicit */long long int) -619657687)))));
        arr_46 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_32 [i_8 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_31 |= ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) / (var_14)))));
    }
    for (int i_12 = 1; i_12 < 13; i_12 += 3) 
    {
        arr_49 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)0))));
        var_32 = ((/* implicit */signed char) (short)-30481);
        var_33 = (+((+(((/* implicit */int) arr_47 [i_12])))));
    }
}
