/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46544
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)30794))))))) ? (((/* implicit */int) (short)13914)) : (1426286669)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) var_0);
            var_14 = ((/* implicit */unsigned int) var_6);
            var_15 = ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (8791338892904917476LL));
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_16 += ((/* implicit */unsigned long long int) arr_8 [(unsigned short)15] [i_2 - 1] [(unsigned short)15] [i_0]);
                arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) var_8));
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])) ? (arr_2 [i_0] [i_1 + 2]) : (arr_2 [i_0] [i_1 + 1])));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (var_3)));
                    arr_14 [i_0] [i_0] [i_1 + 2] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [11U] [i_1] [11U] [14U] [i_1])) ? (14341588263318391155ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13914)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        arr_19 [i_0] [i_0] [(unsigned short)16] [i_0] [6LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_11))));
                        var_18 -= ((/* implicit */unsigned int) (-(arr_11 [i_4 + 1] [i_3] [i_2 - 1])));
                        var_19 = ((/* implicit */_Bool) var_11);
                        arr_20 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) var_0);
                        var_20 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_4))))));
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) ((arr_18 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        arr_23 [(_Bool)1] [i_1] [i_0] [(short)12] [i_5] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)253))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1] [i_2] [i_2 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_1])))) : (arr_16 [i_0] [i_3] [i_2] [i_1 + 2] [i_0])));
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) arr_15 [i_0] [i_1 + 1] [i_2 - 1] [11LL] [i_2 - 1]);
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_1 + 2] [i_2 - 1])) < (((/* implicit */int) (short)-13915))));
                    }
                }
            }
        }
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8791338892904917477LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)2))));
            arr_29 [i_0] = ((/* implicit */unsigned long long int) var_2);
        }
        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-3804)) + (((/* implicit */int) ((signed char) var_7)))))) ? (((/* implicit */long long int) var_10)) : ((-(arr_1 [i_8])))));
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)54291)) / (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) arr_25 [i_8] [i_8] [i_8] [i_8] [i_0])) : (var_10)))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_26 [i_8] [i_8] [i_8] [i_0] [i_8] [i_8] [i_8])))))))));
            arr_33 [i_0] [i_8] = (signed char)-109;
        }
        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
        {
            arr_36 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_8)))) ? (arr_0 [i_0] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_11 [i_0] [i_0] [i_9])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-13915)), (2823250977U)))) ? (8791338892904917476LL) : (((/* implicit */long long int) (~(var_10))))))));
            var_27 = ((/* implicit */_Bool) var_9);
        }
        var_28 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)22008)), (((int) arr_28 [i_0] [i_0] [i_0]))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56467)) ? (1627362665U) : (3444231730U))))));
        var_30 = ((/* implicit */long long int) (signed char)64);
        arr_39 [i_10] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) 1490223505U)))));
        arr_40 [i_10] = (((-(5523822589042811325ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((-2229522942572714100LL) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
    }
    var_31 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
    var_32 = ((/* implicit */int) ((min((((var_7) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((var_2) ? (var_4) : (((/* implicit */unsigned long long int) var_10)))))) << (((max((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) -869729623)))) - (18446744072839821963ULL)))));
    var_33 = ((/* implicit */unsigned short) var_8);
}
