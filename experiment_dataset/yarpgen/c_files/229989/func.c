/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229989
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
    var_14 = ((/* implicit */unsigned short) var_4);
    var_15 = ((/* implicit */unsigned int) var_11);
    var_16 = ((/* implicit */unsigned short) ((((_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) var_8)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */short) (-(arr_0 [i_0 - 1])));
        var_17 *= ((/* implicit */short) arr_0 [i_0 + 1]);
        var_18 = ((/* implicit */unsigned int) ((arr_1 [i_0 + 1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) 3393666424U))));
        var_19 = ((/* implicit */_Bool) 956595269);
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_3 [i_1 - 1]))))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 11310305083189187737ULL)))) ? (((((/* implicit */_Bool) 2639278597U)) ? (arr_4 [i_1 + 1] [i_1 - 2]) : (arr_4 [i_1] [i_1 - 1]))) : (arr_4 [i_1 + 2] [i_1 + 2])))) ? ((-((+(arr_3 [i_1 - 2]))))) : ((-(((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_3 [i_1 + 2]) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 3) 
            {
                for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_7 [i_3 - 3] [i_3 - 1] [i_3 + 2])) ? (arr_7 [i_3 - 3] [i_3 - 1] [i_3 + 2]) : (arr_7 [i_3 - 3] [i_3 - 1] [i_3 + 2]))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-64)), (((((/* implicit */_Bool) arr_4 [i_4 + 3] [i_3])) ? (((/* implicit */int) (_Bool)0)) : (956595269)))))) ? (arr_9 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_4 - 1] [i_3 - 3] [i_1 + 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) -956595269)) && (((/* implicit */_Bool) 956595269))))) : (((/* implicit */int) (_Bool)0))))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((max((arr_11 [i_5]), (((/* implicit */unsigned long long int) (unsigned char)167)))), (((/* implicit */unsigned long long int) (short)1413)))))));
        var_25 -= ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) 8159146854953134433LL)), (arr_11 [i_5])))));
        var_26 = (((!(arr_12 [i_5]))) ? (((((/* implicit */_Bool) arr_11 [i_5])) ? (arr_11 [i_5]) : (arr_11 [i_5]))) : (((((/* implicit */_Bool) arr_11 [i_5])) ? (arr_11 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5]))))));
        arr_13 [i_5] [i_5] = ((/* implicit */unsigned long long int) min((-956595276), (((/* implicit */int) (short)-1413))));
    }
    for (int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_7 = 2; i_7 < 24; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 22; i_8 += 1) 
            {
                for (unsigned int i_9 = 3; i_9 < 24; i_9 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(arr_24 [i_6] [i_7] [i_6] [i_9 - 3]))), (((/* implicit */unsigned long long int) arr_14 [i_6] [i_7 - 1]))))) ? (((((/* implicit */_Bool) ((unsigned short) (short)32762))) ? ((+(((/* implicit */int) arr_15 [i_6])))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) arr_23 [i_6] [i_7 - 2] [i_6] [i_9 + 1])))))) : ((+(((/* implicit */int) arr_14 [i_8 - 1] [i_7 - 1]))))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_23 [i_6] [i_8 - 1] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_23 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1])) : (((/* implicit */int) arr_23 [i_9] [i_9] [i_9 - 2] [i_9 - 2])))), ((+(((/* implicit */int) arr_23 [i_6] [i_7 - 1] [i_9 - 3] [i_7 - 1])))))))));
                        var_29 -= ((/* implicit */long long int) arr_23 [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8 + 1]);
                        var_30 = ((/* implicit */int) arr_11 [i_6]);
                        arr_25 [i_9] [i_7 + 1] [i_8 + 2] [i_8 + 3] [i_9 + 1] [i_9 + 1] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_12 [i_6]))))));
                    }
                } 
            } 
        } 
        arr_26 [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_6] [i_6] [i_6])))))));
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 22; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 21; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_37 [i_11 + 2] [i_10 - 3] [i_6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_12] [i_10] [i_10])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_18 [i_6] [i_10 - 2] [i_11]))))))) ? (((/* implicit */int) (short)23617)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [i_11 + 1] [i_12])) ? (((/* implicit */int) (short)1396)) : (((/* implicit */int) arr_27 [i_10 - 3] [i_11] [i_12]))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 2; i_13 < 24; i_13 += 1) 
                        {
                            var_31 ^= ((/* implicit */short) ((unsigned char) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_11 + 1] [i_10] [i_6] [i_6]))) <= (9028439842793355934LL)))), (((((/* implicit */_Bool) arr_30 [i_11])) ? (((/* implicit */int) arr_20 [i_13] [i_11] [i_6] [i_6])) : (((/* implicit */int) arr_23 [i_6] [i_13 - 1] [i_11] [i_12])))))));
                            var_32 = ((/* implicit */_Bool) min((max((arr_30 [i_10 + 2]), (arr_30 [i_10 - 1]))), (((((/* implicit */_Bool) arr_30 [i_10 + 1])) ? (arr_30 [i_10 - 2]) : (arr_30 [i_10 + 3])))));
                            arr_40 [i_13] [i_10] [i_11] [i_12] [i_13 + 1] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_21 [i_11 - 1] [i_10] [i_10 + 1])) || (((/* implicit */_Bool) (short)(-32767 - 1)))))));
                            var_33 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(956595269)))) ? (((((/* implicit */_Bool) 956595275)) ? (((/* implicit */int) arr_20 [i_11 + 3] [i_11 + 4] [i_11 + 3] [i_11 - 1])) : (((/* implicit */int) arr_20 [i_11 + 1] [i_11 + 1] [i_11 + 2] [i_11 - 1])))) : (((/* implicit */int) arr_16 [i_6]))));
                        }
                        var_34 += (((!(arr_32 [i_6] [i_11 + 2] [i_10 + 3]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_6] [i_11 + 3] [i_10 - 1])) || (((/* implicit */_Bool) max((((/* implicit */int) arr_19 [i_6])), (-956595275))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_27 [i_11 + 1] [i_10] [i_6])))))));
                    }
                } 
            } 
        } 
        var_35 *= ((/* implicit */unsigned int) (((_Bool)1) ? (-1087402805) : (((/* implicit */int) (_Bool)1))));
    }
    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) 14286018468012968036ULL))));
}
