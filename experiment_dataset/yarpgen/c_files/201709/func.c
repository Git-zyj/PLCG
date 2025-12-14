/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201709
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((unsigned int) max(((short)-1920), ((short)4159)))), (((/* implicit */unsigned int) 1005505339)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_0] = ((unsigned int) (signed char)-104);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-11)), (((((/* implicit */int) ((((/* implicit */_Bool) (short)9903)) || (((/* implicit */_Bool) -1005505340))))) + (((((/* implicit */int) (signed char)104)) % (((/* implicit */int) (signed char)3))))))));
                        var_18 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_3]) > (arr_5 [(short)12] [i_3] [i_3]))))) >= (max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_3] [i_3])), (var_7))))))) == (((max((var_5), (((/* implicit */unsigned long long int) arr_1 [i_3])))) % (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_3] [i_3] [i_0])))))));
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((arr_3 [i_0 - 1] [i_4]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [(short)3] [i_1 + 1] [i_2] [i_4]))))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [(unsigned char)10]))))))) % (max((((int) arr_1 [2U])), (((/* implicit */int) ((unsigned char) var_3)))))));
                        arr_16 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_4] = ((/* implicit */long long int) ((short) max((min((-684217380), (((/* implicit */int) (short)-12334)))), (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 1] [i_4] [9ULL] [i_1])) / (((/* implicit */int) arr_10 [i_0] [(short)6] [i_0] [(unsigned short)9])))))));
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_4])) < (((/* implicit */int) var_14)))))) ^ (((unsigned int) (signed char)89)))) < (((/* implicit */unsigned int) ((int) max((-1LL), (((/* implicit */long long int) (signed char)-36))))))));
                        var_21 = ((/* implicit */int) ((min((max((((/* implicit */unsigned int) 127)), (arr_15 [i_0 - 1] [i_1 - 1] [i_2] [3U]))), (max((arr_7 [i_4]), (arr_15 [i_0] [i_0] [i_0] [i_0 - 1]))))) < (min((min((arr_1 [i_0]), (((/* implicit */unsigned int) (signed char)3)))), (((/* implicit */unsigned int) min((765616465), (((/* implicit */int) (_Bool)0)))))))));
                    }
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (20U)))), (min((var_3), (var_3))))));
}
