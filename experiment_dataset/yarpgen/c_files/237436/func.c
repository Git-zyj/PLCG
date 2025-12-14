/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237436
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((_Bool) (unsigned char)75))) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)180)) != (((/* implicit */int) arr_7 [i_1] [i_1] [i_3]))))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (_Bool)1))))))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((94813489) >> (((285978576338026496LL) - (285978576338026478LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1828224858415056242LL)) | (arr_0 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (-8697172245364615455LL)))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) (short)-14528)) : (((((/* implicit */int) ((arr_9 [i_1] [i_1] [i_0]) >= (arr_10 [i_0] [i_0] [i_1])))) % (((/* implicit */int) var_13))))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_0 [i_0]))));
        }
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)180))));
                var_24 ^= (unsigned char)225;
                /* LoopNest 2 */
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            arr_27 [i_6] [i_5] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_6]))))) - (max((((/* implicit */long long int) ((arr_25 [i_0] [i_5]) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (unsigned short)51144))))), ((((_Bool)1) ? (arr_6 [i_6] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21048)))))))));
                            arr_28 [(_Bool)1] [i_5] [i_6] [i_7] [i_8] [10LL] = ((/* implicit */short) (unsigned char)225);
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_5] [i_6] [i_7] [i_6]))) != (arr_13 [i_0] [i_0] [i_5] [i_6] [i_7] [i_6] [i_8])))), (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (signed char)-120)))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_12 [i_0] [i_5] [i_6] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_15 [i_6] [i_5] [i_5] [i_5] [i_0])) ? (((/* implicit */int) arr_16 [(signed char)7])) : (((/* implicit */int) var_17)))) : (((/* implicit */int) arr_7 [i_5] [i_5] [(_Bool)0])))))));
            }
            arr_29 [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((arr_1 [(short)0]), (((/* implicit */unsigned int) var_18)))) % (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_5])))))))) ? (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (1800812484U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_14)))))));
        }
        for (int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) (unsigned short)43409);
            var_28 = ((/* implicit */unsigned long long int) (((((-(18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((int) (signed char)(-127 - 1)))))) ? (5564135298985336826LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_11 [i_0] [i_9] [i_9] [i_0]))))));
            var_29 = ((/* implicit */_Bool) var_13);
        }
        var_30 ^= ((/* implicit */unsigned short) -9223372036854775794LL);
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((arr_18 [4U] [i_10] [(short)4] [4U]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_24 [(unsigned short)6] [i_10] [(unsigned char)4] [i_10] [i_10]))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-60)) ? (((((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_10] [i_10] [i_10] [6U] [i_10])) ? (((/* implicit */int) arr_3 [(unsigned char)2] [(unsigned char)2])) : ((+(((/* implicit */int) arr_22 [i_10] [i_10] [i_10] [i_10])))))) : ((+((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)256))))))));
        arr_38 [i_10] [4U] = ((/* implicit */int) arr_3 [i_10] [6U]);
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (((_Bool)1) ? (min((2837087007U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)36605))))))) : (((/* implicit */unsigned int) ((int) ((long long int) (unsigned char)22)))))))));
        arr_39 [i_10] = ((/* implicit */signed char) (unsigned short)48484);
    }
    for (int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */short) max((2837087007U), (((/* implicit */unsigned int) 1082092215))));
        var_34 ^= ((/* implicit */short) arr_18 [i_11] [i_11] [i_11] [(_Bool)1]);
    }
    /* vectorizable */
    for (unsigned short i_12 = 1; i_12 < 11; i_12 += 3) 
    {
        var_35 = ((/* implicit */unsigned char) (signed char)-75);
        var_36 = ((/* implicit */unsigned char) arr_42 [1LL] [(_Bool)1]);
    }
    /* LoopSeq 1 */
    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            var_37 += (!(((/* implicit */_Bool) ((long long int) arr_48 [i_13] [i_14 + 1]))));
            arr_49 [i_13] [i_14] [i_14 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 130023424)) ? (((/* implicit */int) (unsigned char)5)) : (40151730)))) ? (((4841642231489798840LL) & (((/* implicit */long long int) 1189400126U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_13])))))) ? (((/* implicit */int) max((arr_48 [i_14 + 1] [i_14 + 1]), (arr_48 [i_14 + 1] [i_14 + 1])))) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (_Bool)1)))))));
            var_38 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_48 [(short)11] [i_14])) ? (((int) (signed char)-17)) : (((/* implicit */int) (signed char)-4)))) == (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (unsigned short)16536)) : (((/* implicit */int) (_Bool)1))))));
            arr_50 [i_13] = ((/* implicit */unsigned short) max((((unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) max(((unsigned short)2), (((/* implicit */unsigned short) (signed char)-61)))))));
        }
        for (unsigned short i_15 = 4; i_15 < 20; i_15 += 4) 
        {
            var_39 = ((/* implicit */_Bool) max((arr_51 [i_13]), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_52 [11] [i_15])) ? (1701885248U) : (4294967295U))))))));
            var_40 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)62275)) ? (((/* implicit */int) arr_45 [(short)1])) : ((-(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_44 [i_15])), (arr_46 [i_15])))) ? (arr_52 [(signed char)16] [i_15 - 4]) : (((/* implicit */int) var_2))))));
        }
        arr_55 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_47 [i_13])) ? (arr_52 [i_13] [i_13]) : (386427116)))))) % (((long long int) arr_52 [i_13] [i_13]))));
        var_41 = ((/* implicit */unsigned char) (~(2147483647)));
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 21; i_16 += 3) 
        {
            var_42 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((-470544901), (((/* implicit */int) max((arr_53 [i_13] [i_16]), ((_Bool)1))))))), (max((((unsigned int) 2343383186U)), (((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-90))))))));
            var_43 = ((/* implicit */unsigned int) ((short) (((_Bool)0) ? (((/* implicit */unsigned long long int) -470544908)) : (arr_51 [i_13]))));
            /* LoopNest 2 */
            for (short i_17 = 2; i_17 < 17; i_17 += 4) 
            {
                for (unsigned int i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    {
                        var_44 = ((/* implicit */long long int) arr_54 [(_Bool)1] [i_17 + 1]);
                        arr_63 [i_13] [i_16] [i_16] [i_18] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) != (7831018321425009123LL))))) <= (16316826129399608892ULL))));
                    }
                } 
            } 
        }
    }
}
