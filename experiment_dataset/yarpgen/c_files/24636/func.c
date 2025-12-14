/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24636
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
    var_19 = ((/* implicit */int) ((long long int) (!(((_Bool) -519258619)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [0] [i_2 - 2] [i_3] [i_0] [i_1] = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_6)) ? (arr_9 [(signed char)10] [i_1] [(signed char)16] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2]))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3880136690U)) ? (((/* implicit */int) var_10)) : (var_11))) + (((((/* implicit */int) (signed char)-67)) - (((/* implicit */int) (signed char)114))))))) == (18446744073709551605ULL)));
                                arr_14 [i_0] [18ULL] [(unsigned short)18] [i_3] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_2 + 1] [i_3] [(_Bool)1]))));
                                var_21 += ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) (short)18393))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2))))) : (var_15))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42280)))));
                                arr_15 [i_0] = ((/* implicit */int) (-(var_4)));
                            }
                            for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-2)) <= (((/* implicit */int) arr_16 [(_Bool)1] [(short)6] [i_2 + 1] [(signed char)6] [0U]))))) << (((((/* implicit */int) (short)-19219)) + (19237))))))));
                                var_23 = ((/* implicit */short) var_12);
                            }
                            arr_19 [i_2 - 1] [i_2 - 1] [i_1] = arr_10 [i_0] [i_0] [i_2] [i_3] [i_3] [i_2];
                        }
                    } 
                } 
                var_24 |= ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))) + (var_18)))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((((/* implicit */_Bool) 2441674625886656647LL)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (short)-2249)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)250)) : (var_11))))) == (((/* implicit */int) (signed char)-45))));
    var_26 -= var_0;
}
