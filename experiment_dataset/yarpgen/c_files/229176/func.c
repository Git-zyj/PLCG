/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229176
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
    var_15 = ((/* implicit */int) min((var_15), (min((172415872), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-1)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))))));
    var_16 &= max((((((/* implicit */_Bool) (short)-1)) ? (min((var_9), (((/* implicit */int) (unsigned char)168)))) : (var_3))), (((/* implicit */int) var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)78)) / ((-(((/* implicit */int) var_13))))));
                    var_18 -= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65521))));
                }
                for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)65521)) && (((/* implicit */_Bool) (short)-11001)))))) + (((/* implicit */int) (short)-1))));
                    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_2 [i_0])) ^ (min((arr_7 [i_0]), (-9))))), (min((((int) arr_9 [i_3] [i_1] [i_1] [i_0])), (((((/* implicit */int) (short)-11001)) ^ (((/* implicit */int) var_2))))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((arr_3 [i_0] [i_0]) != (((/* implicit */int) (unsigned char)60)))))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -314486237)))))) ? (((/* implicit */int) var_10)) : (min((arr_3 [i_0] [i_1]), (((/* implicit */int) (unsigned char)238))))));
                }
                var_23 = ((/* implicit */signed char) var_5);
                var_24 |= ((/* implicit */unsigned int) ((((/* implicit */int) min((max((((/* implicit */unsigned short) var_7)), ((unsigned short)54279))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)10)))))))) < (min((min((var_3), (((/* implicit */int) arr_4 [i_0] [i_1])))), (max((((/* implicit */int) arr_4 [i_0] [i_1])), (-1320572692)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                {
                    var_25 = (((!(((/* implicit */_Bool) var_6)))) ? (503316480) : (((/* implicit */int) arr_2 [i_4])));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 1; i_5 < 7; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_12 [i_5 + 1] [i_5 + 2] [i_5 + 1]))));
                        arr_19 [(unsigned char)10] [(unsigned char)10] [i_4] [i_5] = ((/* implicit */unsigned int) (_Bool)0);
                        var_27 += ((/* implicit */unsigned char) (_Bool)1);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_28 = ((((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_4] [i_6])) ? ((~(arr_7 [i_5]))) : (((/* implicit */int) (unsigned char)91)));
                            var_29 = ((/* implicit */signed char) max((var_29), (((signed char) arr_6 [i_0] [i_0]))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_26 [i_4] [i_7] [i_4] [i_7] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1])) == ((-(((/* implicit */int) arr_12 [i_0] [i_4] [i_7]))))));
                        var_30 = ((/* implicit */_Bool) min((var_30), ((!(((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_25 [i_0] [i_0] [(unsigned char)9] [i_7] [(unsigned char)9]))))))));
                        arr_27 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_10)) - (184)))))) ? (((((/* implicit */int) (unsigned short)65522)) << (((((/* implicit */int) var_4)) - (8))))) : (((int) (short)-1))));
                        var_31 -= ((/* implicit */unsigned short) (short)11001);
                    }
                    var_32 = ((/* implicit */unsigned char) ((arr_18 [i_0] [i_4] [i_0]) % (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (-1956262871) : (455308490))))));
                }
                for (int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((min((((/* implicit */int) (unsigned short)16383)), (var_9))) + (2147483647))) >> (((var_9) + (2002611271)))))) ? (min((((((/* implicit */int) var_0)) * (((/* implicit */int) var_7)))), ((+(((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [(signed char)2] [i_8])))))) : (((((/* implicit */int) min((((/* implicit */short) (unsigned char)15)), ((short)10808)))) / (((/* implicit */int) ((503316461) < (arr_16 [i_0] [i_0] [i_8] [i_8])))))))))));
                    var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */int) arr_4 [i_1] [i_8])) >> (((3363047762U) - (3363047739U)))))));
                    var_35 = ((/* implicit */unsigned char) ((int) var_11));
                }
                for (int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_36 = ((/* implicit */_Bool) var_6);
                        arr_34 [i_1] [i_1] [i_1] [(unsigned short)9] [(unsigned char)9] [i_0] = ((/* implicit */unsigned short) (unsigned char)253);
                        var_37 -= ((/* implicit */int) (unsigned short)13434);
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 2; i_11 < 9; i_11 += 2) 
                    {
                        arr_38 [3LL] [i_9] [i_11 + 1] = ((/* implicit */unsigned int) ((((1880997125) ^ (((/* implicit */int) (signed char)108)))) + (arr_32 [(_Bool)1])));
                        var_38 = ((/* implicit */int) ((signed char) var_11));
                    }
                    /* vectorizable */
                    for (int i_12 = 4; i_12 < 8; i_12 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 511)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1))));
                        arr_42 [4] [4] [2] [i_12 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_9 [i_12] [i_12 - 4] [i_12 - 1] [i_12])) : (((/* implicit */int) arr_9 [i_1] [i_12 + 2] [i_12 + 1] [i_12]))));
                        var_40 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1] [i_9] [i_12] [i_9])) && (((/* implicit */_Bool) (signed char)31))));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned char)210))))) || ((!(((/* implicit */_Bool) (signed char)118))))));
                    }
                    var_42 = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) arr_33 [i_0] [(signed char)6] [i_9]))), ((+(((/* implicit */int) arr_17 [i_0] [i_9] [1U] [(_Bool)0]))))));
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_15 [i_9]))) >= (((/* implicit */int) ((((/* implicit */int) (short)-21)) == (((/* implicit */int) arr_15 [i_9])))))));
                }
            }
        } 
    } 
    var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((signed char) ((((/* implicit */int) var_4)) & (((((/* implicit */int) var_13)) >> (((3382303167U) - (3382303151U)))))))))));
}
