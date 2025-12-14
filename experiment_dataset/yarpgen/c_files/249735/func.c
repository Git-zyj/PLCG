/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249735
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_12 [(signed char)8] [2LL] [2] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((arr_11 [i_3] [(unsigned short)5] [i_3]) * (arr_1 [9])))))));
                        var_19 *= ((/* implicit */short) (-((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55958)))))));
                        var_20 &= ((/* implicit */_Bool) (~(1756926236)));
                    }
                } 
            } 
        } 
        arr_13 [8ULL] [(signed char)16] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [(short)15])))) == (min((arr_8 [(signed char)12] [(unsigned short)11] [13] [(signed char)8]), (((/* implicit */int) (unsigned short)8191))))))) >> (((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(unsigned char)6] [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_0] [(short)0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_7 [4ULL])))) : ((-(((/* implicit */int) arr_7 [i_0])))))))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */_Bool) arr_5 [(unsigned short)10]);
        var_23 &= min((((((/* implicit */_Bool) -981494587275052550LL)) ? (((/* implicit */int) arr_6 [16U] [(unsigned short)12])) : (((/* implicit */int) arr_6 [i_4] [i_4])))), ((-(((/* implicit */int) (short)25077)))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_14);
    var_25 *= ((/* implicit */unsigned char) var_3);
}
