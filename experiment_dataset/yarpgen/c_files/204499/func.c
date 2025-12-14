/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204499
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
    var_10 = ((/* implicit */short) (-(((((/* implicit */int) ((unsigned char) var_7))) ^ (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1 + 1] [i_2] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 270215977642229760LL)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned short)29503))));
                            arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */long long int) ((9690449371365607314ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3909)))));
                        }
                    } 
                } 
                arr_15 [11ULL] [i_1] = ((/* implicit */int) max((((min((((/* implicit */unsigned long long int) 2120622086104032963LL)), (arr_4 [i_1 - 2] [i_0]))) ^ (((/* implicit */unsigned long long int) arr_2 [i_0 + 2])))), (((/* implicit */unsigned long long int) (~(arr_11 [i_1] [i_1 + 1] [i_0 + 2] [i_0 + 2]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_4 = 3; i_4 < 11; i_4 += 3) 
                {
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_21 [i_4] = ((/* implicit */int) (-(var_4)));
                        arr_22 [i_1] [i_1] [i_4 - 3] [i_5] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (2938229701U)))));
                    }
                    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_26 [i_0] [i_0] [i_4] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
                        arr_27 [i_4] [i_6] = ((/* implicit */short) var_6);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_30 [i_0] [i_0] [i_4] [i_7] = ((/* implicit */int) (signed char)-57);
                        arr_31 [i_0] [i_4] [i_0] [i_1] [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_1])) ? (((/* implicit */long long int) arr_28 [i_1])) : (var_0)));
                    }
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        arr_35 [i_0 - 1] [i_4] = ((/* implicit */long long int) arr_24 [i_1 - 2] [i_8] [i_4] [i_8]);
                        arr_36 [i_0] [i_1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0 + 2] [i_8])) || (((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 + 1] [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 2) 
                    {
                        for (signed char i_10 = 2; i_10 < 13; i_10 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_1 - 1] [i_4 - 3] [i_4 - 3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_8 [i_4 + 1] [i_4 + 1])));
                                arr_45 [i_0 - 1] [i_0 + 2] [i_4] [i_0 - 1] [i_9] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_4])) ? (var_4) : (((/* implicit */unsigned int) arr_28 [i_4]))));
                            }
                        } 
                    } 
                    arr_46 [i_4] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-1006936910)))) ? (((/* implicit */long long int) arr_9 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_4 + 2] [i_1] [i_0])) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 + 2] [(_Bool)1] [i_4]))) : (-2120622086104032942LL)))));
                }
                for (int i_11 = 2; i_11 < 13; i_11 += 3) 
                {
                    arr_51 [i_1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_33 [i_0] [i_0] [i_0] [13])))) && (((/* implicit */_Bool) ((long long int) var_8))))));
                    arr_52 [i_11] [i_0] [i_11] = ((/* implicit */short) var_0);
                    arr_53 [i_11] [i_11] [i_11] = ((/* implicit */int) -2120622086104032941LL);
                    arr_54 [i_0] [i_1 + 1] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */short) (signed char)-24)), ((short)-32080)))), (max((((/* implicit */long long int) 819146575U)), (((7607620336193319976LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-33)))))))));
                }
                for (int i_12 = 1; i_12 < 13; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 1) 
                        {
                            {
                                arr_63 [i_1 - 1] [i_14 - 2] [i_12] [i_1 - 1] [i_12] [i_1 - 1] [i_0] = ((/* implicit */short) max(((+(max((((/* implicit */unsigned long long int) var_7)), (var_8))))), (((/* implicit */unsigned long long int) arr_43 [i_0] [i_0 + 1] [i_0] [i_0] [i_12] [i_0] [i_0]))));
                                arr_64 [i_0] [i_13] [i_0] &= ((/* implicit */unsigned long long int) max((((unsigned int) (unsigned short)23870)), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-1)), ((-(((/* implicit */int) (unsigned char)145)))))))));
                            }
                        } 
                    } 
                    arr_65 [i_1] |= ((/* implicit */unsigned long long int) ((short) min((((((/* implicit */_Bool) (short)-32080)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) (short)22940)), ((-2147483647 - 1)))))));
                    arr_66 [i_1] [i_12] [i_1] [i_1] = (-2147483647 - 1);
                }
                arr_67 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (1333771133) : (((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((var_0) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)12854)) ? (534607435) : (((/* implicit */int) (signed char)-50)))))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (min((((/* implicit */int) var_5)), (var_2)))))) : (var_2));
}
