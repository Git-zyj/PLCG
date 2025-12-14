/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205228
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)117))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)1)))) : (((/* implicit */int) ((short) ((unsigned int) var_7))))));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max(((unsigned short)36879), (((/* implicit */unsigned short) (signed char)-117)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) min((((unsigned long long int) arr_4 [i_1])), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (signed char)-48)), (2497074802U))), (((/* implicit */unsigned int) var_3)))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned int) ((unsigned int) arr_4 [i_1]))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_3 [i_1])))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)75)))))));
        var_17 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (signed char)93)))));
    }
    /* LoopSeq 3 */
    for (signed char i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) max((((signed char) 594263946U)), (((signed char) 682557132)))))));
        arr_7 [i_2] = ((/* implicit */unsigned int) max((((unsigned long long int) arr_6 [i_2 - 1])), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) arr_6 [i_2 + 1]))), (((long long int) var_4)))))));
        arr_8 [i_2 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-104))))), (((long long int) (+(var_4))))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                var_19 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_4 [i_5]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3]))))))));
                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3] [i_4] [i_3]))))) ? ((-(((int) arr_9 [i_5])))) : (((/* implicit */int) arr_9 [i_4]))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_2 [i_3] [(unsigned short)15])))) ? (var_4) : (((arr_4 [i_3]) ^ (((/* implicit */unsigned int) var_7)))))));
                arr_20 [i_4] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) max((arr_13 [i_3] [i_3]), (((/* implicit */unsigned char) ((signed char) 200812795)))))), (((unsigned short) arr_4 [i_3]))));
                arr_21 [i_6] = ((/* implicit */short) (((((~(var_0))) << (((((((/* implicit */int) arr_6 [i_3])) + (63))) - (39))))) & (((/* implicit */long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (signed char)72))))))))))));
            }
            var_22 ^= ((/* implicit */int) 18446744073709551615ULL);
            var_23 ^= -682557148;
        }
        for (int i_7 = 4; i_7 < 7; i_7 += 4) 
        {
            var_24 = var_7;
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned char) (-(arr_23 [i_7] [i_7 - 2] [i_7])))))));
        }
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) max((arr_1 [i_3]), (arr_1 [i_3])))) / (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-61)), (arr_1 [(_Bool)1])))))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [0U] [i_3])) ? (arr_18 [i_3] [i_3]) : (((/* implicit */unsigned int) 682557121))))) || (((/* implicit */_Bool) ((arr_15 [i_3] [i_3] [i_3]) - (var_8))))))) >= (var_3))))));
    }
    for (short i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) ((((arr_0 [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_8])))))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) arr_28 [i_8] [(short)13])))))));
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_27 [i_8] [i_8])) : (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 826920255U)), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_8] [i_9] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (3500354495U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (arr_0 [(unsigned char)12])))));
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-52)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(_Bool)1] [i_9] [i_9]))) : (arr_31 [i_8] [i_9]))))))));
                var_33 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_4)) <= (((max((arr_29 [i_8]), (((/* implicit */unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) arr_4 [i_8]))))));
            }
            for (int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                arr_38 [i_11] [i_9] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_5)) & (((/* implicit */int) var_2))))))), (((unsigned long long int) arr_34 [i_8] [i_9] [i_11]))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 3; i_12 < 10; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_34 = (((((((_Bool)1) ? (((/* implicit */int) (short)14599)) : (((/* implicit */int) (unsigned short)10083)))) << (((((/* implicit */int) (unsigned char)233)) - (227))))) ^ (-200812817));
                            var_35 &= ((/* implicit */unsigned int) max(((-(((/* implicit */int) (signed char)-79)))), (max((max((200812767), (((/* implicit */int) (signed char)75)))), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (short)4741))))))));
                            var_36 = ((((/* implicit */int) arr_41 [(_Bool)1] [i_12] [i_11] [i_12 + 2])) / (((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_4 [i_13]), (((/* implicit */unsigned int) arr_1 [i_8]))))) <= (max((var_9), (var_1)))))));
                            var_37 ^= ((((long long int) ((682557117) >= (((/* implicit */int) (short)22598))))) == (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 12992983929846822413ULL)))) * (((var_4) / (arr_26 [i_8] [i_8])))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_25 [i_8])) || (((/* implicit */_Bool) 5453760143862729202ULL)))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    for (short i_15 = 2; i_15 < 12; i_15 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)20048)) : (((/* implicit */int) arr_49 [i_8] [8ULL] [i_11] [i_8] [i_11] [i_8] [i_14])))), (((/* implicit */int) arr_49 [i_8] [i_9] [i_11] [i_14] [i_15] [i_14] [4LL]))));
                            var_40 = ((/* implicit */unsigned int) var_6);
                            var_41 = ((/* implicit */signed char) max((var_41), (var_2)));
                            arr_51 [i_8] [i_8] [i_9] [i_11] [i_14] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_34 [(unsigned short)12] [i_11] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) : (arr_2 [i_15 + 1] [i_11]))), (((/* implicit */unsigned int) (short)22965))))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : ((~(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) 3019003299U))));
        }
        for (signed char i_16 = 1; i_16 < 13; i_16 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                arr_56 [i_8] [i_8] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-49)) * (((/* implicit */int) (_Bool)0))));
                var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (min((arr_50 [i_16 - 1]), (var_0))))))));
            }
            var_44 = ((/* implicit */int) max((var_44), ((-((~(((/* implicit */int) arr_33 [i_8] [i_16 - 1]))))))));
        }
    }
    /* LoopSeq 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) (signed char)61))));
        arr_60 [i_18] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_2 [i_18] [i_18]))) ^ (min((((/* implicit */int) var_10)), (var_8)))));
        var_46 *= ((/* implicit */unsigned int) max((((_Bool) arr_2 [i_18] [i_18])), ((_Bool)1)));
        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) min((arr_2 [(unsigned short)7] [i_18]), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), (arr_6 [i_18])))), (((unsigned short) (short)31760))))))))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_20 = 0; i_20 < 16; i_20 += 2) 
        {
            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0)))) ? (((unsigned int) -682557118)) : (((((/* implicit */_Bool) arr_57 [i_19] [i_20])) ? (arr_4 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) -524288))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_19])) && (((/* implicit */_Bool) (short)-4741)))))))))))));
            var_49 *= ((/* implicit */unsigned char) var_0);
            arr_66 [i_19] = ((/* implicit */unsigned short) arr_61 [i_19]);
        }
        for (unsigned short i_21 = 0; i_21 < 16; i_21 += 1) 
        {
            var_50 ^= ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_61 [i_19])), (((unsigned short) ((unsigned short) (unsigned short)720)))));
            var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) 2744615382621486955LL))));
            arr_70 [i_19] = ((/* implicit */unsigned short) max((arr_57 [i_19] [i_19]), (((/* implicit */unsigned char) ((_Bool) arr_4 [i_19])))));
            var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) arr_2 [(unsigned short)1] [i_19]))));
        }
        for (unsigned short i_22 = 1; i_22 < 13; i_22 += 2) 
        {
            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1))))));
            /* LoopSeq 1 */
            for (int i_23 = 1; i_23 < 15; i_23 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_24 = 0; i_24 < 16; i_24 += 4) 
                {
                    var_54 = ((/* implicit */unsigned char) max((var_54), (arr_79 [i_24] [i_24] [i_23] [i_22] [i_19])));
                    var_55 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (min((((/* implicit */long long int) arr_59 [i_24] [i_24])), (var_0)))));
                }
                var_56 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 90114302))));
                arr_81 [i_19] [i_19] [i_19] [(unsigned short)14] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) max((var_8), (((/* implicit */int) arr_78 [i_19] [(unsigned short)10] [i_22 + 1] [(unsigned short)10] [i_22] [i_23 + 1]))))))));
            }
            var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) arr_71 [i_22 - 1] [i_22]))))))));
            var_58 = ((/* implicit */int) ((_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_9)))));
            var_59 ^= ((/* implicit */unsigned int) arr_1 [i_22 + 2]);
        }
        var_60 = ((/* implicit */unsigned short) arr_2 [i_19] [i_19]);
        var_61 -= ((/* implicit */unsigned short) ((int) var_1));
    }
    var_62 = ((/* implicit */long long int) max((var_62), (((/* implicit */long long int) var_1))));
    var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) var_6))));
}
