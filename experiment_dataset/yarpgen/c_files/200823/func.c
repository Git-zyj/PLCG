/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200823
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) 2147483647))));
        var_19 += (~((~(((/* implicit */int) (unsigned short)60265)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) arr_0 [16U]);
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (_Bool)1)))))))) || (((/* implicit */_Bool) max((var_11), (((((/* implicit */int) (short)12629)) | (((/* implicit */int) var_0)))))))));
        arr_6 [(_Bool)1] [i_1] &= ((/* implicit */unsigned short) var_4);
    }
    for (short i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        arr_11 [i_2 - 1] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 + 1]))) : (18446744073709551615ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_21 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (unsigned short)367)) ? (((/* implicit */long long int) var_1)) : (var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2] [i_3])) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_4])) : (((/* implicit */int) var_4)))))));
                    arr_16 [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)12629), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */int) arr_14 [i_2 - 1] [(_Bool)1] [i_4] [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4] [i_4])))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65162)))))));
                    arr_17 [i_2] [i_3] [i_3] = (((+(-1LL))) + (((/* implicit */long long int) -2147483647)));
                    arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) (+(((int) arr_7 [i_3] [i_2]))));
                    arr_19 [i_2] [i_3] [i_3] [i_2] = (~(max((((/* implicit */long long int) (-(arr_7 [i_2] [i_2])))), (arr_9 [i_4] [(_Bool)1]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_20 [i_5]))));
        arr_23 [i_5] = ((/* implicit */long long int) (_Bool)1);
        arr_24 [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) arr_21 [i_5] [i_5]));
    }
    /* LoopNest 3 */
    for (unsigned char i_6 = 3; i_6 < 14; i_6 += 4) 
    {
        for (int i_7 = 4; i_7 < 12; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                {
                    arr_32 [i_6 - 2] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned char)14])) && (((/* implicit */_Bool) var_8))));
                    var_23 = ((/* implicit */short) var_8);
                    var_24 = ((/* implicit */int) 15U);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5277))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))))) : (var_12)))));
}
