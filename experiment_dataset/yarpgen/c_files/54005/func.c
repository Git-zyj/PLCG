/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54005
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
    var_20 = ((/* implicit */unsigned short) var_11);
    var_21 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) var_4))))), ((-(15638482015436518503ULL))))));
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) var_12)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((((/* implicit */int) var_17)), (((int) (~(-511001077))))));
                                arr_13 [i_0 + 1] [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((-891384746) - (((/* implicit */int) (short)31280))))) ? (((min((((/* implicit */unsigned long long int) var_14)), (2808262058273033113ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2808262058273033131ULL)) ? (((/* implicit */int) (short)-17265)) : (arr_6 [i_0 - 3] [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_16);
                }
                for (long long int i_5 = 2; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_0] [i_5 + 2] = ((/* implicit */unsigned char) max((1422128346), (((/* implicit */int) (short)18185))));
                    var_24 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((min((arr_10 [i_1] [i_1] [i_1]), (((/* implicit */int) (signed char)0)))) + (1457139909))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_25 [i_1] [i_0] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (short)31)))) + (2147483647))) >> (((((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */unsigned long long int) ((1422128346) + (((/* implicit */int) arr_5 [13LL] [i_6]))))) : (((((/* implicit */_Bool) 1422128346)) ? (((/* implicit */unsigned long long int) 1422128346)) : (16198549008957983311ULL))))) - (1422128350ULL)))));
                                var_25 += ((/* implicit */signed char) min(((-(((/* implicit */int) min((var_2), (var_13)))))), (max((min((((/* implicit */int) var_13)), (var_7))), (((/* implicit */int) arr_4 [i_0 - 1] [i_5 - 1] [i_5]))))));
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) -7734858565692810818LL))));
                            }
                        } 
                    } 
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_27 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((-459825589) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0])) - (55972)))))) : (((/* implicit */unsigned long long int) ((((-459825589) + (2147483647))) >> (((((((/* implicit */int) arr_2 [i_0])) - (55972))) + (22339))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) ((_Bool) ((signed char) ((long long int) arr_27 [i_0]))));
                                var_29 = ((/* implicit */int) ((_Bool) arr_2 [i_0]));
                            }
                        } 
                    } 
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 3) 
                    {
                        for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) arr_17 [i_11] [i_12] [i_13]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_4))))) : (((unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (-(-1))))));
                                arr_39 [i_0] [i_0] [i_0] [i_11] [2LL] [i_13] [i_13] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) var_13)), (arr_35 [i_12 + 1] [i_12] [i_12] [(_Bool)1] [i_12] [i_12])))));
                                var_31 = ((/* implicit */signed char) (((+(((/* implicit */int) var_10)))) + (((/* implicit */int) ((unsigned short) (+(1073741824)))))));
                            }
                        } 
                    } 
                    arr_40 [i_0] [i_0] [i_1] [i_11] = ((/* implicit */unsigned int) -1144293874);
                    var_32 ^= ((/* implicit */_Bool) min(((+(min((2074985333), (1422128346))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
                    arr_41 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) var_12));
                }
                arr_42 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0] [i_0])) ? (arr_9 [i_0 - 1] [i_0] [i_0 - 1]) : (arr_9 [i_0 - 2] [i_0] [i_1]))));
                var_33 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0 - 2])))))));
            }
        } 
    } 
}
