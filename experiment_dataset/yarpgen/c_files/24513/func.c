/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24513
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
    var_20 -= ((/* implicit */int) var_10);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((long long int) (unsigned short)52006))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (7787611174726875877ULL) : (((/* implicit */unsigned long long int) -1294594560))))))));
        var_21 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_2 [i_0] [i_0 + 3])) % (((/* implicit */int) arr_2 [i_0] [i_0 + 1])))));
        var_22 = min((((/* implicit */int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])))));
        var_23 += (!(((/* implicit */_Bool) (((~(((/* implicit */int) arr_0 [i_0])))) / ((+(((/* implicit */int) (unsigned short)52006))))))));
        var_24 *= ((/* implicit */unsigned int) ((long long int) var_16));
    }
    for (long long int i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned int i_3 = 4; i_3 < 21; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_25 = ((/* implicit */int) ((((8055679550459306472ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 3] [i_1 - 1]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 3] [i_1 - 1])))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_14)), (arr_10 [i_3] [i_2] [i_3] [i_4]))))) ^ (((((/* implicit */int) arr_7 [i_1 + 1] [i_3 + 1])) & (((/* implicit */int) arr_7 [i_1 + 1] [i_3 + 1])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_26 = ((((((/* implicit */_Bool) (+(arr_15 [i_1] [i_5] [i_3] [i_4] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) var_16)))))) : (8055679550459306472ULL))) < (((/* implicit */unsigned long long int) 219231340U)));
                            var_27 -= ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_5 [i_3 - 4])))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    {
                        var_28 = ((min((10391064523250245144ULL), (((/* implicit */unsigned long long int) (+(4401763045991815473LL)))))) ^ (arr_18 [i_1] [i_6]));
                        var_29 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned short) (short)10986))) ? (((/* implicit */int) var_4)) : (-947361990)))));
                        var_30 = ((((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1 - 2])) * ((~(((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1 - 1])))));
                    }
                } 
            } 
        } 
    }
}
