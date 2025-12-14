/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38981
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (short)1284)) ? (2620723678U) : (1674243618U)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = (!(((/* implicit */_Bool) var_12)));
        var_22 -= ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)1284)))))));
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((arr_3 [i_1 + 2]), (arr_3 [i_1 + 2])))), (6435250741782602728LL)));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) (signed char)-84);
            var_26 = ((/* implicit */unsigned long long int) min((var_26), ((+(min((((unsigned long long int) (unsigned short)28590)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (10756500657094071138ULL)))))))));
            arr_8 [i_1] = ((/* implicit */unsigned long long int) (+(269987956)));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_28 = ((/* implicit */unsigned int) 12347770237346923124ULL);
                        arr_18 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((_Bool) arr_4 [i_1 + 1] [i_1 + 2]));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) min((var_29), (((((/* implicit */long long int) arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1])) % (((((/* implicit */long long int) -269987952)) + (8103560908367838202LL)))))));
                            arr_26 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) (~(var_1))))));
                            var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 269987956)) || (((/* implicit */_Bool) 829655654U))));
                            var_31 = ((/* implicit */unsigned int) var_11);
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_13))))));
        }
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            var_33 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_5)))), (((((/* implicit */int) (short)-1765)) - (((/* implicit */int) (signed char)(-127 - 1)))))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1353958879)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (signed char)-120))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) var_5))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((signed char) -2147483645))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 5870655927931926742LL)))))))));
        }
        /* vectorizable */
        for (signed char i_10 = 4; i_10 < 18; i_10 += 1) 
        {
            var_35 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) % (arr_28 [i_1 + 2] [i_10 - 4] [i_10 - 1])));
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_13)) : (((unsigned long long int) (_Bool)1))));
            var_37 += ((/* implicit */unsigned long long int) var_18);
        }
        for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            arr_34 [i_1] = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) -1133916165471908153LL)) ? (11350675250293741060ULL) : (((/* implicit */unsigned long long int) var_12)))) ^ (((/* implicit */unsigned long long int) var_0)))));
            var_38 = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_11] [i_11]))))), (((long long int) var_8))));
        }
        /* LoopSeq 2 */
        for (signed char i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
        {
            var_39 = (!(((/* implicit */_Bool) arr_31 [(signed char)2])));
            arr_38 [i_1] |= ((/* implicit */unsigned int) var_16);
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                var_40 = ((/* implicit */int) ((((((/* implicit */_Bool) -8820314695536988572LL)) && ((_Bool)1))) ? (((var_15) ? (-4278640480850805637LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) arr_24 [i_12] [i_12] [i_1 - 1] [i_1 + 2] [i_1 - 1]))));
                var_41 -= ((/* implicit */unsigned int) 0);
                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (-(-2946778348815446531LL))))));
            }
            var_43 -= ((/* implicit */int) max((min((((((/* implicit */_Bool) var_11)) ? (var_10) : (arr_11 [i_1] [i_1] [i_12] [i_12]))), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)84)))))));
        }
        for (signed char i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
        {
            arr_46 [i_14] = ((/* implicit */unsigned short) 269987985);
            var_44 = ((/* implicit */int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1927305636)))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)25766))) ^ (((long long int) var_11)))))));
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
    {
        arr_49 [i_15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) min((-4278640480850805637LL), (((/* implicit */long long int) (signed char)-84)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_15]))) % (939524096U)))));
        var_45 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) var_2)) : (min((1200564529424262766ULL), (((/* implicit */unsigned long long int) var_19)))))), (min((((/* implicit */unsigned long long int) 3355443201U)), (7479251741747088840ULL)))));
        arr_50 [i_15] [i_15] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((8U) >= (((/* implicit */unsigned int) var_1)))))))) ? (((/* implicit */int) min((((unsigned char) var_13)), (((/* implicit */unsigned char) var_16))))) : ((-2147483647 - 1)));
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                {
                    var_46 = ((/* implicit */unsigned long long int) var_5);
                    var_47 = (~(((((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147467264) : (var_4))) >> (((((/* implicit */int) var_14)) - (44))))));
                    var_48 += ((/* implicit */unsigned short) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) arr_48 [i_17]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 4; i_18 < 23; i_18 += 4) 
                    {
                        var_49 = ((/* implicit */long long int) max((((arr_57 [i_16] [i_15] [i_18 - 3] [i_18 - 1] [i_18 + 1]) + (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2828710596U)))))));
                        arr_59 [i_15] [i_15] [i_17] = ((/* implicit */long long int) (_Bool)1);
                        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-41)), ((unsigned short)29726)))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) arr_54 [i_15] [i_15] [i_15] [i_15]))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (min((((/* implicit */unsigned long long int) 1546744731)), (var_8)))))));
                    }
                    for (long long int i_19 = 3; i_19 < 23; i_19 += 3) 
                    {
                        arr_63 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) min(((signed char)-74), (var_6))))));
                        var_51 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_53 [i_15] [i_16] [i_17]), (((/* implicit */unsigned long long int) var_19))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_54 [i_19 - 3] [i_19 - 2] [i_19 - 2] [i_19 + 1])), ((unsigned char)190)))) : (((/* implicit */int) var_15))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        arr_68 [i_20] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))));
        var_52 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
    }
}
