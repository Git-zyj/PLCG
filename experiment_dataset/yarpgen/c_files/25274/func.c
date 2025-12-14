/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25274
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
    var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1062247561)) ? (max((((/* implicit */unsigned long long int) var_10)), ((-(3380043870594640597ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_12 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -1062247567)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_3)))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))))) == (arr_0 [i_0]))))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        var_13 -= ((/* implicit */unsigned char) (_Bool)0);
        var_14 = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned char) ((_Bool) (-(arr_5 [i_1 - 1] [i_1 + 1]))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned int) -1062247562)) : (arr_4 [i_1 + 1])))) ? (11179895225314748089ULL) : (4051164049368670237ULL)));
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1062247542)) ? (11179895225314748060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2])))))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    {
                        arr_19 [i_5] |= (!(((/* implicit */_Bool) var_9)));
                        arr_20 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */long long int) arr_10 [i_2]);
                        arr_21 [i_5] = ((/* implicit */long long int) -1062247575);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
    {
        arr_25 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((((/* implicit */int) (unsigned short)55573)) * (((/* implicit */int) arr_23 [i_6])))) : (((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) (unsigned char)142))))));
        var_17 = ((/* implicit */long long int) ((unsigned short) ((int) min(((unsigned char)118), (((/* implicit */unsigned char) arr_15 [i_6] [i_6] [i_6] [i_6]))))));
    }
    var_18 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)45)) && (((/* implicit */_Bool) -1749822854)))));
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 15; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 2; i_9 < 17; i_9 += 3) 
            {
                {
                    var_19 |= var_8;
                    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 17499910514316861571ULL)) ? (((/* implicit */int) arr_29 [i_7 + 2])) : (((/* implicit */int) arr_16 [i_7] [i_8] [i_9] [i_9] [i_9] [i_7])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_7 + 1])))))));
                }
            } 
        } 
    } 
}
