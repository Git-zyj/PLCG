/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32236
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
    var_14 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)81))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)1))))), (((var_5) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (~((((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (var_4) : (((/* implicit */unsigned long long int) var_1)))));
                        arr_12 [18U] [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))) + (var_6)))));
                        var_15 = ((/* implicit */unsigned long long int) max((min(((unsigned short)60045), (((/* implicit */unsigned short) (signed char)-84)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)7)))))));
                    }
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [(signed char)13] [(unsigned char)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_12)))))) : (((((/* implicit */_Bool) var_10)) ? (var_4) : (488034445240463447ULL))))))));
                        var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (var_9)));
                    }
                    arr_16 [21ULL] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 24; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0)));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 13548176392049775559ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            arr_24 [i_0] [(unsigned char)14] [i_0] [11U] [i_6] = ((/* implicit */unsigned int) 13215390986605305453ULL);
                            arr_25 [i_6] = ((/* implicit */unsigned char) (signed char)-123);
                            arr_26 [i_0] [i_1 + 1] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) (signed char)74);
                        }
                        var_19 = ((/* implicit */unsigned char) (-(var_4)));
                    }
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1309872897412453604ULL))))))))));
                    var_21 = var_3;
                    var_22 -= ((/* implicit */unsigned long long int) var_1);
                }
            }
        } 
    } 
}
