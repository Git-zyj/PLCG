/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224650
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
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_15 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-114)), (var_11)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 524287)) ? (((/* implicit */int) arr_1 [i_0])) : (-524288))))))));
        var_16 = ((/* implicit */unsigned long long int) 1887538904);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */long long int) var_9);
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) var_3))))));
        var_17 |= ((/* implicit */int) arr_2 [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) (signed char)113)))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((short) ((long long int) (_Bool)1)));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(9223372036854775807LL))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_28 [i_2] [i_2] [i_2] [i_6] [i_7] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 1135415642)) : (47528844U)))) ? (-8296899363079294776LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8935141660703064064LL)) ? (((/* implicit */int) arr_3 [i_1])) : (arr_17 [i_1] [i_6] [i_7] [i_8]))))));
                            arr_29 [i_1] [i_2] [i_6] [i_2] [i_6] = ((/* implicit */unsigned short) 901756264U);
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) (signed char)-8);
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1152921487426977792ULL)))) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 4) 
                {
                    var_23 = (~(((/* implicit */int) ((_Bool) var_11))));
                    var_24 = ((/* implicit */_Bool) (~(-9223372036854775807LL)));
                    var_25 = ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_1]))) ? (-1135415647) : (((/* implicit */int) ((unsigned char) var_8))));
                    arr_32 [i_9] |= ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_21 [19ULL] [i_2] [i_2] [i_2] [19ULL])) < (((/* implicit */int) arr_2 [i_1])))));
                    arr_33 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 4247438440U)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_2] [i_6] [i_2] [i_2])) : (((/* implicit */int) (signed char)-11)))));
                }
                for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_6])) ? (((/* implicit */int) arr_24 [i_1] [i_2] [12] [(short)19])) : (((/* implicit */int) arr_24 [i_1] [i_2] [i_6] [(short)4]))))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned long long int) 1135415641)) : (1ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1080193865U))))));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (short)-10621))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_40 [(unsigned char)9] [(unsigned char)9] [(signed char)10] [i_11] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14807581194519558461ULL)) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    arr_41 [(_Bool)1] [i_2] [i_6] [(_Bool)1] [(unsigned char)4] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152921487426977776ULL)) ? (1739001605U) : (arr_25 [i_1] [i_1] [i_1] [(short)8] [i_1])))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)63981))))) ? (((/* implicit */int) (unsigned char)176)) : (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) arr_27 [(signed char)7] [i_11] [i_11] [(signed char)7] [i_11] [i_2])) : (((/* implicit */int) (signed char)17))))));
                }
            }
            for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_12] [i_12] [5ULL] [i_2] [(unsigned char)20] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_18 [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) (short)63)) ? (3484331126U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_1] [i_12] [i_12]))))))))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 21; i_14 += 4) 
                    {
                        {
                            arr_50 [i_1] [i_1] [i_2] [i_12] [i_13] [(unsigned short)1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) << (((((/* implicit */int) (signed char)-10)) + (33)))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) arr_26 [i_1] [i_2] [i_12] [i_1] [i_12] [i_1]);
                var_33 = ((/* implicit */unsigned int) (signed char)127);
            }
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) -1448310518)) ? (((/* implicit */unsigned long long int) 300586380U)) : (((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8852))) : (17ULL)))));
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2080374784)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_2]))) : (211106232532992LL)));
        }
    }
    for (short i_15 = 0; i_15 < 19; i_15 += 1) 
    {
        arr_53 [i_15] = ((/* implicit */signed char) var_0);
        var_36 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) max((18446744073709551604ULL), (((/* implicit */unsigned long long int) 810636162U))))) ? (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_15] [i_15] [18LL]))) : (arr_20 [i_15] [i_15] [i_15]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)0)))))));
    }
    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-118))))))) ? (((((((/* implicit */_Bool) 1142034159683897961LL)) || (((/* implicit */_Bool) -5462522893339342425LL)))) ? (max((7253409427822764545LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (signed char)122))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27295)))));
}
