/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200900
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) min((var_11), (var_6)));
                                arr_14 [i_0] [i_0] [i_2] = ((/* implicit */int) (-(((((arr_6 [i_1] [i_2] [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [(short)7] [i_4 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18025))) : (arr_6 [i_2] [i_2] [i_2])))))));
                                var_12 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (short)-14239))))));
                                var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_7 [i_2])) ? (-210448422) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_2 + 3] [i_3 - 1] [i_4 + 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) ((short) 210448422));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned int) ((var_4) >> (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (var_4)))))));
                                var_15 &= ((/* implicit */_Bool) arr_6 [(unsigned char)10] [i_1] [i_1]);
                            }
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 210448434))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_5] [i_1] [i_6])) % (((/* implicit */int) (short)12944))))))))));
                            var_17 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) -1999431780)) ? (((/* implicit */int) arr_0 [i_5 - 1] [i_5 + 1])) : (-1999431780))) / (((/* implicit */int) max((arr_0 [i_5 - 1] [i_5 + 1]), (((/* implicit */unsigned short) (unsigned char)189)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (short i_9 = 1; i_9 < 9; i_9 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) arr_27 [i_9 + 1] [i_9] [i_9 + 2] [i_9 + 2]);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) : (3376890312U)))) ? (((/* implicit */int) arr_10 [(signed char)2] [i_9] [i_9 + 2] [i_1])) : (((int) (short)-8904))));
                            var_20 += ((((((/* implicit */_Bool) min(((short)-22825), (((/* implicit */short) arr_27 [i_9] [i_1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_8] [i_0]))) : (var_4))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = var_6;
    var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 1327687615U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) : (var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9)));
}
