/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203880
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
    var_16 -= ((_Bool) max((((/* implicit */short) ((unsigned char) var_3))), (min((var_7), (((/* implicit */short) var_2))))));
    var_17 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0])) & (arr_3 [i_1]))))) && (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((((short) min((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0] [i_0])))), (((/* implicit */short) (!((_Bool)1)))))))));
                        arr_9 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5437)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) -1691557975)), (-1980970044497000357LL))))))), (((short) var_10))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_1))))));
                            arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_5))), (max((((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned char)253)))), (((/* implicit */int) var_14))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                        {
                            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-6539398560241981660LL), (((long long int) arr_8 [i_0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_6))) : (min((6495312066611503822ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                            var_23 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) var_7))), (max((((/* implicit */long long int) arr_8 [i_2 - 1])), (var_6)))));
                        }
                        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((((/* implicit */unsigned long long int) arr_3 [i_2 - 1])) + (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_2 - 1])))))))));
                            var_25 = ((/* implicit */signed char) (!((_Bool)1)));
                            var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [(signed char)12] [i_2 - 1] [i_2 - 1] [i_2])), (var_11)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-10493)) != (((/* implicit */int) min((((/* implicit */short) arr_14 [(unsigned char)14] [i_1] [i_6] [i_3] [i_2 - 1])), (var_4))))))) : (max((((((/* implicit */int) (signed char)0)) + (((/* implicit */int) (signed char)0)))), ((+(arr_19 [i_0] [i_1] [i_2 - 1] [i_0] [i_6] [i_6] [i_6])))))));
                        }
                        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_27 *= ((/* implicit */long long int) ((int) ((min((((/* implicit */int) arr_4 [i_2] [i_2 - 1])), (var_10))) * (((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_3] [i_2 - 1])))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [(short)8] [i_2 - 1])) - (arr_3 [i_3])))) ? (((/* implicit */int) ((unsigned short) (short)-19783))) : (((/* implicit */int) ((signed char) (~(var_6))))))))));
                            var_29 = ((/* implicit */short) max(((unsigned char)96), (((/* implicit */unsigned char) var_9))));
                        }
                        var_30 = ((/* implicit */unsigned int) ((var_0) != (min((167164532486943152LL), (((/* implicit */long long int) 3606360845U))))));
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (-(max((((((/* implicit */int) var_5)) * (((/* implicit */int) var_7)))), (((/* implicit */int) ((_Bool) var_11))))))))));
            var_32 = ((/* implicit */unsigned int) arr_18 [12ULL] [12ULL] [i_0] [12ULL]);
            arr_25 [i_0] [i_8] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_8])) ? (var_10) : (((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) max((3952435887U), (((/* implicit */unsigned int) (signed char)114))))) : (((((/* implicit */_Bool) max((arr_7 [i_8] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_8]))))) ? (max((((/* implicit */long long int) var_9)), (-4019554920719874449LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))));
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_2 [i_8])))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
        {
            arr_28 [i_0] [i_9] [i_9] = ((/* implicit */int) (unsigned char)175);
            arr_29 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16899)) && ((_Bool)1)));
        }
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (-(((/* implicit */int) var_5)))))));
    }
    for (unsigned int i_10 = 3; i_10 < 8; i_10 += 1) /* same iter space */
    {
        arr_33 [i_10] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (-1376631079)))), (min((var_3), (((/* implicit */long long int) var_15)))))) & (((long long int) var_7))));
        var_35 = ((/* implicit */_Bool) arr_21 [i_10 + 1] [i_10 + 4] [(signed char)9] [i_10 - 1] [(signed char)9]);
    }
    for (unsigned int i_11 = 3; i_11 < 8; i_11 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_39 [i_11] = ((/* implicit */long long int) 4294967272U);
            arr_40 [i_11] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8130095870562194105ULL))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_44 [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((_Bool) var_4)), ((((_Bool)1) && (((/* implicit */_Bool) var_12))))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), ((-(var_11)))))));
            arr_45 [i_11] = ((/* implicit */short) (+(((/* implicit */int) ((short) ((_Bool) (_Bool)0))))));
            arr_46 [i_11] [(unsigned char)2] = ((/* implicit */long long int) (~(arr_34 [i_11])));
        }
        for (unsigned int i_14 = 3; i_14 < 11; i_14 += 3) 
        {
            var_36 = ((/* implicit */_Bool) min(((~(arr_49 [i_11 - 2] [i_14 - 3] [i_11]))), (((/* implicit */unsigned int) min((min((arr_3 [i_11]), (arr_12 [i_14] [i_11] [i_11] [i_11] [i_11 - 3] [i_11]))), (((/* implicit */int) (signed char)-24)))))));
            arr_50 [i_11] [i_14] [i_14] = ((((/* implicit */_Bool) (short)-19186)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-960194699829079925LL));
            arr_51 [i_11] = ((/* implicit */signed char) 14378243825521683275ULL);
        }
        /* LoopSeq 1 */
        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            var_37 ^= ((/* implicit */short) min((min((((/* implicit */unsigned int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))), (((unsigned int) var_5)))), (((/* implicit */unsigned int) max((arr_21 [i_11 + 3] [i_11] [i_11] [i_11 + 3] [i_11 - 1]), (((/* implicit */unsigned char) var_13)))))));
            var_38 = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_55 [i_11] [i_15] = ((/* implicit */unsigned int) max((((short) 17ULL)), (((/* implicit */short) arr_14 [i_11] [i_15] [i_11] [i_11 + 4] [i_11]))));
        }
    }
}
