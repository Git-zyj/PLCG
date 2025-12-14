/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30181
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
    var_13 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3470793405U)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) (-2147483647 - 1));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) 291624342U);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) ((((-1102279336) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5230126758566473352ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (3470793415U)));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    arr_15 [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((4003342953U), (17U)))) <= (18446744073709551615ULL)))) << (((((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) % (arr_11 [i_3])))) - (11)))));
                    arr_16 [i_4] [i_2] = ((/* implicit */unsigned long long int) var_2);
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 291624342U)), (7168ULL)))) ? ((~(20ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4])))))) || (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))));
                }
            } 
        } 
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 7151ULL)) || (((/* implicit */_Bool) (unsigned char)145))));
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)225))));
    }
    for (short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((291624341U) & (1592986185U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (((unsigned int) var_7)) : (((((/* implicit */_Bool) (short)10307)) ? (arr_7 [i_5]) : (((/* implicit */unsigned int) var_7))))))));
        arr_21 [i_5] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65517))) : (arr_11 [i_5])));
        arr_22 [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 4003342964U)) ? (2701981111U) : (4003342954U))));
    }
    var_18 = ((/* implicit */unsigned short) ((2228303795U) / (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 3 */
    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] [i_6 - 1] = ((/* implicit */short) ((((/* implicit */int) (short)-10308)) / (((/* implicit */int) (short)10307))));
        var_19 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 291624341U)))) || (((/* implicit */_Bool) min((arr_3 [i_6 + 1] [i_6]), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_4)), ((short)15360)))))))));
        arr_26 [i_6] = ((((/* implicit */_Bool) min((291624342U), (((/* implicit */unsigned int) (unsigned char)17))))) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (unsigned char)26)));
        /* LoopSeq 3 */
        for (signed char i_7 = 3; i_7 < 16; i_7 += 1) /* same iter space */
        {
            arr_31 [i_6 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-13609)) ? (1592986158U) : (2147483644U)));
            var_20 = ((/* implicit */_Bool) arr_1 [i_6]);
        }
        for (signed char i_8 = 3; i_8 < 16; i_8 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_28 [i_6 + 1] [i_6 - 1]) + (arr_27 [i_6 - 2] [i_6 + 1] [i_8 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)111)) / (var_7)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)184)))) ? (arr_28 [i_8 - 2] [i_8 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4003342942U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)31718))))))))))));
            arr_34 [i_8 + 2] [i_8] = ((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (unsigned short)60545))));
            arr_35 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10325)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (short)16256))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            var_22 = ((/* implicit */_Bool) -181899213);
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 18; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) (unsigned char)144);
                        var_24 = ((/* implicit */unsigned int) (_Bool)1);
                        var_25 = ((/* implicit */short) arr_39 [i_9] [i_9] [i_10 + 1]);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) 1040384ULL))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
            arr_45 [i_6] [i_9] [i_9] = ((/* implicit */signed char) var_5);
        }
    }
    for (unsigned char i_12 = 2; i_12 < 18; i_12 += 1) /* same iter space */
    {
        arr_49 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((3543901879862538042LL), (((/* implicit */long long int) (unsigned char)170))))) ? ((((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (max((var_9), (((/* implicit */unsigned long long int) (short)20312)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)145)))))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 4; i_14 < 17; i_14 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL)))))));
                    arr_56 [i_13] [i_13] [i_13] &= ((/* implicit */_Bool) min((2147483647), (((/* implicit */int) (unsigned char)5))));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1ULL)) ? (-2147483647) : (((/* implicit */int) (signed char)109)))))));
                    var_30 = min(((unsigned char)111), (((/* implicit */unsigned char) (_Bool)1)));
                    var_31 |= ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10325))) & (1136848509U));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) 
        {
            for (short i_16 = 3; i_16 < 16; i_16 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)251)), (251111)));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)32767)) >> (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)32748)), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (3011244446U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))))))) : (14992532992157521624ULL)));
                    /* LoopSeq 3 */
                    for (short i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        arr_67 [(unsigned char)14] [i_16] [i_16] [i_16] &= arr_61 [i_15] [i_15];
                        var_34 -= ((/* implicit */unsigned char) max(((+(1ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)32)))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        arr_70 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-2061771977), (1445878550)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30782))) : (((unsigned long long int) 1136848518U))));
                        var_35 |= ((unsigned char) (unsigned char)144);
                        arr_71 [i_12 - 2] [i_12] [i_12] [i_18] = -873702746;
                        var_36 = ((/* implicit */_Bool) max(((unsigned short)15872), (((/* implicit */unsigned short) var_10))));
                        var_37 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) 8184574507322746469LL)), (((unsigned long long int) (short)-10333)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_38 = ((/* implicit */short) ((479433172) != (-268435456)));
                        arr_74 [i_12] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_60 [i_12] [i_15] [i_16 + 1])) ? (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) arr_42 [i_12] [0] [i_12] [i_12] [i_12 + 1])) : (((/* implicit */int) (unsigned char)109)))) : (((/* implicit */int) arr_24 [i_12 - 1] [i_16 - 3])))));
                        var_39 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) << (1ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_20 = 0; i_20 < 19; i_20 += 3) 
                        {
                            var_40 = ((/* implicit */signed char) ((_Bool) arr_27 [i_12 + 1] [i_12 - 2] [i_12 - 1]));
                            var_41 = (!(arr_75 [(unsigned char)9] [i_16] [i_16 + 2] [i_16]));
                            var_42 = ((/* implicit */signed char) arr_77 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_20] [i_16 + 1] [i_16] [i_16 + 2]);
                            arr_79 [i_20] = ((((/* implicit */_Bool) (unsigned char)178)) ? (arr_65 [i_16 + 3]) : (arr_65 [i_16 + 2]));
                        }
                        /* vectorizable */
                        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 1) 
                        {
                            var_43 = ((/* implicit */_Bool) var_9);
                            arr_84 [i_21] [i_19] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) arr_44 [(short)12]);
                            var_44 -= ((/* implicit */_Bool) var_7);
                        }
                    }
                    arr_85 [5LL] [i_15] [i_12] = (+(((/* implicit */int) (unsigned char)87)));
                }
            } 
        } 
    }
    for (unsigned char i_22 = 2; i_22 < 18; i_22 += 1) /* same iter space */
    {
        var_45 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)25757)) ? (16744448U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100)))));
        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31702))) : (arr_2 [i_22 - 1]))), (((/* implicit */unsigned int) min((arr_43 [i_22 + 1] [i_22]), (((/* implicit */int) (unsigned char)61)))))))) ? (((((/* implicit */int) (unsigned char)152)) - (393216))) : (((/* implicit */int) (unsigned char)106))));
        var_47 = ((/* implicit */signed char) (_Bool)0);
        var_48 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49))) == (291624342U)));
    }
}
