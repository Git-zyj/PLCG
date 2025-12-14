/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/297
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
    var_16 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)99)) & (1833890166)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_3 - 2] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [5ULL] [i_2] [i_3 + 2] [i_4] [i_4])) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) -1706082276)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned char)99))))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)126)) % (((/* implicit */int) arr_3 [i_1] [i_3]))))))));
                                var_18 ^= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)245))));
                            }
                            for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                            {
                                var_19 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((10324910930747610619ULL) / (((/* implicit */unsigned long long int) 428091953U))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)30143)) / (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3 + 1] [i_5] [(unsigned short)4] [i_3]))))) : (((arr_10 [i_1] [i_3] [i_2] [i_1] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned short)12288)))))))));
                                arr_19 [i_0] [i_1] [i_2] [i_3 - 2] [i_5] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_13 [i_1] [2LL] [3ULL] [i_3 + 2] [i_3] [7ULL])))), (((/* implicit */int) ((-954905686) == (((/* implicit */int) var_0)))))));
                                var_20 &= ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) ((unsigned short) arr_18 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3]))) : (((((/* implicit */_Bool) arr_18 [4] [i_3] [i_3] [i_3 + 2] [i_3] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_18 [1U] [1U] [(unsigned short)12] [i_3 + 2] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_3] [(unsigned char)6])))));
                                arr_20 [i_0] [i_1] [0LL] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((((/* implicit */long long int) arr_12 [i_2] [i_2] [i_3 + 1] [i_3 - 1] [(_Bool)1] [i_5])) + (min((((/* implicit */long long int) (_Bool)1)), (-1331534042483874480LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 287948901175001088ULL))))))));
                            }
                            var_21 = ((/* implicit */unsigned int) ((((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (2242828394507539005ULL)))) < (((/* implicit */int) min((arr_13 [i_1] [i_3] [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3 - 2]), (arr_13 [i_1] [(signed char)8] [i_3 + 1] [i_3 - 1] [i_3 + 2] [9U]))))));
                            /* LoopSeq 2 */
                            for (int i_6 = 2; i_6 < 17; i_6 += 4) 
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-667727261) + (2147483647))) << (((((/* implicit */int) (unsigned short)12286)) - (12286)))))) ? (((arr_14 [i_2] [i_3 - 2] [i_6 + 2] [i_6] [i_3 - 2] [i_6] [i_6]) | (((/* implicit */unsigned long long int) 144080003703767040LL)))) : (((/* implicit */unsigned long long int) var_1)))))));
                                arr_23 [i_0] [i_1] [i_2] [16] [i_1] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (-9223372036854775807LL - 1LL)))) ? (((var_10) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12309))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 2] [i_6 - 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) max((10804893), (((/* implicit */int) (signed char)10))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-71))))) : (((((/* implicit */_Bool) 17445860193659474316ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (4907562864899958242ULL)))))));
                            }
                            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                            {
                                arr_26 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35361)) ^ (((/* implicit */int) (signed char)-105))))) ? (((((/* implicit */_Bool) 8507413131871551192LL)) ? (arr_10 [16LL] [i_3] [i_2] [i_2] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [15]))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] [i_3]), (((/* implicit */unsigned char) (signed char)-103))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_7])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_7]))))) : (arr_9 [i_1] [i_2] [1])));
                                arr_27 [i_1] [i_1] [i_1] [i_3] [i_7] = ((/* implicit */long long int) ((((max((-8178524872397591078LL), (var_15))) ^ (((/* implicit */long long int) (+(arr_12 [i_0] [i_1] [(unsigned char)9] [i_3] [i_3] [i_7])))))) != ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)127)))))))));
                                var_23 = ((/* implicit */unsigned long long int) ((min((((arr_2 [i_0] [i_7]) ? (2386673672616341810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) ((signed char) (signed char)-90))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (var_10)))) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : ((~(((/* implicit */int) arr_5 [i_2] [i_1])))))))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_3 + 2] [i_3] [i_3] [i_3] [i_3 + 2])) * (((/* implicit */int) arr_24 [i_3 - 1] [i_3] [(unsigned short)14] [i_3] [i_3 + 2]))))) % (((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (((((/* implicit */_Bool) var_13)) ? (8178524872397591053LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125)))))))));
                            }
                            arr_28 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3] [(unsigned char)18] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240)))))) : (max((4907562864899958242ULL), (((/* implicit */unsigned long long int) -1833890160)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) / (2109670961))))));
                            arr_29 [i_1] [i_1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_1] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
                            {
                                arr_36 [i_0] [i_1] [i_1] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [18] [i_10])) ? (((/* implicit */int) arr_33 [i_0] [i_1] [i_8] [i_8] [i_1] [(signed char)5])) : (((/* implicit */int) arr_1 [i_1] [i_10]))))) >= (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (short)32745))))) * (((((/* implicit */unsigned long long int) -2418321244780895455LL)) & (2386673672616341811ULL)))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                            arr_37 [i_0] [i_1] [i_8] [i_1] [i_9] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_14 [i_9] [i_0] [i_8] [i_1] [9U] [i_0] [i_0])) ? (var_1) : (((/* implicit */int) arr_3 [(signed char)7] [i_1])))) - (((/* implicit */int) ((short) 2418321244780895465LL))))) | (((/* implicit */int) (short)16384))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) (~(((((arr_34 [i_0] [i_0] [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [i_0] [i_0] [12ULL] [i_0] [i_0])))) ^ (((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
