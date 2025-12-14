/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229925
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)40490)))) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) var_0))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)5051)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_11 [i_3] [i_0] [i_0] [i_0])))))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned int) var_0)))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32760))) < (((unsigned long long int) ((((((/* implicit */int) (signed char)-52)) + (2147483647))) >> (((((/* implicit */int) var_8)) - (4322))))))));
                    }
                    for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_2] [i_4] [i_0])) | (((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_4] [i_1 + 1]))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_4] [i_0] [i_0])) & (((/* implicit */int) (_Bool)0)))))));
                        arr_17 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) var_9);
                        var_19 ^= ((/* implicit */int) 1840872667U);
                        var_20 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */short) var_10)), (var_13))));
                    }
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (9290513592160469690ULL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)-36))))))) ^ (min((var_5), (((/* implicit */long long int) var_0))))));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        for (short i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    arr_28 [i_6] [i_6] [1] = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), ((+(6286977363400496037LL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_22 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)25046))) | (arr_23 [i_5 + 1] [i_5 + 1]));
                        var_23 = ((/* implicit */long long int) min((var_23), (((((((/* implicit */int) var_0)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_26 [i_8] [i_7] [i_6] [i_5])))));
                    }
                }
            } 
        } 
    } 
}
