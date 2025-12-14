/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52719
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
    var_19 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (9184495411265021260ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
                    var_21 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) var_15)) : (max((var_6), (var_18))))), (((((/* implicit */_Bool) 9184495411265021257ULL)) ? (9262248662444530353ULL) : (8ULL)))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_22 -= ((/* implicit */long long int) min((max((max((9262248662444530353ULL), (9262248662444530351ULL))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((_Bool) var_4)))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 3; i_4 < 10; i_4 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) (+(max((arr_10 [i_4 - 2] [i_0] [i_0 - 3] [i_0] [i_0 - 3]), (arr_10 [i_4 - 2] [i_0] [i_1] [i_0] [i_0 - 2])))));
                            var_24 = ((((/* implicit */_Bool) 9262248662444530353ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) : ((+(1775638323U))));
                            var_25 = ((/* implicit */signed char) ((6ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-26), ((signed char)26)))))));
                            var_26 = ((/* implicit */unsigned int) ((unsigned short) (((~(((/* implicit */int) var_11)))) & (((/* implicit */int) var_2)))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) var_6);
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) max((-815861978), (((/* implicit */int) (signed char)1))))) ? (((long long int) arr_6 [i_3] [i_3] [i_1 + 2])) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))))))));
                            var_29 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0)))) : (max((((/* implicit */unsigned long long int) var_13)), (var_6))))));
                        }
                        for (unsigned short i_6 = 3; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (3242886868U) : (((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48131))) : (3242886868U)))));
                            var_31 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_10))))), (((unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) ((signed char) arr_12 [(short)10] [i_1] [i_1] [(short)10] [i_1]))), (max((((/* implicit */short) var_9)), (var_4))))))));
                            var_32 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [0] [(short)9] [i_0]))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 3] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))));
                            var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) (unsigned short)21915))), ((+(((/* implicit */int) (signed char)-118))))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_19 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [(unsigned short)6]))) ? (3242886868U) : (min((((/* implicit */unsigned int) (signed char)54)), (arr_9 [i_0 - 1] [i_0] [i_1 - 2] [i_7 - 1])))));
                            var_35 = ((/* implicit */unsigned short) max((((/* implicit */short) ((signed char) arr_19 [i_0 - 2] [i_0 - 1] [i_0 + 1] [(_Bool)1] [(unsigned char)8] [i_0]))), (min((arr_19 [i_0] [i_0] [i_0] [i_2] [(short)6] [i_0]), ((short)14796)))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_12 [i_7 - 3] [i_7 + 1] [i_1 + 3] [i_0 - 1] [i_0 + 1]))) % (((/* implicit */int) ((((/* implicit */_Bool) max((9262248662444530346ULL), (9262248662444530324ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))));
                            var_37 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) + (1966197658U)))), (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 3])) ? (-2317689729516260344LL) : (((/* implicit */long long int) var_5))))));
                        }
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)10)) && (((((/* implicit */_Bool) max((3511379604U), (arr_10 [(short)5] [(short)5] [i_2] [i_0] [i_0 - 3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (9184495411265021271ULL) : (18446744073709551594ULL))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_39 &= ((/* implicit */int) var_12);
                        var_40 = ((/* implicit */_Bool) arr_20 [i_0 + 1] [i_1 + 1] [i_2] [(short)3] [i_8] [i_1] [i_0]);
                        var_41 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (signed char)-91)), (11075959094186089707ULL))), (((((/* implicit */_Bool) 17935432088300397105ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)156), ((unsigned char)162))))) : (18446744073709551615ULL)))));
                    }
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */signed char) max((-141476394), (((/* implicit */int) (short)-20715))));
}
