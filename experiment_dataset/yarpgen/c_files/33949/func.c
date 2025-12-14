/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33949
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
    var_10 = ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned short)0)))) <= (((/* implicit */int) max((((/* implicit */signed char) var_2)), (var_4)))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [(unsigned short)1] [4ULL] [i_4] = max((max((((long long int) 8540673070112850921LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned char)219))))))), (9139545051647953506LL));
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((14059069007363174032ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 3] [i_1 - 1] [i_3]))))) ? ((~(arr_0 [i_0 - 2]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31189)) ^ (((/* implicit */int) (unsigned short)34106)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)6)) / (arr_10 [i_0] [i_0] [i_2] [i_5] [i_0] [i_0] [i_6]))), ((+(arr_8 [i_0] [(short)0] [i_0] [i_0] [8LL])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)48))))) : (17355530620355634921ULL)));
                                var_13 = ((/* implicit */unsigned short) ((((unsigned long long int) (-(((/* implicit */int) (signed char)48))))) == (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_4)), (2632743691118677139LL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_14 = min((((/* implicit */int) ((unsigned short) ((signed char) var_2)))), (((((int) 1091213453353916694ULL)) / (((((/* implicit */int) arr_4 [i_0] [6])) - (((/* implicit */int) arr_11 [13LL] [i_1 + 1] [i_0])))))));
                                arr_23 [i_0] [i_7] [i_0] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)65534)) && (((/* implicit */_Bool) (unsigned char)16)))) || (((/* implicit */_Bool) max((((/* implicit */int) var_9)), (1115184326)))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)64)) + (((/* implicit */int) (unsigned char)231)))))) : (((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0 - 4] [i_2] [i_1 - 2] [i_7])))));
                                arr_24 [i_0] [i_7] [i_2] [i_7] [i_8] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) (unsigned char)104)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))))), (((/* implicit */long long int) ((signed char) (short)-19691)))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] [(short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_6 [i_0 + 1] [i_0 - 4] [i_1 - 2] [i_1 - 2]), (arr_6 [i_0 - 4] [i_0 + 1] [i_1 - 1] [i_1 - 2])))) && (((/* implicit */_Bool) min((32767), (((/* implicit */int) (unsigned char)151)))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)24)))))));
                }
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    arr_29 [i_0] = ((/* implicit */signed char) ((max((2651081676902805484LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_27 [i_1] [i_1] [i_9] [i_1]) : (((/* implicit */int) (signed char)(-127 - 1)))))))) + (((/* implicit */long long int) (~(arr_27 [i_9] [i_1] [i_0 - 1] [(unsigned short)17]))))));
                    arr_30 [i_0] [(short)8] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) ((unsigned char) arr_22 [(signed char)10] [i_9] [i_1 + 1] [(_Bool)0] [(signed char)10])))), (((((((/* implicit */int) arr_7 [i_0 - 4] [i_0] [i_9] [(unsigned short)9])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_9] [i_1 - 1])) + (2586)))))));
                    var_16 = ((/* implicit */short) ((unsigned long long int) (unsigned short)806));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (arr_0 [(unsigned char)4]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_1] [i_9 + 2])))))) ? (((/* implicit */int) max(((unsigned short)61811), (((/* implicit */unsigned short) var_1))))) : ((-(((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) arr_5 [i_0 - 4] [i_1] [i_1 - 1])))))));
                                arr_36 [i_1] [i_1] [i_9 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)5] [i_10] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_10])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 17231140596594687785ULL))))), (min((1606718284286285808LL), (((/* implicit */long long int) (unsigned char)25))))))) : (max((((/* implicit */unsigned long long int) arr_7 [i_0 - 4] [i_0 - 4] [i_9 + 1] [i_0 - 4])), (16261469257284797508ULL)))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_12 = 2; i_12 < 17; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        arr_43 [(unsigned char)7] [i_1] [i_12] [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) arr_11 [(unsigned short)4] [(unsigned short)4] [i_13])), (((((/* implicit */int) arr_16 [i_0 - 1])) ^ (((/* implicit */int) (short)-29527)))))));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)126)) ? (arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_13]) : (((/* implicit */long long int) arr_2 [i_12])))) > (((/* implicit */long long int) (-(arr_18 [i_0 - 1] [i_1 + 1] [i_13] [(unsigned char)14] [i_1 + 1]))))))) << ((((~(((/* implicit */int) (unsigned short)0)))) + (12))))))));
                        var_19 |= ((/* implicit */signed char) min((arr_39 [i_0 + 1] [i_0]), ((unsigned char)25)));
                    }
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) var_4)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))));
                    var_21 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29793))) : (var_3)))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        for (long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (-(-61326099727300090LL)))) || (((/* implicit */_Bool) arr_4 [i_1 + 1] [i_14])))));
                                arr_51 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */long long int) ((int) arr_31 [i_0] [i_0] [i_0] [i_0] [(unsigned short)5]))) : (((long long int) var_1))));
                                var_23 = (+(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))))) >= ((~(9007198180999168LL)))))));
                            }
                        } 
                    } 
                }
                arr_52 [10] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((-356380816) / (((/* implicit */int) (signed char)63))))) ? (((/* implicit */int) arr_28 [(unsigned char)12] [i_1 - 1] [(unsigned char)12])) : (((/* implicit */int) (unsigned char)255)))), (min((max((-1681025135), (((/* implicit */int) (unsigned short)65535)))), (((33030144) / (arr_8 [i_0] [i_0] [i_1] [i_1] [(signed char)12])))))));
                arr_53 [2] [i_1 - 2] [(unsigned short)4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_1 + 1] [i_0] [i_0])) ? (-2048864272) : (((/* implicit */int) var_5))))), (arr_42 [i_1 - 1])))), (((unsigned long long int) ((long long int) arr_16 [i_1])))));
                arr_54 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 4] [i_0 - 4] [i_0]))) & (min((((/* implicit */long long int) (unsigned char)28)), (9223372036854775807LL)))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_17 [i_0] [10LL] [i_0] [i_0])) : (-134699764))), (((/* implicit */int) ((arr_26 [8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) : (1090715534753792ULL)))) ? (((((/* implicit */_Bool) (signed char)122)) ? (108086391056891904LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0 - 2] [i_0] [(unsigned char)2] [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 985162418487296LL))))))))));
            }
        } 
    } 
}
