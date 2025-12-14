/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39191
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
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_11 = ((/* implicit */unsigned char) -1818224624);
        var_12 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_13 = ((/* implicit */unsigned char) min((((((arr_1 [i_0]) & (((/* implicit */int) var_5)))) / (-1071917677))), (((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (arr_1 [i_0 - 2]) : (((/* implicit */int) (unsigned char)24))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) arr_3 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 6; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [(unsigned char)4] [i_1] [i_3] = 8296356940633767761ULL;
                        arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((min((1323391154), (((/* implicit */int) (unsigned char)147)))) > (((/* implicit */int) (unsigned char)147))));
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)147);
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_5 [i_0] [i_4 - 1] [i_0 - 1]), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)218)))))))) <= (((/* implicit */int) ((unsigned char) ((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)9] [(unsigned short)9] [i_0 + 1])))))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (unsigned short i_6 = 1; i_6 < 8; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) arr_1 [i_0]);
                            arr_23 [(unsigned char)7] [(unsigned char)7] [i_4] [i_5] [i_4] [i_6] [i_4] = ((/* implicit */unsigned short) ((((arr_4 [i_0] [i_0 + 2]) > (arr_7 [i_4 + 1] [i_4] [i_6 + 2] [i_6]))) ? (((/* implicit */int) ((unsigned char) var_5))) : ((~((~(((/* implicit */int) arr_5 [i_5] [i_5] [i_4]))))))));
                            arr_24 [i_4] [i_7] = ((/* implicit */unsigned char) arr_6 [i_0]);
                        }
                    } 
                } 
            } 
            arr_25 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)22)) - (((/* implicit */int) (unsigned char)156)))) == (((/* implicit */int) (unsigned char)37))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) var_1);
                            var_18 = ((/* implicit */unsigned char) min(((unsigned short)22349), (((/* implicit */unsigned short) (unsigned char)229))));
                            arr_36 [i_4] = (i_4 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)201)) ? (((((/* implicit */int) (unsigned char)57)) << (((arr_19 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4]) - (14744067783535796059ULL))))) : ((-(((/* implicit */int) (unsigned char)109))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)201)) ? (((((/* implicit */int) (unsigned char)57)) << (((((arr_19 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4]) - (14744067783535796059ULL))) - (8727506418820569959ULL))))) : ((-(((/* implicit */int) (unsigned char)109)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)218))));
            var_20 = ((/* implicit */int) ((unsigned char) (-(((((/* implicit */int) (unsigned char)200)) - (((/* implicit */int) (unsigned char)26)))))));
            arr_40 [i_0 - 2] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)218)) + (((/* implicit */int) (unsigned short)54662))))));
            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)94)) >= (min(((+(((/* implicit */int) (unsigned char)218)))), (((int) (unsigned short)54662))))));
            arr_41 [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_11]);
        }
    }
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        arr_45 [i_12] = arr_43 [i_12];
        /* LoopSeq 1 */
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((unsigned char) arr_43 [i_12]))), (var_0)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -1704355982)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_6))))) : (15161823330662484564ULL)));
            var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)161))));
        }
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                {
                    arr_54 [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_44 [i_12]), (arr_44 [i_12])))) ? (((/* implicit */int) min((arr_44 [i_12]), (arr_44 [i_12])))) : (((/* implicit */int) ((((/* implicit */int) arr_44 [i_15])) == (((/* implicit */int) arr_44 [i_12])))))));
                    var_24 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_52 [i_12] [i_14] [11ULL] [i_15])))) ? (((/* implicit */int) ((unsigned char) arr_50 [i_14]))) : (((/* implicit */int) arr_53 [i_15] [5] [i_15] [i_14]))));
                    arr_55 [i_14] [i_14] = max((((/* implicit */int) arr_49 [i_15])), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (arr_47 [i_12] [i_12])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                }
            } 
        } 
        var_25 = min((((/* implicit */unsigned long long int) -1320756281)), (((arr_52 [i_12] [i_12] [i_12] [i_12]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12] [i_12] [i_12]))))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 2848109358684528901ULL))) - (((/* implicit */int) ((((unsigned long long int) (unsigned char)218)) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109)))))))))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((min((var_9), (min((((/* implicit */int) (unsigned short)59424)), (var_9))))) % (min((((((/* implicit */int) var_4)) / (var_8))), (var_9)))));
    var_28 = ((6095076457396444471ULL) << (((((int) (-(-1502668026)))) - (1502667992))));
}
