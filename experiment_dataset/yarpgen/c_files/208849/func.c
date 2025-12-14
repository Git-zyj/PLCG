/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208849
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
    var_14 = ((/* implicit */int) var_5);
    var_15 = ((/* implicit */unsigned short) var_6);
    var_16 = ((/* implicit */int) max((var_3), (((/* implicit */short) var_9))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (min((((/* implicit */unsigned short) (signed char)6)), (arr_0 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((unsigned short) var_12));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) var_9);
                    arr_14 [i_3] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) -9);
                    var_18 = arr_12 [i_3];
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_19 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                    arr_20 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) var_11)) : (arr_12 [i_0])));
                }
                var_19 = ((/* implicit */unsigned int) var_5);
            }
            for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) 
            {
                arr_23 [i_5] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((unsigned int) arr_13 [i_5] [i_5] [i_5 + 1])));
                arr_24 [i_0] = ((/* implicit */unsigned int) var_8);
            }
            arr_25 [i_0] [i_0] = ((/* implicit */long long int) arr_17 [i_0]);
        }
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                arr_30 [i_0] [i_6] [i_6] [i_0] = ((/* implicit */int) (_Bool)1);
                arr_31 [i_0] [i_0] = ((/* implicit */signed char) arr_22 [i_6] [i_0]);
            }
            for (unsigned int i_8 = 3; i_8 < 20; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */int) max(((_Bool)0), ((_Bool)0)));
                            var_21 = ((/* implicit */long long int) ((_Bool) max((max(((_Bool)0), ((_Bool)1))), (((_Bool) arr_18 [i_0] [i_0] [i_8] [i_0])))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_8] [i_9] [i_8] [i_0]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((3749927162137645426LL), (((/* implicit */long long int) (signed char)(-127 - 1)))))))) : (min((-8108576458358133802LL), (((/* implicit */long long int) (_Bool)0))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (unsigned int i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        {
                            arr_45 [i_12] [i_11] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */signed char) arr_35 [i_0] [i_6] [i_8] [i_11]);
                            var_23 = ((((/* implicit */_Bool) 16777184LL)) ? (((/* implicit */int) min(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_9)))));
                            var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_3))))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_12 + 1] [i_12 + 1]))))), (((/* implicit */long long int) var_0))));
                            var_25 = ((/* implicit */short) min((((/* implicit */long long int) 1846172800U)), (arr_8 [i_0] [i_6] [i_8] [i_11])));
                        }
                    } 
                } 
            }
            arr_46 [i_0] = ((int) min((arr_1 [i_0]), (arr_1 [i_6])));
            arr_47 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((var_6), (((/* implicit */long long int) min(((-2147483647 - 1)), (arr_39 [i_6] [i_6] [i_0] [i_6] [i_0]))))));
            var_26 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) max((3888667628U), (((/* implicit */unsigned int) var_13))))), (min((((/* implicit */unsigned long long int) 3749927162137645431LL)), (var_12))))), (((/* implicit */unsigned long long int) (_Bool)0))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            var_27 = ((/* implicit */_Bool) arr_4 [i_13] [i_13] [i_0]);
            var_28 = ((/* implicit */signed char) var_13);
            var_29 = ((/* implicit */_Bool) ((long long int) 406299668U));
            var_30 = ((/* implicit */int) arr_48 [i_0] [i_0] [i_0]);
        }
        arr_50 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), ((signed char)43)))), (min((var_12), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))))));
        arr_51 [i_0] [i_0] = ((/* implicit */_Bool) -1);
    }
    var_31 = ((/* implicit */int) min((max((((long long int) var_4)), (((/* implicit */long long int) min((((/* implicit */int) var_3)), (-2147483636)))))), (((/* implicit */long long int) 4227858432U))));
}
