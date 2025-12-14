/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25259
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (signed char)-61)) | (1327178017)))));
    var_19 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned char)75);
        var_20 = ((/* implicit */unsigned long long int) arr_0 [(_Bool)1]);
    }
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        var_21 ^= (((+(((-360941727) / (((/* implicit */int) arr_1 [i_1] [i_1 + 1])))))) + ((-(((((/* implicit */_Bool) arr_5 [i_1])) ? (360941727) : (((/* implicit */int) (unsigned short)17056)))))));
        arr_7 [i_1 - 3] = ((/* implicit */unsigned short) ((short) (signed char)-11));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min(((short)1408), (((/* implicit */short) arr_4 [i_1])))), (((/* implicit */short) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) (signed char)-34))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_5])) ? (max((arr_16 [i_2] [i_3] [i_4] [i_6]), (arr_9 [i_4] [i_4]))) : (((((/* implicit */_Bool) (unsigned short)50594)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) arr_4 [i_2]))))))) ? (((((((/* implicit */_Bool) arr_21 [i_2] [i_3] [i_3] [(unsigned short)14] [i_6])) && (((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_3] [i_4] [i_5] [i_6])))) ? (((/* implicit */int) arr_2 [i_2] [i_3])) : ((-(((/* implicit */int) (short)1023)))))) : (((/* implicit */int) arr_15 [i_5] [i_4] [i_3] [i_2])));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_12 [i_4]))))))) ? (max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_3])), (arr_10 [i_3]))) : (max((max((((/* implicit */unsigned long long int) arr_1 [i_4] [i_3])), (9427287742637276510ULL))), (((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_4] [i_5] [i_3] [i_5] [i_6]))))));
                                arr_23 [i_6] [i_3] [i_6] [i_5] [i_4] [i_3] [i_2] = (+(max((((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) (unsigned short)2737)))), (((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_3] [i_4] [i_3] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)60728)))))));
                                arr_24 [i_3] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) (+(max((-1327178017), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)87))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-61), (((/* implicit */signed char) arr_4 [i_3]))))) ? (((((/* implicit */_Bool) (short)-23319)) ? (-3954853493726095490LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1327178012))))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (5707287102523718471ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_2] [i_4] [i_2] [i_3] [i_3] [i_2]))))) : ((-(((/* implicit */int) (signed char)47)))))) : (((/* implicit */int) arr_0 [i_4]))));
                }
            } 
        } 
        arr_25 [i_2] = ((/* implicit */signed char) arr_14 [(short)4] [i_2] [i_2]);
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) (-(((((arr_22 [i_2] [7ULL] [i_2] [i_2] [7ULL]) / (19ULL))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_2] [i_2] [i_7] [i_2] [i_2])))))))));
            arr_29 [i_7] [i_7] = ((/* implicit */short) (((_Bool)1) ? ((-((~(arr_8 [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)60728)) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_7] [(unsigned char)12]))))) ? ((~(((/* implicit */int) arr_12 [i_7])))) : (((/* implicit */int) max(((signed char)0), ((signed char)119))))))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7218489447102156814ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30470))) : (9654812608530170070ULL)))) ? (((((((/* implicit */_Bool) 16728924061417565703ULL)) ? (((/* implicit */int) (_Bool)1)) : (547641894))) + (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_7])))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) max((arr_21 [i_2] [i_2] [i_7] [i_2] [i_2]), (((/* implicit */unsigned short) (unsigned char)71))))) : ((-(arr_27 [i_7])))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_27 [i_8])) : (arr_22 [i_9] [i_9] [i_9] [15] [i_9]))))));
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33184)) ? (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60354))) : (arr_19 [(unsigned char)7] [(unsigned char)7] [i_9] [i_9] [i_10] [i_10]))) : (arr_36 [i_8] [i_8] [i_8] [i_8])));
                    var_30 |= ((/* implicit */long long int) arr_0 [i_2]);
                    arr_37 [5] [i_2] [i_2] [5] [i_9] [i_10] = ((/* implicit */unsigned short) ((signed char) max((max((arr_6 [i_8] [i_8]), (((/* implicit */int) arr_17 [i_2] [i_10] [i_2])))), (((/* implicit */int) arr_21 [i_2] [i_8] [i_10] [i_10] [i_10])))));
                    var_31 = ((/* implicit */long long int) arr_9 [i_2] [i_2]);
                }
                for (short i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                {
                    arr_40 [i_9] [i_8] [i_9] [i_11] |= ((/* implicit */signed char) arr_1 [i_8] [i_8]);
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (((((-(((/* implicit */int) (_Bool)0)))) - ((+(arr_32 [i_2] [i_8] [i_9] [13]))))) + (((/* implicit */int) (_Bool)1)))))));
                    var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_39 [i_2] [i_8] [i_9] [i_9] [i_11]))));
                    var_34 = ((/* implicit */unsigned int) arr_17 [i_8] [i_11] [i_11]);
                }
            }
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49761))) + (((((((/* implicit */_Bool) arr_12 [i_2])) && (((/* implicit */_Bool) arr_26 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_45 [i_2] [i_8] [i_12] [i_13]))))) : (((((/* implicit */_Bool) arr_43 [(short)4] [(short)13] [(signed char)14] [i_2] [i_2])) ? (arr_22 [i_2] [i_2] [i_2] [i_2] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))))))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_46 [i_2] [i_8] [i_12] [(_Bool)1]))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((_Bool) min((((((/* implicit */_Bool) (unsigned short)25512)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [(short)2] [i_8] [i_12] [i_13]))) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2370450887U)) ? (2564074437U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))))))))))));
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned char) (_Bool)1);
            arr_47 [i_8] [(unsigned short)3] = ((/* implicit */unsigned short) arr_35 [(signed char)4] [(signed char)4] [i_2] [i_8] [i_8]);
        }
        arr_48 [i_2] = (short)-1662;
    }
    /* LoopNest 2 */
    for (unsigned int i_14 = 4; i_14 < 7; i_14 += 4) 
    {
        for (int i_15 = 2; i_15 < 9; i_15 += 3) 
        {
            {
                var_39 = ((/* implicit */signed char) min((arr_6 [i_14] [i_14 - 4]), (((/* implicit */int) arr_30 [i_14] [i_14 - 1] [i_14 + 2]))));
                var_40 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62932)) ? (arr_34 [i_14] [i_15 - 1] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_14] [i_14])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-11)) && (((/* implicit */_Bool) arr_11 [i_15] [i_15 - 1] [i_15]))))) : (min((arr_9 [i_14 - 1] [3ULL]), (((/* implicit */int) arr_0 [i_15])))))));
                var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8750828619484876651ULL)) ? ((-(max((((/* implicit */unsigned int) arr_46 [i_14] [i_14] [12] [i_14])), (arr_34 [i_14] [i_14 - 4] [i_14]))))) : (((/* implicit */unsigned int) ((arr_44 [i_14 + 3] [i_15 - 1] [i_15] [(short)13]) ? (((/* implicit */int) arr_21 [i_14 - 4] [i_14] [i_14] [i_14 - 4] [(unsigned char)0])) : (((/* implicit */int) arr_41 [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_14 + 3]))))))))));
            }
        } 
    } 
}
