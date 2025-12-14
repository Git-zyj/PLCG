/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22178
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
                            {
                                var_16 = ((((/* implicit */_Bool) (~(arr_1 [i_0 + 1])))) || (((/* implicit */_Bool) (((-(((/* implicit */int) (short)-6450)))) | (((((/* implicit */int) (unsigned short)4808)) * (((/* implicit */int) (_Bool)0))))))));
                                arr_14 [i_1] [i_1] [i_1 - 2] [i_1] [(short)16] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)6449))))), (max(((short)6439), (((/* implicit */short) arr_3 [i_1]))))))) || (((/* implicit */_Bool) min((min((-8LL), (((/* implicit */long long int) 15)))), (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))))));
                                var_17 *= ((/* implicit */unsigned int) ((signed char) max((((-13) >= (((/* implicit */int) (short)-6422)))), (((((/* implicit */long long int) ((/* implicit */int) (short)8269))) > (-86128163821224027LL))))));
                                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-6445)))) || ((!(((/* implicit */_Bool) 15))))));
                            }
                            for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                            {
                                var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)6441)) && (((/* implicit */_Bool) arr_3 [i_0 - 1])))) || (((/* implicit */_Bool) var_1))));
                                var_20 = ((/* implicit */signed char) min((min((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) % (arr_1 [i_3]))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)0))))))), (arr_1 [i_3 + 1])));
                                var_21 = ((/* implicit */unsigned short) 7);
                                arr_18 [i_0] [i_0] [i_0 - 1] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_3])) > (((/* implicit */int) (signed char)0))))), (var_15)))) ? (((((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_5 + 1]) >> (((/* implicit */int) var_8))))) ? (((12) | (((/* implicit */int) (unsigned short)45659)))) : (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) arr_3 [i_0])))))) : (((/* implicit */int) (short)-6449)));
                                var_22 = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) ((signed char) (signed char)-21))))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                            {
                                var_23 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (short)6438))))))) ? (((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) ((signed char) (_Bool)1)))))) : (((min((((/* implicit */int) var_15)), (-16))) * (((/* implicit */int) min(((short)6429), (((/* implicit */short) var_8)))))))));
                                var_24 = ((/* implicit */_Bool) (+(((long long int) var_0))));
                                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)19))) - (arr_1 [i_3 - 2]))))));
                                var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)23))))), (((min((((/* implicit */unsigned int) var_13)), (3829204120U))) * (((unsigned int) (_Bool)0))))));
                            }
                            arr_21 [i_0] [i_0 - 1] [i_1] [i_0] = var_5;
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13972))) & (23U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_17 [i_0 - 1] [i_1 + 1] [i_7] [i_8] [i_1] [i_1 - 1])))) % (max((((/* implicit */int) arr_5 [(signed char)5] [i_8])), ((((_Bool)1) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)114))))))));
                            arr_30 [i_7] [i_1 + 1] [i_7] [16U] |= ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((((/* implicit */int) (short)-6444)) | (((/* implicit */int) (signed char)-51)))), (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_14)))))))), (max((((/* implicit */unsigned int) (unsigned short)45659)), (max((((/* implicit */unsigned int) (unsigned short)19862)), (var_0)))))));
                            var_29 = ((/* implicit */unsigned short) arr_13 [i_0 + 2] [i_1 - 1] [i_7] [i_8] [i_1] [i_8] [i_8]);
                            var_30 &= ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) var_15);
    var_32 = ((/* implicit */unsigned short) min((((var_10) ? (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) ((signed char) var_1))))), (((/* implicit */int) min(((unsigned short)2), ((unsigned short)65533))))));
    var_33 = ((/* implicit */unsigned short) min((max(((short)20445), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (signed char)1))));
    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) min((var_8), (((var_12) || (((/* implicit */_Bool) max(((signed char)18), (((/* implicit */signed char) (_Bool)1))))))))))));
}
