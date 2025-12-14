/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44702
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
    var_14 = ((/* implicit */unsigned char) (-(var_5)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) | ((+(arr_0 [i_0]))))), (18446744073709551587ULL)));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))), (arr_2 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((arr_1 [i_0] [i_0]) - ((~(arr_1 [4] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_16 = ((/* implicit */short) ((int) ((((_Bool) 9378102643775975171ULL)) ? (((/* implicit */int) (short)12717)) : (-1333431611))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)13)) | (((/* implicit */int) (short)1024))));
        var_18 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)243)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)12703))))) : (((/* implicit */int) var_13))));
        var_19 -= ((/* implicit */short) arr_2 [22ULL] [i_1]);
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [(unsigned char)3])))))))) < (((9378102643775975178ULL) & (arr_6 [i_1])))));
    }
    for (short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_21 = ((/* implicit */signed char) arr_0 [i_2]);
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-817))))) ? (max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12737)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-823))) : (4611681620380876800LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-814))) <= (((((/* implicit */_Bool) (unsigned char)192)) ? (3154451570U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-835))))))))))))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (short)12729)) | (((/* implicit */int) (short)-812)))))));
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [(unsigned char)10])) : (arr_10 [i_2])))) || (((/* implicit */_Bool) arr_10 [i_2])))))) ^ (arr_10 [i_2])));
    }
    for (int i_3 = 4; i_3 < 23; i_3 += 3) 
    {
        var_24 = ((/* implicit */signed char) arr_2 [23] [i_3]);
        var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_3 - 4]))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) || (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_2 [i_3] [i_3]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 1; i_5 < 23; i_5 += 4) 
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (arr_0 [i_4])))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 1) 
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-12704))))))))));
                    arr_23 [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_17 [i_6] [i_4] [i_3])));
                }
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((int) arr_16 [i_3 + 1])))));
                var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)809))));
            }
            for (int i_7 = 3; i_7 < 21; i_7 += 3) 
            {
                var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_3 - 2] [i_7 + 1]))));
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_3] [i_3])) ? (arr_21 [i_3] [i_3]) : (((/* implicit */int) arr_12 [i_3 - 4]))));
            }
            var_33 *= ((/* implicit */unsigned char) var_9);
            arr_28 [i_3] [i_4] = ((/* implicit */unsigned short) -1688771510);
        }
        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_9 = 2; i_9 < 21; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) (short)-32755);
                        var_35 -= ((/* implicit */unsigned int) 1415367929);
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (~(5172357977384087754ULL))))));
            arr_35 [i_3] [i_8] [i_3] = ((/* implicit */unsigned char) var_4);
        }
        var_37 = ((/* implicit */unsigned char) var_13);
    }
    var_38 = var_8;
    /* LoopSeq 2 */
    for (short i_11 = 0; i_11 < 17; i_11 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_12 = 1; i_12 < 16; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 4) 
            {
                for (short i_14 = 4; i_14 < 15; i_14 += 1) 
                {
                    {
                        arr_48 [i_12] [i_12] [i_13 + 3] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 3] [i_14 - 2])), (232474801923862951LL))))));
                        var_39 = ((/* implicit */unsigned char) arr_13 [i_12 - 1] [i_12 - 1]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            var_40 = ((/* implicit */unsigned char) (((!(arr_24 [i_11] [i_15]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 376674281U))))) : ((-(arr_22 [i_11] [i_11] [i_15] [i_15] [i_15])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)145)) == (((/* implicit */int) arr_38 [i_15]))));
                var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (unsigned char)245))));
            }
        }
        for (unsigned char i_17 = 0; i_17 < 17; i_17 += 1) 
        {
            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_11])) ? (((/* implicit */int) arr_29 [i_11])) : (((/* implicit */int) arr_29 [i_17]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)243)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_56 [i_11] [i_17])) < (((/* implicit */int) (short)7)))))) ^ (arr_26 [i_11])))))));
            var_44 = (short)8434;
            var_45 *= ((/* implicit */unsigned long long int) ((arr_18 [i_11] [i_11] [i_11]) > (((/* implicit */int) arr_43 [i_11] [i_17] [i_11] [i_11]))));
        }
        /* vectorizable */
        for (short i_18 = 0; i_18 < 17; i_18 += 2) 
        {
            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((unsigned long long int) arr_15 [i_11])))));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 17; i_19 += 3) 
            {
                for (unsigned int i_20 = 0; i_20 < 17; i_20 += 2) 
                {
                    {
                        arr_67 [i_11] [i_19] = ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_12 [i_19]))));
                        var_47 = 7900405113079255790ULL;
                        var_48 = ((/* implicit */_Bool) arr_21 [i_18] [(unsigned short)20]);
                    }
                } 
            } 
            var_49 -= ((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_11] [i_11] [i_18]));
        }
    }
    for (unsigned long long int i_21 = 2; i_21 < 9; i_21 += 3) 
    {
        var_50 += ((/* implicit */unsigned long long int) ((int) (short)-32726));
        var_51 = ((/* implicit */unsigned char) ((unsigned short) ((arr_57 [i_21 + 2] [i_21] [i_21]) <= (((/* implicit */int) arr_51 [i_21 + 1] [i_21 - 1] [i_21])))));
        var_52 = ((/* implicit */signed char) (unsigned char)129);
    }
}
