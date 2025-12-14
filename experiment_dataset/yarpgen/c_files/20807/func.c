/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20807
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
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_16))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) & (var_14)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((int) 18446744073709551615ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3001716525316335994LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_13)))) ? (((int) var_13)) : (((/* implicit */int) max(((unsigned short)48135), (((/* implicit */unsigned short) var_3)))))))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_15))));
    var_19 = ((/* implicit */int) (unsigned short)65535);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))) >= (((/* implicit */int) ((short) arr_1 [i_0] [(_Bool)1])))))) < (((/* implicit */int) var_1))))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_3] [i_1] [i_3] = var_5;
                    var_22 = ((/* implicit */unsigned char) ((long long int) (unsigned short)255));
                }
                for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_6 [i_0] [i_1] [i_4]))) * (max((arr_6 [i_0] [i_1] [i_4]), (arr_6 [i_4] [i_2] [i_0]))))))));
                    arr_14 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_7 [i_1] [i_4]))) : (min((arr_7 [i_0] [i_4]), (((/* implicit */unsigned long long int) var_14))))))));
                }
                arr_15 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_12 [i_0]))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0]))) ^ ((~(var_15)))))));
            }
            for (short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (long long int i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_5] [i_6] [i_0] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_3 [i_1] [i_1]))))))) ? (((/* implicit */int) ((max((3560470199373294487LL), (arr_16 [i_7] [14U] [14U] [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7 + 1] [i_1] [22] [i_6] [i_7] [i_5] [i_6])))))) : ((~(((/* implicit */int) arr_22 [i_1] [i_7 + 1] [i_6] [i_6] [i_7 - 1] [i_6] [i_0]))))));
                            arr_24 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) & (var_9))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
                var_25 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)0])) ? (4077257380405748679LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_5])) * (((/* implicit */int) (unsigned short)65530)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [i_0] [(short)2])) * (((/* implicit */int) (unsigned short)27377))))) / (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_5]))))))) : (((/* implicit */unsigned long long int) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))))));
                var_26 = ((/* implicit */long long int) max((var_26), (((-5721765769501076753LL) * (((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)6)), (var_4)))) / (4484484443246502573LL)))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    arr_30 [(short)0] [(unsigned short)2] [i_8] [(short)0] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) arr_7 [i_9] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) var_11))));
                    var_27 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)255)) ? (144115187002114048LL) : (((/* implicit */long long int) var_4))))), (min((((/* implicit */unsigned long long int) arr_20 [i_8] [i_0])), (arr_8 [i_8])))));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1]))) : (arr_26 [i_0] [i_10] [i_8])))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (arr_26 [i_8] [i_1] [i_0]))))));
                        var_29 = ((/* implicit */unsigned char) arr_20 [i_10] [i_10]);
                        arr_34 [i_0] [i_0] [i_10] [i_9] [i_9] = ((/* implicit */_Bool) (signed char)126);
                        arr_35 [i_0] [i_9] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((arr_6 [i_0] [i_9] [i_8]) & (((/* implicit */unsigned long long int) min((1590636385U), (((/* implicit */unsigned int) arr_18 [i_0] [i_8] [i_9]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    var_30 = ((/* implicit */signed char) (-(arr_6 [i_9] [i_9] [i_9])));
                }
                for (unsigned char i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    arr_39 [i_11] [i_8] [i_1] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_16 [i_11] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_19 [i_11 + 3] [i_11 + 3] [i_8] [i_11 + 1]))))) : (((/* implicit */int) var_10))))) : (((unsigned int) arr_6 [i_11 + 3] [i_11 + 2] [i_11 + 3]))));
                    var_31 *= ((/* implicit */_Bool) var_14);
                }
                for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((long long int) ((var_9) >= (((/* implicit */unsigned long long int) 1873746884))))) / (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (signed char)-113)))) <= (((/* implicit */int) var_11)))))))))));
                    var_33 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_31 [(_Bool)1] [i_8] [i_1] [i_0] [i_0]), (((/* implicit */long long int) arr_11 [(short)15] [i_8]))))) ? (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))) : (arr_16 [i_0] [i_0] [i_0] [1])))))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) ((int) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_8] [i_8] [i_13] [i_14] [i_14]))) : (arr_13 [i_0] [i_8] [i_8] [i_1]))));
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)126)), (arr_3 [i_0] [i_0])))) >= (arr_25 [i_14] [i_1] [i_0]))))));
                    }
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_1] [i_8] [i_1] [i_1])) || (((/* implicit */_Bool) var_2))));
                }
                arr_46 [i_0] = var_11;
                var_38 = ((/* implicit */unsigned char) (-(-744951281)));
                arr_47 [i_1] [i_0] = ((/* implicit */_Bool) arr_11 [i_8] [i_8]);
            }
        }
    }
}
