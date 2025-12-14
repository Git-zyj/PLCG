/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35006
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
    var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_6)))) + ((-(((/* implicit */int) var_2))))))) : (max((((var_3) ? (13866149458382698548ULL) : (var_8))), (((((/* implicit */_Bool) var_8)) ? (var_0) : (13866149458382698548ULL)))))));
    var_14 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (90705359539240278ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    var_15 *= ((/* implicit */signed char) var_3);
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [(signed char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [9ULL] [i_0 - 1]))) ^ (var_4))) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) ? (((int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0]))));
                var_17 = ((/* implicit */unsigned char) max((arr_0 [i_0 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 1])) || (((/* implicit */_Bool) var_8)))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_2 [i_0 + 1])))) | (((((/* implicit */int) arr_2 [i_0 - 1])) | (((/* implicit */int) arr_2 [i_0 - 1])))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) var_0);
                                var_20 &= ((/* implicit */long long int) arr_14 [i_4 - 1] [11LL] [i_3] [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_19 [i_6] = var_12;
                                arr_20 [i_0 - 1] [i_1] [i_2] [i_5] [(unsigned char)10] = ((/* implicit */_Bool) var_7);
                            }
                        } 
                    } 
                }
                arr_21 [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1])) + (((/* implicit */int) arr_13 [i_0 + 1] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4580594615326853068ULL)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (unsigned char)249))))))) ? (((((/* implicit */int) arr_15 [i_0] [i_0] [i_0 + 1])) - (((/* implicit */int) arr_12 [i_1] [i_0] [i_0 - 1] [i_0])))) : (((((((/* implicit */int) arr_15 [i_0 + 1] [i_0] [(_Bool)1])) | (((/* implicit */int) var_10)))) ^ ((~(((/* implicit */int) arr_17 [i_0] [i_0] [1LL]))))))));
            }
        } 
    } 
}
