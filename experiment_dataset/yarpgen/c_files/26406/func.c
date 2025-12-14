/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26406
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [(_Bool)1] [i_1]))))) ? (((/* implicit */unsigned int) (+((-2147483647 - 1))))) : (min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (0U) : (4294967289U))), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_12 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1998)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))));
                            var_14 &= ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 1344741521)) ? (-8048716553578793365LL) : (8048716553578793345LL)));
                        }
                        for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
                        {
                            var_16 += arr_11 [i_5] [i_5 + 1] [i_5 + 2] [i_5] [i_5 + 2];
                            var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)3] [(signed char)3]))) : (5422199647180777698ULL))) >= (((/* implicit */unsigned long long int) var_6))));
                            var_18 ^= ((/* implicit */unsigned char) ((int) arr_2 [i_5 + 2]));
                        }
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))));
                            arr_19 [i_0] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_6]))));
                            arr_20 [i_3] [i_1] [i_3] = ((954588895) != (2147483647));
                        }
                        var_20 = ((((/* implicit */_Bool) -5097334545839023891LL)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) arr_7 [i_3] [i_3])));
                    }
                    /* LoopSeq 2 */
                    for (short i_7 = 3; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [4LL] [i_7] = (((~(((/* implicit */int) arr_4 [i_7] [i_2] [i_0])))) <= (((/* implicit */int) (unsigned short)45866)));
                        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)168)))))));
                        arr_25 [i_0] [12] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_11 [4] [i_1] [4] [i_7 - 1] [i_7]), (((/* implicit */unsigned long long int) 4294967278U))))) ? (((/* implicit */unsigned long long int) 1311901985)) : (max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_7])))))) != (((/* implicit */unsigned long long int) max(((-(4294967278U))), (((arr_18 [i_2]) % (3685059630U))))))));
                        var_22 = ((/* implicit */_Bool) ((((_Bool) (unsigned char)228)) ? ((-(var_3))) : ((-(((((/* implicit */_Bool) arr_1 [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(unsigned char)14] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 3; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        var_23 -= ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (5097334545839023873LL)))));
                        arr_28 [i_0] [i_1] [i_0] [i_2] [i_8] [i_8] = ((/* implicit */unsigned int) arr_6 [i_0] [i_1]);
                        var_24 += ((/* implicit */_Bool) (-(arr_27 [i_0] [i_8] [i_8] [i_0])));
                        var_25 = ((/* implicit */int) arr_18 [i_8]);
                    }
                }
            } 
        } 
    } 
}
