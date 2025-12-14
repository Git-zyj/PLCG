/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21890
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)10592)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_0] = arr_0 [i_0];
            var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)54922)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)5346)))) : (arr_1 [0] [i_1 + 1])));
        }
        for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            var_17 = ((/* implicit */int) (unsigned short)60189);
            var_18 = ((/* implicit */unsigned int) 12646520980784591263ULL);
        }
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_19 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) var_0)));
            var_20 = var_6;
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                arr_15 [i_3] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_13)))) ? (5800223092924960335ULL) : (((/* implicit */unsigned long long int) min((((long long int) arr_12 [2] [i_3] [i_0] [i_3])), (((/* implicit */long long int) min((-1110638711), (((/* implicit */int) arr_9 [i_4] [i_5] [i_4]))))))))));
                            var_22 = ((/* implicit */unsigned long long int) var_6);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1116240732)) ^ (1429663340U)))) ? (((unsigned long long int) (+(var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51999))) : (arr_1 [i_0] [i_3])))) || (((arr_18 [i_3] [i_0]) > (5800223092924960372ULL)))))))));
                        }
                    } 
                } 
            }
            for (int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned short) (-((-(arr_17 [i_0] [i_0] [i_0] [7ULL] [i_0])))));
                arr_26 [i_0] [i_3] [i_7] = ((/* implicit */long long int) (short)-11097);
                var_25 = ((/* implicit */unsigned char) arr_14 [i_0] [i_3] [i_7]);
                var_26 ^= ((/* implicit */unsigned long long int) max((1429663340U), (1693700936U)));
                var_27 = ((/* implicit */int) 3592803302U);
            }
            for (int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    arr_31 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [7LL])) ? (((int) -4379230821208600166LL)) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_20 [i_8])) == (var_14))))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(2865303946U)))) ? (((/* implicit */long long int) 2865303946U)) : (-4379230821208600166LL)));
                    var_29 = ((/* implicit */int) max((var_29), (max((123040160), (((/* implicit */int) var_9))))));
                }
                var_30 ^= ((/* implicit */signed char) min(((~((~(var_12))))), (((/* implicit */unsigned int) var_4))));
                var_31 ^= ((/* implicit */unsigned int) ((((int) arr_23 [i_3] [i_3] [i_3])) ^ (((((-1128550275) + (2147483647))) << (((max((-8717211771371800282LL), (((/* implicit */long long int) 1429663340U)))) - (1429663340LL)))))));
                var_32 ^= (~(((/* implicit */int) (_Bool)1)));
            }
            var_33 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)13750)) ? (max((12646520980784591263ULL), (arr_23 [i_0] [i_0] [10U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))))), (((/* implicit */unsigned long long int) 3440726481788991474LL))));
        }
        var_34 = ((/* implicit */long long int) arr_18 [i_0] [i_0]);
    }
    var_35 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -2971416763816866307LL)) ? (((/* implicit */long long int) var_2)) : (8737358817688829975LL))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)68)) || (((/* implicit */_Bool) -1662108392))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_33 [i_10] [i_10]))));
        arr_35 [i_10] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_33 [i_10] [i_10]), (arr_33 [i_10] [i_10])))), ((-(-2770583654619630320LL)))));
        var_37 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)188))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            for (int i_12 = 2; i_12 < 21; i_12 += 1) 
            {
                {
                    arr_40 [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)58867)), (1847561258)));
                    var_38 = ((/* implicit */long long int) ((unsigned long long int) max((arr_39 [i_10] [i_11] [i_10] [i_12 - 2]), (arr_39 [i_12 - 2] [i_12] [i_11] [i_10]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 21; i_13 += 2) 
        {
            for (unsigned int i_14 = 1; i_14 < 19; i_14 += 2) 
            {
                {
                    arr_47 [i_10] [i_13] [i_14 + 3] = ((/* implicit */unsigned int) 1620366501);
                    var_39 *= ((((/* implicit */unsigned long long int) (-(4300724212671569405LL)))) & (((var_1) * (((((/* implicit */unsigned long long int) var_5)) / (arr_44 [i_10] [i_10] [i_10]))))));
                    var_40 ^= ((-1620366502) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) -1620366502)) > (-2770583654619630320LL))))) > (max((779881145974670792ULL), (((/* implicit */unsigned long long int) (unsigned short)61986))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            {
                                var_41 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_13] [i_13 + 1])) ? (arr_39 [i_13] [i_13 - 2] [i_13 - 2] [i_13]) : (max((arr_39 [11U] [i_13 - 3] [i_13 - 2] [i_13 - 3]), (arr_39 [i_13] [i_13 - 2] [i_13 - 3] [i_13])))));
                                var_42 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_49 [i_13] [i_14] [i_14] [i_13] [i_14 + 1] [i_10]), (((/* implicit */int) var_4))))) * (((((/* implicit */_Bool) arr_43 [i_10])) ? (arr_43 [i_10]) : (arr_43 [i_10])))));
                                arr_52 [i_13] [i_13] [i_15] [i_13] [i_13] [i_10] = (+(((/* implicit */int) ((unsigned short) (-(arr_51 [i_10] [i_13] [i_13] [i_15] [i_16]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
