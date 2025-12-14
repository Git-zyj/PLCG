/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38145
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
    var_13 = ((/* implicit */_Bool) ((unsigned int) var_1));
    var_14 = var_12;
    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)135)))))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-16))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) 4121464324U);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_10 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                        arr_11 [i_3] [i_0] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) -1534131602);
                        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_18 &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)0] [i_4])) : (((/* implicit */int) arr_1 [i_4]))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 3404548082635996716LL)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (short)4493)))))));
                        var_20 = ((/* implicit */long long int) (_Bool)1);
                        var_21 = ((/* implicit */unsigned char) (signed char)15);
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 4) 
                        {
                            var_22 &= (~(arr_7 [i_2 - 1] [i_2 + 1] [i_5 + 1] [i_5]));
                            arr_16 [i_5] [(_Bool)1] [i_1] [i_1] [4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) ((short) 6955209367085118196LL)))));
                            arr_17 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 0U)) * (9837704332244053430ULL)));
                            arr_18 [i_4] = ((/* implicit */signed char) (((+(-8516475985713955668LL))) & (((/* implicit */long long int) arr_7 [i_1] [i_2 - 1] [i_5] [i_5 - 2]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) > (7276655847127350362ULL)));
                            var_25 = ((/* implicit */long long int) max((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1534244006)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99)))))) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_4] [i_1])))))));
                            arr_23 [i_0] [i_1] [i_1] [(unsigned char)2] [i_6] [(unsigned char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_0])) >= (((/* implicit */int) (_Bool)1))));
                            var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -454609705151001314LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_2] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)121))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_24 [i_0])) >= (4094040160U)))) : (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 1])))));
                        arr_28 [i_0] [i_1] [i_1] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) : (7069482836458863281LL)))) || (((/* implicit */_Bool) 3944040699U)));
                    }
                    var_27 = ((/* implicit */unsigned long long int) ((0LL) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10996))) != (11146650166547889176ULL)))))));
                }
            } 
        } 
        arr_29 [i_0] = (~(((/* implicit */int) (signed char)58)));
        arr_30 [(unsigned char)3] [i_0] = ((/* implicit */int) ((((unsigned long long int) 0)) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2906666346U)) ? (-5787439290077505555LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))))))));
        arr_31 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)130);
    }
}
