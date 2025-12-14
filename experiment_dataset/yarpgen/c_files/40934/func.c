/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40934
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88))))) % (((/* implicit */int) ((unsigned short) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)8018)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [(signed char)9] [i_1] [(short)9] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) ((unsigned int) arr_0 [12U])))))));
                arr_6 [10U] = ((/* implicit */short) var_6);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (int i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) var_10);
                var_13 = ((/* implicit */unsigned char) max(((~(((unsigned int) (unsigned short)0)))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_10 [i_2])))))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_3] [i_4] [(unsigned char)4] [(short)2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((~(((/* implicit */int) arr_17 [i_2] [(short)4] [i_2] [i_2])))) >> (((((((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_6])) + (((/* implicit */int) var_0)))) + (45107))))))));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (unsigned char)155)), (arr_8 [i_2])))))) ? (arr_12 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_1 [i_3]))))))))))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4] [i_4]))) : (((((((/* implicit */int) arr_20 [i_2])) != (((/* implicit */int) var_0)))) ? (max((arr_14 [(unsigned char)12] [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned char)34)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (var_2)))))))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_1 [i_3])))) || (((/* implicit */_Bool) arr_2 [i_2] [7U])))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) max((arr_12 [i_2] [i_2] [i_3]), (((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_2] [i_2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 3; i_7 < 14; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 4; i_9 < 15; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_7))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_27 [11LL] [(unsigned short)6])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_0))))) != (max((((/* implicit */unsigned int) arr_33 [0] [i_9])), (arr_31 [i_10] [4U] [(short)13] [i_7 + 1])))))) : ((-(((/* implicit */int) min((var_10), (var_10))))))));
                            arr_35 [i_7 - 1] [i_8] [i_8] [15U] [i_7 - 1] |= ((/* implicit */_Bool) ((unsigned int) arr_26 [i_10]));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) max((arr_34 [i_8]), (((/* implicit */unsigned int) arr_27 [i_7 - 2] [i_9 - 1])))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) (~(((arr_32 [i_7 - 1] [i_7]) + (((/* implicit */unsigned long long int) (+(4294967293U))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 18446744073709551606ULL))));
                var_22 = ((/* implicit */long long int) ((((arr_32 [i_7 - 3] [i_7 + 2]) + (arr_32 [i_7 - 3] [i_7 + 2]))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26341)) % (((/* implicit */int) (unsigned char)2)))))));
            }
        } 
    } 
}
