/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36985
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
    var_20 &= ((/* implicit */short) ((var_12) >= (max(((~(var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(arr_2 [i_0 - 1])));
        var_21 *= (-(min((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */short) var_5))))), (((9829352316369865683ULL) + (arr_2 [(short)14]))))));
        var_22 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_0 - 1])))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)2])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)12])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8617391757339685916ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) : ((((_Bool)1) ? (8617391757339685933ULL) : (9829352316369865683ULL)))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_8 [i_1 - 1]), (arr_8 [i_1 + 1])))) << (((((/* implicit */int) arr_8 [i_1 - 1])) - (((/* implicit */int) arr_8 [i_1 - 1]))))));
                arr_10 [13ULL] |= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (((arr_7 [i_2] [i_2] [(_Bool)1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [3ULL]))))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) max((arr_7 [i_1 - 1] [i_1] [(short)10]), (((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_1 + 1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1])))))));
                                var_25 = ((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_3] [(_Bool)1] [(unsigned char)12] [i_3] [i_1]);
                            }
                        } 
                    } 
                }
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9829352316369865682ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) : (9829352316369865696ULL)));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_16 [i_1 - 1] [(_Bool)0] [i_1] [i_1] [(_Bool)0] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1])))))) + (max((((/* implicit */unsigned long long int) arr_16 [i_1 + 1] [4LL] [i_1 + 1] [i_1] [4LL] [i_1 - 1])), (var_12))))))));
                    var_28 = ((/* implicit */unsigned long long int) ((short) (unsigned char)122));
                    var_29 *= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_1 + 1])) ^ (((/* implicit */int) ((unsigned char) arr_13 [18ULL])))));
                }
            }
        } 
    } 
}
