/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195917
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((max((((/* implicit */signed char) (_Bool)1)), ((signed char)-125))), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)126)) || (((/* implicit */_Bool) (signed char)125))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_5)), (max((4541002260741233504ULL), (((/* implicit */unsigned long long int) (signed char)126))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (-(max((var_5), (((/* implicit */long long int) ((((/* implicit */int) (signed char)126)) & (1353720557)))))))))));
                        arr_12 [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (arr_3 [i_2] [i_2] [i_2]) : (arr_3 [i_2] [i_1] [i_2])))) > (max((((/* implicit */unsigned long long int) var_9)), (arr_7 [i_0] [13U] [i_0]))));
                        arr_13 [i_1] [(signed char)3] [i_1] [i_1] = ((/* implicit */unsigned int) ((min((min((arr_7 [i_3] [i_1] [9LL]), (((/* implicit */unsigned long long int) (short)18666)))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) (short)-32765))))))) | (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)32314)) ? (-1353720557) : (((/* implicit */int) arr_0 [i_2] [i_0])))), (min((arr_10 [i_0]), (arr_6 [i_1] [i_1] [i_1]))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1676813767U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) max((3561118185U), (((/* implicit */unsigned int) var_6))))) : (((((/* implicit */_Bool) (short)-1925)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-108)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4079))) : (2897779235U)));
                        var_15 = max((1353720557), (((/* implicit */int) (short)-18650)));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((((/* implicit */long long int) (((~(-564089769))) | (-1845824949)))), ((+(-1LL))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((arr_6 [i_0] [i_1] [i_2]) > (((/* implicit */int) var_10)))))));
                        arr_19 [i_0] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-1090438282)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_8)))))) : ((-(arr_8 [i_0] [i_0] [i_0])))));
                        arr_20 [0ULL] [6U] [i_2] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0] [(_Bool)1]) ? (((/* implicit */long long int) arr_15 [(unsigned short)8] [i_1] [i_1] [2] [i_0] [i_2])) : (1336867867671104409LL)))) ? (arr_7 [i_2] [11] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) (short)2151)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_14 [i_0] [i_1]);
                            arr_26 [i_7] [i_6] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [(short)3] [i_1] [i_0] [8LL] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (short)9878))))) : (((((/* implicit */_Bool) (unsigned short)19774)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_14 [i_6] [i_0])))))) ? (arr_23 [i_1] [i_6] [i_2] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((unsigned int) min(((short)0), (((/* implicit */short) (_Bool)0))))))));
                        }
                        var_18 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (unsigned short)65525)), (arr_14 [i_0] [i_1]))), (max((arr_14 [i_1] [i_6]), (arr_14 [i_0] [i_1])))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) min((3189891795U), (((/* implicit */unsigned int) 597116962)))))))))));
                        arr_27 [i_0] [4LL] [i_2] [i_6] [i_6] [i_6] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) 1462033765U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)125))) : (-1LL)))) ? ((~(1299035798U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 21LL)) && (((/* implicit */_Bool) (unsigned char)61))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_8 = 3; i_8 < 15; i_8 += 4) 
    {
        var_20 = ((/* implicit */signed char) arr_29 [i_8] [i_8]);
        arr_32 [i_8] = ((/* implicit */short) min(((+(((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */unsigned long long int) -1371708316)) : (12181776843348637192ULL))))), (((/* implicit */unsigned long long int) ((_Bool) arr_28 [i_8 - 1] [i_8])))));
        arr_33 [i_8] = ((/* implicit */unsigned int) (-2147483647 - 1));
        var_21 = ((/* implicit */long long int) var_10);
    }
}
