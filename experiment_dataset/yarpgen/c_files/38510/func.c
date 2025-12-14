/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38510
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (signed char)38)) ? (2538644654U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) < (arr_1 [i_0]))))))), (((/* implicit */unsigned int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) (unsigned short)49800);
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        for (signed char i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
                    arr_11 [i_1] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)8] [i_2] [i_3] [i_1])) ? (6899917199502275206LL) : (arr_6 [i_1] [i_2] [i_3])))) ? (((/* implicit */int) arr_8 [(unsigned char)10] [14] [14] [i_3])) : (((/* implicit */int) arr_7 [i_2] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-66)) < (((/* implicit */int) (short)21715))))) : (((/* implicit */int) (signed char)-45))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 += ((/* implicit */signed char) var_4);
        var_19 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_13)) | (2147483647))));
        arr_15 [i_4] = ((/* implicit */signed char) (-(((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13926)))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_20 *= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_12 [i_5])), (18420256866655028693ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199)))))))));
                        arr_26 [i_5] [i_5] [i_7] [i_8] = ((/* implicit */unsigned short) (signed char)-51);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (unsigned short i_10 = 2; i_10 < 17; i_10 += 1) 
            {
                {
                    arr_32 [i_5] [i_5] [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)108)), (11497685997662968963ULL)));
                    var_21 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_0))) || (((/* implicit */_Bool) (+(1385013963))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) -1LL))))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_10] [i_10 - 1] [i_5] [i_10])) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_30 [i_5] [i_9] [i_5] [i_5]))))))) : (arr_1 [9LL])));
                }
            } 
        } 
    }
}
