/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27605
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_14)))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (unsigned short)26837))) ? (((/* implicit */unsigned long long int) ((int) var_8))) : ((+(var_11)))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_17))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) var_6))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            var_20 = ((/* implicit */short) (-(var_7)));
            arr_6 [i_0] [0] [i_1 - 1] = ((/* implicit */short) (-(var_15)));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)38696)) & (((/* implicit */int) (unsigned char)118)))))));
        }
        for (int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            var_22 ^= (-((+(var_8))));
            var_23 *= ((/* implicit */unsigned long long int) var_15);
            var_24 = ((/* implicit */int) min((var_24), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned char)119))))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) < ((~(var_15))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_26 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)));
            arr_14 [i_0] [i_0] = ((/* implicit */short) ((long long int) var_13));
        }
    }
    for (int i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        arr_17 [i_4 - 1] [i_4] = (+(min((var_7), (((/* implicit */unsigned long long int) var_17)))));
        arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) + (var_14)))) : ((+(var_7)))))) ? (((/* implicit */int) var_6)) : ((-(((int) var_17))))));
        arr_19 [i_4] = ((signed char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12)))) / (var_9)));
        var_27 = ((/* implicit */_Bool) max((var_27), (((_Bool) ((var_1) ? (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (-(var_17)))))))));
    }
    for (int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_13))));
        arr_24 [i_5] = ((((var_6) ? (var_14) : (((/* implicit */int) var_16)))) >> (((((/* implicit */_Bool) -1490881303)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)11)))));
    }
    for (int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_29 = ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) % (((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) ((_Bool) var_5))) : ((+(((/* implicit */int) var_10)))))));
        var_30 &= ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-84)), ((unsigned char)137)))), (min((var_14), (((/* implicit */int) var_12))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            {
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) var_0)))) / ((-(((/* implicit */int) (signed char)1))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)159)) ? (-1264025301) : (((/* implicit */int) (signed char)127)))))) : (((/* implicit */int) var_1))));
                arr_36 [i_8] = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_9 = 3; i_9 < 22; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4))))) : (((var_6) ? (var_17) : (((/* implicit */int) var_10)))))))));
            arr_41 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) ((signed char) ((long long int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9)))))))));
            var_33 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_10))))));
        }
        arr_42 [(short)3] = ((/* implicit */int) min((((unsigned int) var_10)), (((/* implicit */unsigned int) ((short) ((int) var_9))))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? ((-(((/* implicit */int) ((unsigned char) var_11))))) : (((/* implicit */int) ((var_2) != (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
    }
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        arr_47 [i_11] |= ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_15) : (var_15)))), (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) ((var_14) <= (((/* implicit */int) var_18)))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                {
                    var_35 -= ((/* implicit */signed char) var_4);
                    var_36 = (-((-(var_14))));
                    arr_53 [i_11] [i_11] [i_13] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((long long int) 6)) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)10)) ? (2057682102108809436ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
        {
            for (short i_15 = 1; i_15 < 16; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    {
                        var_38 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_5))))));
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))));
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 18; i_17 += 3) 
                        {
                            arr_65 [i_11] [i_14] [i_14] [i_16] [0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))))) ? ((-(((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */int) var_12)))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (unsigned short)8))))));
                            var_40 *= ((unsigned long long int) (unsigned short)4);
                            arr_66 [i_14] = ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        }
                        arr_67 [i_11] [i_14] [i_11] [i_15 + 1] [i_15] [i_16] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_8))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) ((short) var_1)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (var_11))))));
                        var_41 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))));
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) min((((unsigned char) (~(var_2)))), (((/* implicit */unsigned char) (!(((((/* implicit */int) var_12)) <= (var_9)))))))))));
        var_43 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) (signed char)67))) <= (3230988259U)));
    }
}
