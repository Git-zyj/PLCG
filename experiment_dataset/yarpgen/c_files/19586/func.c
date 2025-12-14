/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19586
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_13 ^= ((/* implicit */unsigned long long int) (~(((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) var_3))))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)22136)) + (((/* implicit */int) (unsigned char)22))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((signed char) var_12));
                            arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_4 [i_0]))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) min((arr_4 [i_3]), (arr_4 [i_3]))))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1] [i_2] &= ((/* implicit */long long int) ((unsigned char) ((signed char) arr_2 [i_3])));
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_7 [i_0] [i_5] [i_6])));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)29320))) * (var_8)))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 1581210588)) && (((/* implicit */_Bool) 9737805311623419494ULL))))) & (((((/* implicit */int) (unsigned short)41364)) - (((/* implicit */int) (signed char)7))))));
                        arr_23 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (((3518922369U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_6]))))))));
                    }
                } 
            } 
            arr_24 [i_0] [i_0] [i_5] = ((/* implicit */short) (+(((arr_4 [i_0]) ? ((-(((/* implicit */int) arr_16 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)118)))))))));
            var_18 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)23)) ? (var_4) : (((/* implicit */int) (signed char)-104))))) * (max((3852863265U), (((/* implicit */unsigned int) (signed char)-10)))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) -1781173115)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))));
            arr_25 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (signed char)7);
        }
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (signed char)11);
                    var_20 -= ((/* implicit */_Bool) min(((-(((unsigned int) var_12)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53762))) : (14821147814427152857ULL)))) ? (((/* implicit */int) arr_9 [i_0] [i_8] [i_9] [i_9])) : (((/* implicit */int) ((signed char) arr_3 [i_0] [i_8] [i_8]))))))));
                    var_21 &= ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)52546)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))))))));
                    var_22 = ((/* implicit */unsigned short) min((3625596259282398758ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65527)))))));
                }
            } 
        } 
        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [(unsigned short)2] [16LL])) - (((/* implicit */int) arr_26 [i_0] [6U] [i_0]))))) ? (max((((/* implicit */long long int) (signed char)67)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) ? (((/* implicit */int) ((var_3) && ((!(((/* implicit */_Bool) var_0))))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)-91))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (arr_19 [i_0] [i_0] [(short)6] [i_0]) : (((/* implicit */int) var_0))))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) (signed char)-100)), (12228649293046759005ULL))))), (((/* implicit */unsigned long long int) (~(2147483647)))))))));
        var_25 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_4 [i_0])), (arr_27 [i_0] [i_0] [i_0]))), (max((arr_27 [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_0] [i_0])))));
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_12))))) & (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (unsigned short)7554))))));
}
