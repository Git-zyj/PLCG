/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40506
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_18 *= ((/* implicit */unsigned char) var_12);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(unsigned char)1] [i_1])) >> (((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_2] [i_3]))) - (8)))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), ((~(((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned long long int) var_9)) : (0ULL)))))));
                        arr_12 [i_2] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_1 [i_3] [i_1]) : (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        var_21 ^= ((/* implicit */int) (~(max(((~(arr_4 [i_2]))), ((+(var_6)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 3; i_5 < 8; i_5 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) arr_4 [3ULL])) ? (arr_6 [i_0] [(_Bool)1] [i_0]) : (13654874637342269693ULL))))) >> (((arr_4 [i_0 + 2]) - (5003802242749275668ULL)))));
                            var_23 &= arr_0 [i_4 + 2];
                            var_24 = var_10;
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_16 [4] [i_5 - 3] [i_4] [i_4 + 1] [i_4] [i_1] [i_0 - 2]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (2147483647))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [9])))))) / (arr_18 [i_0 + 2]))) : (((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */unsigned long long int) arr_7 [i_5] [i_4] [9ULL] [i_1])) : (arr_8 [i_4 + 2] [6ULL] [i_0 - 2] [i_0])))));
                            arr_19 [i_5] [i_4] [i_4] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12508124742129689748ULL))));
                        }
                        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 3) /* same iter space */
                        {
                            arr_23 [i_4] [i_4] [i_2] [i_4] [i_1] [i_4] = (-(((((/* implicit */_Bool) arr_13 [i_4] [i_4 + 1] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (0ULL))));
                            var_26 &= max((((arr_22 [i_6] [i_6 - 3] [i_6] [i_0] [i_4 + 2] [(unsigned char)8] [i_0 + 2]) - (12508124742129689734ULL))), (((var_11) + (arr_22 [0] [i_6 - 3] [i_6 - 3] [i_0] [i_4 + 2] [i_4] [i_0 - 2]))));
                        }
                        var_27 -= ((/* implicit */unsigned char) 17944029765304320ULL);
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) arr_4 [i_7]);
                            var_29 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 - 1]);
                            var_30 = arr_4 [i_0 - 1];
                            var_31 &= ((/* implicit */int) ((((((/* implicit */_Bool) (+(var_2)))) ? ((((_Bool)1) ? (8364425927397247706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)28)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0 - 2] [i_0] [i_1] [i_2] [i_2] [i_7]))))))));
                            var_32 = ((/* implicit */int) ((((unsigned long long int) arr_16 [7ULL] [i_4] [i_4] [i_1] [i_4] [i_0 + 2] [i_0 + 2])) == ((+(9007199246352384ULL)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_0 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) || (((/* implicit */_Bool) ((arr_3 [i_2] [i_2]) ? (var_16) : (arr_20 [i_8] [i_4] [i_4] [i_0])))))))) <= ((~(((((/* implicit */_Bool) var_4)) ? (arr_1 [i_2] [i_1]) : (arr_10 [i_8] [(unsigned char)3] [(unsigned char)3] [i_0])))))));
                            arr_30 [3] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (1622356797588082839ULL)))))))));
                            var_34 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_4)), (arr_7 [i_4] [i_4 + 2] [i_0 - 1] [i_0]))), (((/* implicit */int) ((unsigned char) arr_22 [i_4 - 1] [i_4 + 1] [i_0 + 2] [i_4] [i_0 + 2] [i_0 - 1] [i_0 + 2])))));
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((arr_0 [i_1]) % (((/* implicit */unsigned long long int) ((int) 8897617179672970264ULL))))))));
                            arr_31 [i_8] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (arr_24 [i_4 + 1] [i_4] [i_2] [i_0 + 1] [i_4] [i_0]) : (var_16)))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_36 = ((/* implicit */_Bool) arr_9 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_0 + 2] [i_0 - 2]);
                            var_37 = ((/* implicit */_Bool) (~(arr_25 [i_4] [i_4 + 1])));
                            var_38 = min((((/* implicit */unsigned long long int) (unsigned char)255)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (arr_25 [i_4] [i_4])))) ? (((arr_21 [2ULL] [i_1]) - (8897617179672970264ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(_Bool)1] [i_4 + 2] [i_1] [i_1] [(_Bool)1])))))))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13884417175788333602ULL)) ? (8646911284551352320ULL) : (((unsigned long long int) (unsigned char)32))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_38 [i_1] [i_1] [i_4] = (_Bool)0;
                            var_40 += ((/* implicit */unsigned char) 18446744073709551605ULL);
                            arr_39 [i_1] [i_4] [i_2] [i_4] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((8392476564851186484ULL) * (((/* implicit */unsigned long long int) ((int) arr_21 [i_1] [i_2]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_5 [i_0 - 1]))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            var_41 = arr_15 [i_4 + 2] [i_2] [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0];
                            var_42 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_27 [i_1] [i_4] [5] [i_1] [i_0 + 1])));
                            var_43 ^= var_6;
                        }
                    }
                    arr_42 [1ULL] [i_2] [(unsigned char)0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_0]))));
                }
            } 
        } 
        arr_43 [0ULL] [i_0] = min((((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1642462058)))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_11))))), (((/* implicit */unsigned long long int) var_0)));
    }
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 1) 
            {
                {
                    var_44 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                    var_45 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_45 [i_12])) : (((/* implicit */int) arr_45 [i_12]))))) || ((!(arr_49 [i_12] [i_13 + 1] [i_12] [i_14 - 1])))));
                }
            } 
        } 
    } 
    var_46 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) && (var_3))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_4)) < ((-(((/* implicit */int) var_4)))))))));
}
