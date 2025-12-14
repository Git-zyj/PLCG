/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248630
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
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((var_13), (((/* implicit */unsigned int) var_2))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))));
                arr_8 [i_0] [i_0] [i_0] [(signed char)4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
            }
            for (int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                arr_11 [i_0] [i_3] [i_0] = ((/* implicit */_Bool) var_2);
                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3825314199244311961LL))))) : (var_14)));
            }
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                arr_16 [(_Bool)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                var_19 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (2147483647));
            }
            for (signed char i_5 = 2; i_5 < 18; i_5 += 1) 
            {
                var_20 &= ((/* implicit */signed char) ((((/* implicit */int) var_1)) >> (((var_10) + (2763373063464630818LL)))));
                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)20))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
                {
                    var_22 -= ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                    arr_23 [i_6 + 1] [i_5] [i_1] [(short)3] [i_0] = var_10;
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_0))))));
                    arr_25 [i_0] [i_1] = ((/* implicit */int) var_3);
                    arr_26 [i_0] [i_1] [i_5] [i_5 + 2] [i_6] [i_6] = ((/* implicit */unsigned short) (_Bool)1);
                }
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (signed char)81)))) : (((/* implicit */int) (_Bool)0))));
            }
            arr_27 [(short)18] = ((/* implicit */int) var_5);
            arr_28 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 3; i_7 < 19; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((var_13) - (389932365U)))));
                    arr_34 [i_0] [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)21)) / (63)));
                    var_25 = ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)209)));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_37 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10)))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551590ULL)))))));
                }
                for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    var_27 = ((/* implicit */long long int) (~(2727420610U)));
                    arr_40 [i_0] [i_1] [i_7] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)1))));
                }
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        arr_46 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) var_14);
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) var_7))));
                        arr_47 [2U] = ((/* implicit */unsigned char) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        arr_51 [i_0] [i_13] [i_0] = ((/* implicit */int) var_9);
                        arr_52 [i_13] [i_1] [i_7] [i_11] [i_7] = var_14;
                        arr_53 [i_0] [i_13] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
                    }
                    arr_54 [15LL] [i_7] [i_0] [5LL] [i_11] [i_0] = ((((/* implicit */int) var_6)) >> (((4227858432U) - (4227858417U))));
                }
                arr_55 [i_0] [i_1] = ((/* implicit */unsigned char) var_11);
                var_29 = ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (4075186745U));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2982519987U)) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_1))))));
                var_31 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (7153070617186960395LL)));
            }
            for (unsigned short i_14 = 3; i_14 < 19; i_14 += 1) /* same iter space */
            {
                var_32 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) * (((7070821189069151963LL) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                arr_59 [(signed char)3] [i_14] [(signed char)10] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12)));
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)5)) ? (var_14) : (1726492817)));
            }
        }
        var_34 = ((/* implicit */signed char) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)))));
    }
    /* vectorizable */
    for (signed char i_15 = 1; i_15 < 12; i_15 += 2) 
    {
        var_35 = ((/* implicit */signed char) (-(var_7)));
        var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
    }
    var_37 = ((/* implicit */long long int) (unsigned char)2);
    var_38 = min((-1243575139), (((/* implicit */int) (unsigned char)197)));
}
