/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226542
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
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
    var_17 &= ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)129)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_3] [i_2] [i_1 + 1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (15550363905992139111ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25091)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))), (((/* implicit */int) max((((/* implicit */short) ((unsigned char) arr_13 [i_0] [(short)12] [(short)12]))), (max(((short)32767), (arr_7 [i_0] [i_1] [i_4]))))))));
                                var_19 += ((/* implicit */short) (-((~(((/* implicit */int) (_Bool)1))))));
                                arr_17 [i_0] [i_2] [i_2] [i_2 + 1] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_20 |= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)238))));
                        arr_22 [i_0] [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-10))));
                    }
                    arr_23 [i_0] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)238)))))) * (max((((/* implicit */int) max(((unsigned char)31), (((/* implicit */unsigned char) arr_15 [(signed char)7] [i_1] [i_5] [i_1] [i_1]))))), ((-(((/* implicit */int) (short)13134))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)90)))))));
                                arr_31 [i_0] [i_0] [i_0] [(short)10] [i_1] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_11 [i_7] [i_7 - 2] [i_1 + 2] [i_0] [i_0] [i_8])))), (((((/* implicit */int) (unsigned char)8)) | (((/* implicit */int) (short)-32767))))));
                                arr_32 [i_0] [i_1] [i_5] [(unsigned char)10] = ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) != ((~(((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 -= ((/* implicit */signed char) ((((/* implicit */int) var_7)) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_7))))) && (var_0))))));
}
