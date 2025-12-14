/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234267
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */short) var_2);
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                            var_18 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */long long int) var_17))))))), (var_8)));
                        }
                    } 
                } 
                var_19 *= ((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_21 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) max((min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) arr_15 [i_4] [i_1] [i_4] [i_4] [i_6])))))), (((((/* implicit */int) arr_19 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 3])) >> (((var_1) - (455764267)))))));
                                arr_22 [i_4] [i_1] = ((/* implicit */short) var_14);
                                var_20 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                arr_30 [i_4] [i_7] [i_1 + 1] [i_1 - 1] [i_8] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_19 [i_1 + 4] [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_1 + 2])))));
                                var_21 = ((/* implicit */unsigned char) ((var_12) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), ((+(var_14))))))));
                                arr_31 [i_0] [i_1 - 1] [i_0] [i_4] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) var_3))), (190614285)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_22 += ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [(_Bool)1])))), (((int) ((((/* implicit */_Bool) (short)-498)) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [(signed char)4] [i_0] [i_0])) : (((/* implicit */int) var_9)))))));
                                var_23 -= ((/* implicit */_Bool) ((int) ((signed char) ((unsigned int) (signed char)53))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_11 = 2; i_11 < 11; i_11 += 4) 
                {
                    arr_41 [i_0] [i_0] [i_1] [i_11 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)56)))))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-498))) == (1479732689U)))));
                    arr_42 [i_1] [i_1] [i_11] [i_1] = ((/* implicit */signed char) ((short) arr_13 [i_0] [i_11 - 2] [i_11 - 2] [i_11 + 1]));
                    arr_43 [i_0] [i_0] [i_11 + 2] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_1] [i_1 + 4])) : (((/* implicit */int) var_11)))));
                }
                var_25 = (signed char)123;
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_4);
}
