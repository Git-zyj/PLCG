/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230615
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
    var_18 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (var_16))) ? (((((/* implicit */unsigned long long int) 3019441598U)) + (324477629185920135ULL))) : (((((/* implicit */_Bool) (unsigned short)240)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */unsigned long long int) ((unsigned int) var_0)))));
    var_19 |= ((/* implicit */unsigned short) 324477629185920124ULL);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) ? (arr_3 [i_0 + 1] [0LL]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_5)) > (arr_3 [i_0 + 1] [i_1])))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))), (((324477629185920138ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1])))))));
                }
            } 
        } 
        var_20 ^= ((/* implicit */signed char) var_6);
    }
    for (unsigned int i_3 = 2; i_3 < 6; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_6 [i_3 + 2] [i_3 + 2] [i_3])), (((324477629185920132ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 3] [i_3 + 4] [i_3])))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 7; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        arr_23 [i_4 + 1] [i_4 + 1] [i_4 + 1] [(short)2] [i_3 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18122266444523631480ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_4] [i_6]))) <= (arr_17 [i_3] [i_3]))))))) : (max(((~(-4216719303043608347LL))), (((/* implicit */long long int) arr_13 [i_4 + 3] [i_4 + 3]))))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_3 + 1])) ? (((((/* implicit */_Bool) (+(353372250U)))) ? (((((/* implicit */_Bool) 137541032U)) ? (1357439606U) : (((/* implicit */unsigned int) -887545102)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)245)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [0U])))));
                        var_22 = ((/* implicit */unsigned char) max(((((_Bool)1) ? ((((_Bool)1) ? (860333447128887978ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) (-(1435724989)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3 + 3] [i_4 - 1] [13ULL])) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) arr_6 [i_3 - 2] [i_4 + 3] [(_Bool)1])))))));
                        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3])) ? (arr_12 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))) ? (max((((/* implicit */long long int) 353372233U)), (35184363700224LL))) : (((/* implicit */long long int) max((var_0), (((/* implicit */int) arr_0 [i_5] [(signed char)0])))))));
                        var_24 = max((((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 + 1])) ? (arr_4 [i_3 + 2] [i_3 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4 + 2] [i_3 - 1] [i_3 + 4] [(unsigned short)1]))))), (((/* implicit */unsigned long long int) arr_5 [i_3] [(signed char)1])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((arr_7 [i_3 + 1]) || (((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) 353372281U))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)243))))) || (arr_16 [i_3 - 2] [i_3 - 2])))) : (((/* implicit */int) ((((((/* implicit */_Bool) 1602985342U)) ? (((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [i_3] [i_7] [i_7] [i_8])) : (arr_27 [i_8] [i_8]))) < (((/* implicit */unsigned long long int) (~(arr_3 [i_3 + 3] [i_3 + 3])))))))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 6; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) max((max((arr_13 [i_3] [i_9 + 4]), (arr_13 [7U] [i_9 + 1]))), (arr_13 [i_8] [i_7])));
                                arr_38 [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)9])), (max((((/* implicit */unsigned long long int) arr_35 [i_3 + 1] [i_7] [i_8] [i_9 + 2])), (var_7)))));
                                arr_39 [i_3] [i_3] [i_3] [i_3 + 2] = ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) arr_9 [i_3] [i_8] [i_3])), (arr_35 [i_3 - 2] [i_3] [i_3 + 3] [i_3]))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 1688265260U)) ? (((/* implicit */int) (unsigned short)21800)) : (((/* implicit */int) (unsigned short)1158))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_3] [i_3] [i_3] [i_3] [0LL])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)254)), ((short)1024)))) : (((((/* implicit */_Bool) (short)-11638)) ? (((/* implicit */int) arr_26 [(unsigned short)2] [0ULL] [i_7])) : (((/* implicit */int) arr_26 [i_10] [i_10] [i_10])))))))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) / (3591271646U)))))) ? (((/* implicit */int) arr_16 [i_3] [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)168))))) && (((arr_33 [i_3 + 3] [i_7] [i_9] [i_3 + 3]) != (((/* implicit */unsigned long long int) -1178273195)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_11]))) ^ (arr_4 [i_11] [i_11]))))));
        arr_43 [i_11] = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_11])) & (((/* implicit */int) (_Bool)1)))) == (((((/* implicit */int) arr_31 [i_11] [i_11] [i_11] [i_11] [i_11])) - (1612256765)))));
    }
}
