/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24291
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
    var_12 = ((((((/* implicit */_Bool) var_10)) ? ((~(var_2))) : (((/* implicit */unsigned long long int) var_8)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) min((((arr_3 [i_0] [i_0] [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_1] [i_1] = (+(((long long int) 2097151)));
                    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_6)))) ? ((-(2203511439U))) : (((/* implicit */unsigned int) max((var_11), (2097151)))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)5322)))))))))));
                    var_15 = (i_1 % 2 == 0) ? (((/* implicit */short) ((int) ((((/* implicit */long long int) ((arr_4 [i_0] [i_1]) - ((-2147483647 - 1))))) % (min((arr_1 [i_1]), (((/* implicit */long long int) arr_5 [i_0] [i_1])))))))) : (((/* implicit */short) ((int) ((((/* implicit */long long int) ((arr_4 [i_0] [i_1]) + ((-2147483647 - 1))))) % (min((arr_1 [i_1]), (((/* implicit */long long int) arr_5 [i_0] [i_1]))))))));
                    var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 2] [i_1] [i_2 + 1]))))), (((unsigned int) 3840020556U))));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)6)) % (((/* implicit */int) (unsigned short)52621))))) <= (((arr_10 [i_1] [i_1] [4U]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_7)) : (var_2))) : (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) var_6))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (_Bool)1)), (var_6)))))) >= (((arr_9 [i_3 + 1] [i_3 + 1] [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 1] [i_0 + 2]))) : (18446744073709551591ULL)))));
                        arr_14 [i_0 + 2] [i_1] [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_3)))));
                        arr_15 [i_3] [i_1] [i_0] [(_Bool)0] = ((/* implicit */unsigned long long int) var_5);
                        arr_16 [i_4] [i_4] [i_1] [i_4] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 2147483647)) : (6378173235001244764LL)))) || (((/* implicit */_Bool) min((3840020556U), (((/* implicit */unsigned int) var_5))))))))));
                        arr_17 [1] [i_4] [i_1] [i_4] [10U] [i_4] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (signed char)93);
                            var_20 = ((unsigned int) ((454946727U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_11)))));
                            var_22 = ((/* implicit */_Bool) var_6);
                            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1744604310)), (18446744073709551615ULL)))) && ((_Bool)1))) ? (((((((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_0] [1ULL] [i_0] [i_0])) < (((/* implicit */int) arr_20 [i_7] [i_1] [i_7] [i_5] [i_3] [i_1] [i_0])))) ? (arr_12 [i_0 + 2] [i_1] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) 1588908629))))))) : (((/* implicit */unsigned long long int) max((((unsigned int) var_11)), (((/* implicit */unsigned int) arr_5 [i_3 + 1] [i_0 + 2])))))));
                        }
                        arr_27 [2] [(_Bool)1] [i_3] [i_1] [2] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (+(arr_12 [i_0] [i_0] [i_3] [i_5] [i_0]))));
                        arr_28 [i_0] [i_1] [i_1] [3U] [3U] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [(_Bool)1] [11] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) (+(528482304U)))) < (-5673559027808814077LL)))));
                        arr_29 [i_1] [i_1] [i_3 + 1] [i_5] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1125899906842623ULL)) ? (var_4) : (((/* implicit */unsigned long long int) arr_11 [i_1] [(unsigned char)3]))))) ? (var_10) : (((/* implicit */long long int) ((arr_10 [i_1] [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)10405)) : (((/* implicit */int) arr_13 [i_3] [i_3] [i_1] [i_0 - 2] [i_0 - 2]))))))));
                    }
                    var_24 = ((/* implicit */int) var_4);
                    arr_30 [i_0] [4ULL] [i_1] = ((/* implicit */unsigned int) ((max((min((var_2), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (-(2097151)))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)112)))))));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((arr_19 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (((+(arr_1 [i_1]))) > (((/* implicit */long long int) arr_4 [i_8 + 1] [i_1]))))))));
                    arr_34 [i_0 - 2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) 4294967295U);
                }
                /* vectorizable */
                for (int i_9 = 3; i_9 < 8; i_9 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)127))));
                    arr_37 [i_0] [i_1] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 871017975968939911ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_9]))) : (arr_6 [i_1] [i_1] [i_0] [i_9])));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_32 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_9 [i_9 - 3] [i_0] [i_0 - 2])))))));
                }
                var_27 = ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
    var_28 = (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3))))));
}
