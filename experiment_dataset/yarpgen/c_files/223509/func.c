/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223509
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
    for (int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 - 4])) && (((/* implicit */_Bool) var_9)))) ? (((((((/* implicit */int) arr_1 [i_0 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0 + 3])) + (18158))) - (20))))) : (((((/* implicit */int) arr_1 [i_0 - 2])) & (((/* implicit */int) arr_1 [i_0 + 3]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_12 += arr_2 [i_0];
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((int) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((~(var_2)))));
                var_13 -= ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) arr_4 [i_0 + 3] [(_Bool)1])))));
            }
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) arr_7 [i_0] [14U] [i_0])) ? (12447804982695702178ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_3] [i_0])))))))));
            var_14 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) arr_4 [i_0] [i_0])) : (var_6))) ^ (var_7))), (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_0 - 3])) ? (((/* implicit */long long int) arr_10 [i_3 - 1] [i_0 - 2])) : (var_4)))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                var_15 ^= ((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) ((signed char) min((var_6), (2744653337049845926LL)))))));
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_20 [i_0] [i_3] [i_4] [(signed char)12] = ((/* implicit */unsigned long long int) ((unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_4))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(signed char)6] [i_3] [i_4] [i_4] [i_5] [i_6 + 1])) ? (((/* implicit */int) (unsigned char)27)) : (var_0)))) ? (((/* implicit */int) ((_Bool) arr_11 [i_3] [(signed char)13] [i_3]))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [(signed char)6] [i_6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_16 [i_5] [i_6 + 2]))))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (arr_24 [i_6] [i_5] [i_3] [i_3] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2766368557U))))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [(signed char)1] [i_3] [9U] [(signed char)1] [i_3] = ((/* implicit */unsigned short) arr_23 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
                        var_18 = ((/* implicit */unsigned int) (~(max((max((((/* implicit */long long int) arr_9 [(_Bool)1] [(short)4] [i_3])), (var_7))), (((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                        arr_28 [i_3] [i_3] [i_3] [(short)4] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) arr_15 [i_4] [i_7]))), ((-(((/* implicit */int) arr_16 [i_0 - 3] [i_4]))))));
                        arr_29 [i_3] [i_7] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 6355902698978883921LL)) ? ((+((~(arr_5 [i_0 - 2] [i_0 - 2] [i_3] [i_5]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((+(arr_4 [12ULL] [i_5]))))))));
                    }
                }
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 3) /* same iter space */
                    {
                        arr_35 [i_3] [i_4] [i_9 - 1] = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_8])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_5 [i_4] [i_4] [i_3] [i_8]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))));
                        var_19 = ((/* implicit */unsigned int) ((arr_0 [i_4]) > (((/* implicit */long long int) ((/* implicit */int) ((short) max((var_3), (((/* implicit */unsigned short) arr_15 [i_8] [i_8])))))))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_0 - 1] [i_0] [i_0] [i_3 - 1] [i_10 + 2])) ? (((/* implicit */int) arr_12 [i_10 + 2] [i_3 - 1])) : (((/* implicit */int) arr_37 [i_0] [i_0 + 1] [i_0 + 1] [i_3] [i_3 - 1] [i_10 - 2]))))) ? ((+(((/* implicit */int) arr_12 [i_10 - 1] [i_3 - 1])))) : (((/* implicit */int) min((arr_37 [0U] [i_0 + 1] [i_0] [i_0 - 2] [i_3 - 1] [i_10 + 2]), (arr_37 [i_0] [i_0 - 3] [i_0] [i_0] [i_3 - 1] [i_10 + 1]))))));
                        var_21 = max((((/* implicit */unsigned long long int) var_8)), (arr_5 [i_10 + 2] [i_3] [i_3] [i_3]));
                        var_22 = ((/* implicit */signed char) max(((-(arr_4 [i_0 - 4] [i_3 - 1]))), (((/* implicit */int) var_8))));
                    }
                    for (signed char i_11 = 1; i_11 < 17; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
                        var_24 &= ((/* implicit */int) max((((/* implicit */long long int) ((unsigned short) ((unsigned short) var_0)))), (((((/* implicit */_Bool) arr_38 [i_0 - 2] [i_3 - 1])) ? (6355902698978883923LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0 - 2] [i_3 - 1])))))));
                    }
                    var_25 ^= ((/* implicit */unsigned long long int) var_2);
                }
                for (short i_12 = 4; i_12 < 17; i_12 += 1) 
                {
                    var_26 = ((/* implicit */signed char) 4294967295U);
                    var_27 ^= ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) arr_7 [i_0] [i_12] [i_4])) : (var_10)))))));
                    var_28 = ((/* implicit */int) -6355902698978883925LL);
                }
            }
            var_29 = (+(0ULL));
        }
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_13] [i_13] [i_13]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_13] [i_13] [i_0] [i_0] [i_0])))))) ? ((~(max((arr_7 [13LL] [i_0] [i_0]), (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_13])) ? (min((var_0), (arr_22 [i_0]))) : ((-(((/* implicit */int) (unsigned short)65532)))))))));
            var_31 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (9223372036854775807LL) : (var_10)))) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_13] [17U] [i_13] [i_13])) : (((/* implicit */int) ((short) var_8)))))));
            arr_45 [i_13] = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) ((_Bool) arr_22 [i_13]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(signed char)4] [i_13] [(signed char)13] [i_0] [i_0 + 3] [10] [i_0]))) & (arr_6 [i_13])))))));
        }
        var_32 = ((/* implicit */_Bool) (-(max((((/* implicit */int) ((signed char) var_2))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_9))))))));
    }
    for (unsigned long long int i_14 = 4; i_14 < 9; i_14 += 4) 
    {
        arr_48 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) arr_33 [i_14] [i_14] [i_14] [i_14])) % (var_4)))))) ? ((+(min((((/* implicit */long long int) arr_14 [i_14])), (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        var_33 += ((/* implicit */signed char) max((((int) arr_4 [i_14] [i_14])), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((var_6) > (var_6)))) : (((((/* implicit */_Bool) var_10)) ? (2147483647) : (((/* implicit */int) arr_19 [i_14] [(unsigned short)8] [i_14] [i_14] [i_14]))))))));
        arr_49 [(_Bool)1] [i_14] = (+(((/* implicit */int) ((short) arr_22 [i_14 - 4]))));
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) max((((arr_17 [i_14] [i_14] [i_14] [i_14]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_14] [12ULL] [i_14] [(_Bool)1] [i_14])))))) : (((long long int) var_1)))), (((((/* implicit */_Bool) arr_10 [i_14 - 1] [(short)0])) ? (var_7) : (((/* implicit */long long int) arr_10 [i_14 + 2] [i_14])))))))));
    }
    for (signed char i_15 = 3; i_15 < 11; i_15 += 4) 
    {
        var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34609))));
        var_36 = ((/* implicit */unsigned short) arr_1 [i_15]);
        arr_52 [i_15] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)127)), (arr_50 [i_15] [i_15])))))) && (((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_15 - 1] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))));
        arr_53 [i_15] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56310)) >> (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)136)) ? (12246995453663193306ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_37 ^= ((/* implicit */signed char) arr_54 [i_16]);
        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_16] [i_16] [i_16])) : (((((/* implicit */_Bool) ((short) arr_4 [i_16] [(unsigned short)5]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_16] [i_16] [i_16] [i_16])), (arr_39 [i_16] [i_16] [i_16] [i_16] [(signed char)8] [i_16])))) : ((-(arr_41 [i_16])))))));
    }
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (short)-19856))))))) ? ((-(((((/* implicit */_Bool) var_7)) ? (var_4) : (var_4))))) : (min(((-(var_10))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 738534130U)))))))));
    var_40 -= ((/* implicit */signed char) var_1);
    var_41 = ((/* implicit */_Bool) var_5);
}
