/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4439
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
    var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) max((-828926152575986689LL), (max((-828926152575986689LL), (828926152575986697LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((869799821), (-1715527290)))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (_Bool)1))))) : (-1895747152))))));
    var_19 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)36974)) != (((/* implicit */int) (short)-1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_20 *= var_2;
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2])))));
        var_22 = ((/* implicit */unsigned int) var_13);
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_1))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 4; i_3 < 17; i_3 += 4) 
            {
                var_24 += ((/* implicit */long long int) var_17);
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3] [8U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_3 - 3] [5LL] [i_3]))));
            }
            arr_9 [i_1] [14U] = ((/* implicit */short) max((828926152575986688LL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -590050736)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) : (828926152575986688LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_2])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68)))))) : (var_13)))));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_2]))));
        }
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            var_27 = max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_10 [i_1])), (arr_5 [17U] [i_4])))), (max((-4811302941905172056LL), (((/* implicit */long long int) 1075062391U)))));
            arr_13 [i_1] = (+(((max((1237587510U), (((/* implicit */unsigned int) (signed char)-19)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
        }
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) ((max((arr_12 [i_5]), (((/* implicit */unsigned long long int) var_9)))) == (max((arr_12 [i_5]), (((/* implicit */unsigned long long int) (unsigned short)384))))));
            var_29 ^= ((/* implicit */signed char) ((4782089255136968956ULL) < (((/* implicit */unsigned long long int) 4228484396U))));
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
        {
            arr_19 [(unsigned char)5] [(unsigned char)1] [i_6] = ((/* implicit */int) 3535372871U);
            var_30 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)41063)) && ((_Bool)0)))) < (((/* implicit */int) (signed char)85)))))));
        }
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) -525595025957852953LL))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_24 [i_7] = ((/* implicit */short) arr_12 [i_7]);
        arr_25 [i_7] = ((/* implicit */_Bool) arr_12 [i_7]);
        /* LoopNest 3 */
        for (signed char i_8 = 3; i_8 < 14; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            var_32 += ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) (short)-6348))) / (-6679716881632486602LL))), (((/* implicit */long long int) max(((unsigned short)41063), (((/* implicit */unsigned short) (_Bool)1)))))));
                            arr_39 [i_7] [(signed char)1] [i_9] [2U] [i_7] [i_7] = ((/* implicit */unsigned long long int) max((-1715527314), (((/* implicit */int) var_8))));
                        }
                        for (unsigned char i_12 = 2; i_12 < 14; i_12 += 3) 
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57345)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8191))))))));
                            var_34 += ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((3606789834965516309ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32656)))))), (max((arr_34 [i_8 - 3]), (arr_34 [i_8 - 3])))));
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1636))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65024))) + (0ULL))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57344))) < (3145267564U))))))));
                        }
                        var_36 = ((/* implicit */int) max((((/* implicit */unsigned int) max((arr_6 [i_8 + 1] [i_8 - 2] [i_8 - 3]), (((/* implicit */int) var_11))))), (max((((/* implicit */unsigned int) arr_10 [i_8 + 1])), (arr_17 [i_8 - 2] [i_8 - 2])))));
                    }
                } 
            } 
        } 
        arr_42 [i_7] [6LL] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_3))))));
    }
}
