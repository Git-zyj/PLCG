/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202642
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [0LL] [i_1] [i_2 - 1] [i_3] [i_3] = (unsigned short)57489;
                        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)8046)) : (((/* implicit */int) (unsigned short)8050))));
                        var_16 = ((/* implicit */int) arr_5 [i_0] [i_0] [1LL]);
                        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8047))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_0] [i_0] [4LL]) / (((/* implicit */long long int) ((int) -983614340861819972LL)))));
        var_18 = ((/* implicit */_Bool) 2289018979U);
        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2289018978U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [8U] [i_0 - 1])))) || (arr_9 [i_0] [i_0 + 2] [i_0])));
        arr_13 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [4U])) ? (arr_8 [(unsigned short)10]) : (arr_8 [(short)6])))) ? (((((/* implicit */_Bool) -1979326715)) ? (-1328013345917837322LL) : (((/* implicit */long long int) -800649724)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0 + 3] [10U])) ? (arr_3 [(short)10] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 2] [i_0] [(_Bool)1]))))))));
    }
    var_20 |= ((/* implicit */int) min((((((unsigned long long int) (unsigned short)8039)) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)146))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (var_4))))));
}
