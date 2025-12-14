/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24787
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-31474))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) ^ (2738697330U)))))));
                var_11 = (~(((((/* implicit */_Bool) max((18446744073709551611ULL), (((/* implicit */unsigned long long int) (unsigned short)13))))) ? (((((/* implicit */_Bool) 1514819396422677037ULL)) ? (13456784607968815562ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)161), ((unsigned char)70))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    var_12 ^= ((/* implicit */unsigned long long int) 4236195122U);
                    var_13 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) 2564139779U)) | (((long long int) (short)26646))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_0 [i_0] [(unsigned short)2]))))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16931924677286874579ULL)) ? (((/* implicit */unsigned long long int) ((int) var_3))) : (arr_8 [i_3 - 1] [i_3 - 1])));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_4 + 3] [i_1] [i_5 - 2] [3LL])) || (((/* implicit */_Bool) (unsigned short)65510))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-37)) && (((/* implicit */_Bool) arr_1 [i_0])))))) != (-6485375489225050845LL)));
                                var_19 = ((/* implicit */short) (unsigned char)255);
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)16256)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [(unsigned short)9] [i_1] [i_4 + 1] [(unsigned short)9]))) : (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)26646)))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4] [i_4 + 3])) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) arr_20 [i_4 + 2] [3ULL] [3ULL] [i_4 + 1] [3ULL] [i_4 - 2] [6U]))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((((int) (~(4294967295U)))), ((~(((/* implicit */int) ((short) var_9)))))));
}
