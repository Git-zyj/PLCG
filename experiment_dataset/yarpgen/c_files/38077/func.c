/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38077
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                    var_20 = ((/* implicit */int) var_6);
                }
            } 
        } 
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-22935)) ? (10602669882188438077ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22935)))));
        var_22 += ((/* implicit */long long int) max(((short)-22939), (max((((/* implicit */short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (short)25449))))), (((short) (short)-22935))))));
        arr_7 [i_0] = ((/* implicit */int) ((unsigned short) var_8));
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((short) arr_6 [i_3] [i_3] [i_3] [i_3])))));
        var_24 ^= ((/* implicit */int) (short)-22931);
    }
    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */int) ((1292543520U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)22935)))));
            var_26 = (~(var_15));
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_12)), (((unsigned long long int) 3002423776U)))))));
            var_28 = (((_Bool)1) ? (min((((/* implicit */long long int) 0U)), (((var_3) - (((/* implicit */long long int) ((/* implicit */int) (short)-25382))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (short)25394)) ^ (((/* implicit */int) var_16))))), (-9163767232925739129LL))));
        }
        for (short i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
        {
            arr_21 [i_4] [5] [i_4] = ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (short)-25378)))))) ? (((/* implicit */int) arr_1 [i_4])) : (var_10));
            var_29 ^= min((var_17), (arr_12 [i_4] [i_7]));
            var_30 = ((/* implicit */unsigned int) max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_2 [i_4])), (var_16))))));
            var_31 = (!((!((!(var_4))))));
        }
        arr_22 [i_4] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) & (3002423755U)))) ? (((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22935))))) : (max((arr_14 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_9))))))));
        var_32 ^= ((/* implicit */_Bool) max((arr_3 [i_4] [i_4]), (((/* implicit */long long int) (short)22958))));
    }
    for (int i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), ((short)25394)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_9 = 4; i_9 < 15; i_9 += 3) 
        {
            arr_31 [i_8] = ((/* implicit */unsigned char) ((_Bool) max((var_13), (((/* implicit */unsigned int) var_14)))));
            var_33 += ((/* implicit */unsigned short) var_4);
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) (short)12789))) & (-8162414334369997572LL))) << (((12280814869029149265ULL) - (12280814869029149228ULL))))) + (((/* implicit */long long int) arr_0 [(signed char)3])))))));
        }
        for (long long int i_10 = 1; i_10 < 16; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_10 + 2] [i_10 - 1])) ? (arr_24 [i_10 + 2] [i_10 - 1]) : (-2079648638446075846LL))) == (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_24 [i_10 + 2] [i_10 - 1]) : (arr_24 [i_10 + 2] [i_10 - 1])))));
                            arr_43 [i_8] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) (~(((/* implicit */int) arr_40 [i_10 - 1] [i_10 + 2] [i_10] [i_10] [i_10 + 2])))))));
                            var_36 = ((/* implicit */long long int) max((var_36), ((-(max((((((/* implicit */_Bool) arr_8 [i_11])) ? (var_17) : (arr_37 [i_10 + 1] [12U] [(_Bool)0]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_8] [i_10 + 1] [i_14] [i_14]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25394))) : (var_12))))))) : (((/* implicit */int) ((signed char) (unsigned short)21516))))))));
                        arr_50 [i_8] [i_10] [i_10 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_8] [9] [9])) % (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 18; i_16 += 1) 
            {
                for (int i_17 = 2; i_17 < 15; i_17 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_18 = 0; i_18 < 18; i_18 += 3) 
                        {
                            arr_59 [i_18] [i_17] [i_16] [i_18] [i_10] [3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_51 [i_8] [i_10 - 1] [i_8]) >= (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25449)) ? (((/* implicit */int) (short)22958)) : (((/* implicit */int) (short)-25384))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((~(var_15)))))));
                            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) max(((~(((long long int) var_18)))), (max((arr_11 [i_17 + 1]), (((/* implicit */long long int) var_10)))))))));
                        }
                        var_39 = ((/* implicit */int) max((var_39), (((int) ((((/* implicit */_Bool) arr_40 [11] [i_10 - 1] [i_10 + 1] [i_17 + 2] [i_17])) ? (((/* implicit */int) ((short) -2281162881470160970LL))) : (((/* implicit */int) var_4)))))));
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32767)) ? (var_3) : (((/* implicit */long long int) arr_49 [i_8] [i_8] [i_8])))))));
                    }
                } 
            } 
        }
        var_41 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+((-(((/* implicit */int) (short)-25369))))))) + (var_13)));
    }
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 13; i_19 += 4) 
    {
        for (unsigned int i_20 = 0; i_20 < 15; i_20 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 15; i_21 += 4) 
                {
                    for (short i_22 = 0; i_22 < 15; i_22 += 4) 
                    {
                        {
                            arr_72 [i_19] = ((/* implicit */long long int) ((var_15) >> (((((/* implicit */_Bool) arr_63 [i_19] [8ULL] [i_22])) ? (((/* implicit */int) arr_44 [i_22] [i_20] [i_19])) : (((/* implicit */int) var_6))))));
                            arr_73 [i_22] [i_22] [14LL] [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~((~(var_15)))))) * (((unsigned long long int) (-(arr_11 [i_22]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_23 = 4; i_23 < 13; i_23 += 4) 
                {
                    for (int i_24 = 2; i_24 < 12; i_24 += 3) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned short) var_1);
                                var_43 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 3575188563U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22934))))) : (arr_12 [i_19 + 2] [i_24 + 3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
