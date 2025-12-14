/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23221
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (710975738U)))))) ? (((((/* implicit */_Bool) ((signed char) var_2))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32246)) + (((/* implicit */int) (short)22537))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_18 &= ((/* implicit */_Bool) arr_0 [(signed char)12] [(signed char)12]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (arr_0 [i_0] [i_2])));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)119)), (72057593970819072ULL)));
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [2U] [i_2] [i_2]))) & (1915271731U)))) && ((!(arr_6 [i_0] [i_2] [i_0 - 2])))));
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) (((+(arr_3 [i_0 + 4]))) >> (((2379695593U) - (2379695579U)))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)179));
        /* LoopSeq 3 */
        for (signed char i_3 = 2; i_3 < 12; i_3 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_5 [9U])) - (((/* implicit */int) arr_1 [i_0] [i_0])))) - (((((/* implicit */_Bool) 2850053031U)) ? (-1) : (((/* implicit */int) (short)32250)))))) | (((/* implicit */int) (!(arr_6 [i_0] [i_0] [i_3 - 1]))))));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-32236);
        }
        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 14; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_21 [i_0] [i_4 + 1] [i_5] [i_5] [i_4 + 1] = ((/* implicit */short) (unsigned char)179);
                        var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (_Bool)1))));
                        arr_22 [i_0] [i_0] [i_0] [i_5] [i_6] [11ULL] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)510)) ? (min((((/* implicit */unsigned int) arr_14 [i_5])), (arr_3 [i_4]))) : (2379695564U)))) + (8301623714834122066ULL));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0 + 4])) - (((/* implicit */int) max((arr_5 [i_0 + 4]), (((/* implicit */unsigned short) (signed char)-9)))))));
        }
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            var_25 += ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)94)), (((((/* implicit */_Bool) arr_16 [i_0 + 2] [7U] [i_0 - 1])) ? (-911265370) : (arr_4 [i_0] [i_0 + 1] [3])))));
            /* LoopNest 3 */
            for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                for (int i_9 = 1; i_9 < 12; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) min((var_26), (((((/* implicit */int) (unsigned char)1)) <= (((/* implicit */int) (signed char)-99))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1376)) ? (-181794917) : (((min((((/* implicit */int) (unsigned char)70)), (181794916))) & (((/* implicit */int) (unsigned char)42))))));
                            var_28 = ((/* implicit */_Bool) 17986385576431108662ULL);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned char) arr_24 [i_0 + 1]);
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)12)) ? (3862901107U) : (((/* implicit */unsigned int) arr_4 [(unsigned short)1] [i_0] [i_7])))), (((/* implicit */unsigned int) (unsigned short)58682))))) ? (min((((/* implicit */unsigned long long int) -4089850236688005961LL)), (11684369598240351820ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_30 [i_0] [i_0 + 3] [i_7] [i_7]), ((unsigned short)42027)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) ((signed char) 175777052))))))));
            /* LoopNest 2 */
            for (short i_11 = 1; i_11 < 14; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_0 + 4] [(_Bool)1] [i_0 + 1] [i_0])) > (((/* implicit */int) (unsigned char)14))))), (((unsigned char) (unsigned short)1212))))) ? (((/* implicit */int) arr_32 [i_0 + 3] [3U] [i_0 + 4] [i_7] [8U] [4] [i_12])) : (((/* implicit */int) (signed char)33))));
                        var_32 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((signed char) arr_14 [i_0]))), (((unsigned short) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) arr_25 [i_11] [i_7] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_7] [i_0])))))));
                        var_33 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */long long int) -1)) >= (4089850236688005960LL))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_0 + 4]))))));
                    }
                } 
            } 
        }
        var_34 = ((/* implicit */int) ((((/* implicit */int) ((arr_34 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)43528), (((/* implicit */unsigned short) (unsigned char)116))))))))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0])), ((unsigned short)22039))))));
    }
}
