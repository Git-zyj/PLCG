/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48340
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
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)59981))));
                            arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 4294963200U);
                            var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_1])) ? (arr_4 [i_2] [i_1 + 1] [i_1]) : (arr_4 [i_1] [i_1 + 1] [i_1])))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */_Bool) (unsigned char)255);
                                var_14 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2837263517U)), (9223372036854775807LL)));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_10 [i_0] [i_0 + 3] [i_1 - 1] [i_2] [i_1] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))));
                            }
                            for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 3) 
                            {
                                var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 1457703768U)), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] [i_5]))))), ((-(4515297405328144424LL)))))));
                                var_17 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1090525652256111487ULL)))))));
                                var_18 = ((/* implicit */int) max(((~(arr_10 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5] [i_5]))), (((/* implicit */long long int) arr_9 [i_2] [i_3] [i_5]))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)164)) ? (((((/* implicit */_Bool) -1239738697)) ? (-1239738719) : (((/* implicit */int) (short)-31397)))) : (((/* implicit */int) (short)25828))))) ? (((/* implicit */unsigned int) 1239738697)) : (min((((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_1 + 1])), (arr_7 [i_0] [i_0] [i_0] [i_0 + 2] [i_5] [i_5 + 1])))));
                            }
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17853898950348317992ULL)) ? (min((((/* implicit */unsigned long long int) arr_0 [i_2])), (1152921504606846975ULL))) : (((/* implicit */unsigned long long int) max((arr_12 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]), (arr_12 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_10 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */long long int) arr_11 [i_1]))))) ? (arr_10 [i_1] [i_1] [i_1 - 1] [i_2] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) 1239738688)) : (4092U))))))) : (max((((/* implicit */unsigned long long int) (~(-1541124816)))), (((((/* implicit */_Bool) -1541124825)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (17853898950348318005ULL)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 869141466953195375LL)) : (2016676752396788642ULL))), (((((/* implicit */_Bool) (unsigned char)37)) ? (0ULL) : (17853898950348317992ULL))))), (((/* implicit */unsigned long long int) 2073574511U))));
                var_22 = ((/* implicit */unsigned long long int) min(((short)13204), (((/* implicit */short) (unsigned char)88))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)211))));
                    var_24 = ((/* implicit */short) (((_Bool)1) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) 3011983545U))));
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_0] [i_0] [i_0] [i_1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_11 [i_0 - 3])) : (((/* implicit */int) arr_11 [i_0 - 1]))));
                    arr_17 [i_1] = ((/* implicit */int) 4515297405328144424LL);
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_26 ^= ((/* implicit */unsigned short) 3722283533606937379ULL);
                            var_27 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)45))));
                            var_28 = ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 + 1] [i_0 - 2])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)23691))))));
                            var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (+(536870908U)))) : (4985461523115268142ULL)));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_30 = (short)-7608;
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */long long int) arr_4 [i_0 + 2] [i_1 + 1] [i_1])) : (-2566321038061383893LL)));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_8] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4515297405328144436LL)) ? ((-2147483647 - 1)) : (arr_24 [i_0] [i_1] [i_7] [i_8] [i_10])))) : (arr_7 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6378044931861066973LL)) ? (0ULL) : (((/* implicit */unsigned long long int) -4515297405328144436LL))));
                        }
                        var_34 ^= ((/* implicit */int) arr_22 [i_8] [i_7] [i_7] [i_1] [i_1] [i_0]);
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (short)7627))));
                }
            }
        } 
    } 
    var_37 = ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)59978))))))) ? (2147483627) : (((/* implicit */int) var_5)));
}
