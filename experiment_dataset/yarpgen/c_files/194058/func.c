/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194058
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
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_12 += ((/* implicit */unsigned short) var_6);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) < (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) | (var_5)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0] [i_0] [i_3])), ((~(((/* implicit */int) var_3))))));
                        var_14 += ((/* implicit */unsigned int) (unsigned short)0);
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) % (((/* implicit */int) var_1))))), (max((((/* implicit */long long int) (unsigned short)18)), (arr_2 [i_0])))));
                        var_15 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65524)) && (((/* implicit */_Bool) (unsigned char)31))))), ((~((-(((/* implicit */int) var_11))))))));
                        var_16 |= ((/* implicit */unsigned short) (~(max((((/* implicit */int) arr_6 [i_1] [i_1] [i_2 + 1])), ((-(((/* implicit */int) var_1))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65524)) | (((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0])) ? ((~(((/* implicit */int) var_2)))) : (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    arr_19 [i_0] [i_0] [i_0] [i_5] = var_9;
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 1] [i_0] [i_0 + 2])) < (((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 1] [i_0] [i_0 + 2]))))) ^ (min(((~(((/* implicit */int) arr_6 [i_0] [i_5] [i_0])))), (((/* implicit */int) (unsigned short)8))))));
                                arr_24 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)30)), (-2147483636)))) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) min(((unsigned short)53541), (((/* implicit */unsigned short) ((unsigned char) var_3))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) arr_13 [i_0]);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_8] [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((~(((/* implicit */int) (unsigned char)62)))))), (((((/* implicit */_Bool) (+(arr_2 [i_8])))) ? (((/* implicit */int) ((var_7) < (((/* implicit */int) (short)-25043))))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_8])) < (((/* implicit */int) var_6)))))))));
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_8] [i_8]);
        arr_27 [i_8] = ((/* implicit */short) max((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_2)))), (((/* implicit */int) ((arr_12 [i_8] [i_8]) == (arr_12 [i_8] [i_8]))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 4) 
    {
        for (unsigned short i_10 = 1; i_10 < 13; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                {
                    var_21 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((short)13834), (var_0))))));
                    arr_35 [i_11] [i_10] [i_10] [i_9] = ((/* implicit */unsigned char) ((max(((+(971460761))), (-1387078484))) < (((/* implicit */int) (short)2879))));
                    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)13828)) < (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_10)))))))) < (((/* implicit */int) min((((/* implicit */short) max((arr_5 [i_10] [i_11]), (arr_17 [i_11] [i_11] [i_11] [i_9])))), (arr_1 [i_11] [i_10]))))));
                }
            } 
        } 
    } 
}
