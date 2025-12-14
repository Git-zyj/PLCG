/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192354
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
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) var_7));
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_5 [i_0])) << (((((/* implicit */int) arr_1 [i_2] [i_1])) - (8705)))))));
                arr_8 [i_2] [i_1] [2] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_2])))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_1] [i_2] [i_0])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_0 [(unsigned char)8])) : (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), ((unsigned char)124)))))))))));
                arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)-11);
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-35))))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_2])))))));
                            var_22 = ((/* implicit */int) ((_Bool) ((unsigned long long int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                arr_16 [i_0] [i_1] [i_5] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)-8))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 2) 
                {
                    arr_21 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) arr_10 [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 1] [i_6] [i_6])) : (((/* implicit */int) arr_10 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 2] [i_6] [i_6]))))) ? (((/* implicit */int) min((arr_10 [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [(unsigned char)4] [i_6 + 1]), (arr_10 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6])))) : (((/* implicit */int) max((((/* implicit */signed char) var_8)), ((signed char)-11))))));
                    arr_22 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */unsigned int) (unsigned char)132);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_25 [i_0] [(_Bool)1] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) (((-(arr_7 [i_0] [i_0] [i_0] [i_0]))) >> ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8)))))))));
                    arr_26 [i_0] [i_7] [i_7] = ((/* implicit */short) (signed char)52);
                }
                var_23 |= ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0] [i_1] [7U] [i_0])) || (((/* implicit */_Bool) (unsigned short)41561))))), ((signed char)12)));
                var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) 216929481)) != (4294967295U))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (4294967295U))))));
            }
            var_25 = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned short)65535))))), ((+(1532591376U))))));
            arr_27 [i_0] = ((unsigned char) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_13)) ? (-1205245301) : (((/* implicit */int) arr_0 [i_0]))))));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((unsigned char) (~(arr_17 [i_0] [i_0] [i_0] [i_1])))))));
            var_27 = ((/* implicit */unsigned int) ((_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) + (arr_15 [i_0]))), (((/* implicit */unsigned int) (signed char)-8)))));
        }
        for (unsigned char i_8 = 1; i_8 < 8; i_8 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((_Bool) (_Bool)1)))));
            var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_13)) : (-1205245297)));
        }
        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 4) 
        {
            arr_33 [i_0] [i_0] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_9] [i_9 + 2])) : (((unsigned long long int) 4294967295U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))));
            var_30 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_23 [i_0])) == (((/* implicit */int) arr_30 [i_0])))) ? (((unsigned long long int) arr_23 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_30 [i_0]), (((/* implicit */unsigned short) var_11))))))));
        }
        for (unsigned char i_10 = 1; i_10 < 8; i_10 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                arr_39 [i_10] = ((/* implicit */signed char) ((unsigned int) var_9));
                arr_40 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) (-(var_7)));
            }
            for (unsigned char i_12 = 1; i_12 < 7; i_12 += 2) 
            {
                arr_43 [i_10] [(signed char)9] [i_12] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_10 [2U] [i_10] [1U] [i_10] [i_10] [i_10 + 2]))))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [(unsigned short)5] [i_12] [i_0] [i_12])) ? (max((((/* implicit */int) ((unsigned char) var_8))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0])) : (var_10))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_12] [i_12] [i_0]))) : (((/* implicit */int) arr_3 [i_10 - 1] [i_12 + 2]))))));
                arr_44 [i_10] [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) % ((+(2715803522U)))))) ? (max((arr_15 [i_10 - 1]), (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) arr_0 [i_10])) : (((/* implicit */int) arr_30 [i_10]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_12 [i_0] [i_10] [i_10] [i_0]), (arr_19 [i_0] [i_0] [i_12] [i_12])))) ^ (((/* implicit */int) (signed char)-8)))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                var_32 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_31 [i_0] [2U] [i_0])) : (((/* implicit */int) var_16)))), (((/* implicit */int) (unsigned char)121)))) <= (var_10)));
                var_33 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_10 [i_0] [1ULL] [i_13] [i_0] [i_0] [i_13])))) ? (((/* implicit */int) ((signed char) arr_10 [i_0] [i_0] [i_0] [i_10] [i_10 + 2] [i_13]))) : ((+(((/* implicit */int) (unsigned char)254))))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        {
                            arr_52 [i_0] [i_10] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) 1205245310))));
                            arr_53 [i_0] [i_10] [i_14] [i_15] = ((/* implicit */unsigned long long int) (unsigned char)252);
                        }
                    } 
                } 
            }
            arr_54 [i_10] = ((/* implicit */unsigned char) ((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((var_6), (var_0)))) < (-1205245315))))) : (((min((6U), (((/* implicit */unsigned int) var_7)))) % ((~(var_9)))))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
            var_35 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) var_12))), (arr_47 [i_10 + 2] [i_10 + 2] [i_10 + 2])));
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    {
                        var_36 = ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned char)117)))), (((((/* implicit */int) arr_42 [i_0] [i_10 + 1])) >> (((/* implicit */int) (_Bool)1))))));
                        arr_59 [i_0] [i_10] = ((/* implicit */unsigned int) ((var_10) | (1205245300)));
                    }
                } 
            } 
        }
        var_37 *= ((/* implicit */signed char) min((max((((/* implicit */unsigned char) (!(var_4)))), (arr_23 [i_0]))), (((/* implicit */unsigned char) ((((int) (_Bool)1)) > ((-(((/* implicit */int) arr_34 [i_0])))))))));
        var_38 = ((/* implicit */unsigned char) (+(min((-1205245311), (((/* implicit */int) (unsigned char)0))))));
    }
    for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) /* same iter space */
    {
        var_39 += ((/* implicit */unsigned int) ((unsigned char) 4294967277U));
        var_40 = ((/* implicit */_Bool) ((2147483647) % (-1010343223)));
    }
    var_41 = ((/* implicit */unsigned long long int) var_1);
    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */int) max((var_0), (var_0)))) != (((/* implicit */int) var_5)))))));
}
