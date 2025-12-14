/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248160
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [9U] [i_2] [i_0] [i_4 - 1] [i_4] = ((/* implicit */short) var_5);
                                arr_12 [i_1] [i_1] [i_4 + 2] [i_3] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)106)), ((unsigned char)166)))))), (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_0] = ((/* implicit */int) (signed char)-65);
                    arr_14 [13] [i_1] [i_1] [13] = 2117716295;
                }
                for (signed char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                {
                    arr_18 [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) * (max((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) var_2)))))))));
                    arr_19 [15LL] [i_0] [i_1] [11LL] &= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((long long int) var_10))) - (((((/* implicit */_Bool) (short)20248)) ? (var_7) : (((/* implicit */unsigned long long int) var_9)))))));
                }
                for (signed char i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                {
                    arr_23 [i_0] [14U] = ((/* implicit */int) var_0);
                    arr_24 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) var_5);
                    arr_25 [18LL] [18LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18220274498385939454ULL)) ? (405219270) : (((/* implicit */int) (signed char)77))));
                    arr_26 [i_0] [i_1] [i_6] [(unsigned short)19] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_9)), (var_7))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (arr_20 [i_0] [i_0]))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65513)) ? (6101232472102268325ULL) : (((/* implicit */unsigned long long int) 2380191801U)))))));
                }
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        {
                            arr_31 [i_8] = ((/* implicit */signed char) ((short) ((arr_17 [i_0 - 1] [21LL] [i_0 + 1]) | (((/* implicit */int) (signed char)-43)))));
                            arr_32 [(short)12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [16] [16] [(unsigned short)13])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)))) ? (max((((/* implicit */long long int) (signed char)-50)), (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (660206118))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_4))))) : (((((arr_4 [i_0 - 1] [i_0 + 1] [i_8 + 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_2)) + (25159)))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                            {
                                arr_36 [i_8] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) ((unsigned short) (unsigned short)46461))));
                                arr_37 [i_8] [i_8] [(signed char)11] = ((/* implicit */unsigned long long int) (-(var_8)));
                                arr_38 [i_9] [i_8] [(signed char)9] [i_8] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)-25469))));
                                arr_39 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8] [i_8] = ((/* implicit */signed char) ((unsigned short) (short)25461));
                            }
                            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
                            {
                                arr_42 [i_0] [i_8] [i_1] [i_7] [i_8] [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8))))))));
                                arr_43 [i_0] [i_0] [i_7] [i_8] [i_10] = ((/* implicit */unsigned char) var_2);
                                arr_44 [12] [i_10] [i_10] [i_10] [12] [12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_21 [i_0] [i_8 - 1] [i_0 + 1]), ((~(((/* implicit */int) var_5))))))) ? (8540534704430680805ULL) : (((/* implicit */unsigned long long int) (-((+(6206808078026300974LL))))))));
                                arr_45 [i_10] [i_8] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 1271446853U))) ? (min((var_11), (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5)))))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) -1587933289)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_10)))))));
                            }
                            arr_46 [16] [i_1] [i_1] [i_1] = (-(((((int) 1054891899)) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)7944)))))));
                            arr_47 [i_0] [i_0] [i_1] [i_8] [8U] [i_8] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)11783)) ? (arr_9 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */int) (short)-25063))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) var_5);
}
