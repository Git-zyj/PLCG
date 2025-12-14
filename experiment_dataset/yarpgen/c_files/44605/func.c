/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44605
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((short) arr_8 [i_4] [i_4] [i_4 + 4] [i_4 + 3] [i_4] [i_4 - 2]))));
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2 - 2] [i_2 + 1] [i_0] [i_0] [i_0])) || ((_Bool)1))))));
                            var_16 = ((/* implicit */_Bool) ((((arr_5 [5] [5]) + (2147483647))) >> (((arr_5 [i_4 + 2] [i_1]) + (1828506030)))));
                        }
                        var_17 -= (((!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_3] [i_2 - 2] [i_0] [i_1] [i_0] [i_0]))))))) ? (((((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_4 [i_3] [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 1445150410U))))) : (((/* implicit */int) ((((/* implicit */_Bool) -859651440)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_3]))))))));
                        var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 2] [i_2 + 1])) * (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)0))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 712041637U)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        arr_12 [i_0] = ((/* implicit */unsigned char) (+(min((((unsigned int) arr_2 [i_0] [i_0] [i_0])), (((/* implicit */unsigned int) max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_0]))))))));
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        arr_16 [i_5] = ((/* implicit */int) min((((/* implicit */long long int) (+((+(((/* implicit */int) arr_14 [i_5] [i_5]))))))), (-366778022880638210LL)));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_24 [i_7] [i_6] [i_6] [i_5] = ((/* implicit */_Bool) arr_15 [i_5] [i_5]);
                    /* LoopSeq 1 */
                    for (long long int i_8 = 3; i_8 < 14; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */int) ((signed char) ((int) arr_25 [i_6] [i_6])));
                        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned short)12] [i_6] [7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_7] [i_8]))))) ? (((/* implicit */int) (unsigned short)65534)) : (((((/* implicit */_Bool) (short)-18030)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)3584)))))), (((/* implicit */int) var_8))));
                    }
                    var_22 = ((/* implicit */short) min((((/* implicit */int) arr_13 [i_6])), (((((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (arr_26 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */int) arr_20 [i_5] [i_6])))) + (((/* implicit */int) ((unsigned short) arr_14 [i_5] [i_5])))))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_23 ^= ((/* implicit */int) ((max((arr_28 [i_9 - 1] [i_9]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [(unsigned short)0])) && (((/* implicit */_Bool) var_0))))))) / ((-(min((arr_28 [i_9] [i_9]), (620101789U)))))));
        var_24 = ((/* implicit */_Bool) min((arr_29 [i_9]), (((((/* implicit */int) arr_27 [i_9 - 1])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_9])))))))));
        arr_30 [i_9] = ((/* implicit */long long int) (+(arr_29 [i_9])));
    }
    var_25 = ((/* implicit */unsigned int) var_3);
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_2)))) && ((!(((/* implicit */_Bool) var_12)))))))));
    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) -229902258)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))))));
    var_28 = ((/* implicit */int) min((((/* implicit */unsigned int) var_5)), (((unsigned int) ((unsigned char) var_4)))));
}
